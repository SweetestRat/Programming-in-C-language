#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool less_than_zero(int n)
{
    return n < 0;
}


template< typename T>
class ring_buffer {
private:
    size_t buf_size = 0;
    size_t current_pos;
    T* arr ;
public:
    class OwnIterator :public iterator<random_access_iterator_tag, T> {
    private:
        T* start;
    public:
        OwnIterator(T* start_) :
                start(start_)
        {

        }
        OwnIterator(const OwnIterator& it) :
                start(it.start)
        {

        }
        bool operator!=(OwnIterator const& other) const {
            return start != other.start;
        }
        bool operator==(OwnIterator const& other) const {
            return start == other.start;
        }
        typename OwnIterator::reference operator*() const {
            return *start;
        }
        OwnIterator& operator++() {
            ++start;
            return *this;
        }
        OwnIterator& operator--() {
            --start;
            return *this;
        }
        OwnIterator& operator + (const size_t n) {
            start += n;
            return *this;
        }
        OwnIterator& operator - (const size_t n) {
            start -= n;
            return *this;
        }
        size_t operator - (OwnIterator const& other) const {
            return this->start - other.start;
        }
        bool operator < (OwnIterator const& other) const {
            return start < other.start;
        }
        bool operator > (OwnIterator const& other) const {
            return start > other.start;
        }
        bool operator >= (OwnIterator const& other) const {
            return start >= other.start;
        }
        bool operator <= (OwnIterator const& other) const {
            return start <= other.start;
        }
        OwnIterator& operator += (const size_t n) {
            start += n;
            return *this;
        }
        OwnIterator& operator -= (const size_t n) {
            start -= n;
            return *this;
        }
        T operator [] (const size_t n) {
            return *(start + n);
        }
    };
    typedef OwnIterator iterator;
    ring_buffer(size_t size_)
    {
        buf_size = size_;
        arr = new T[buf_size];
        current_pos = 0;
        for (size_t i = 0; i < buf_size; i++)
        {
            arr[i] = 0;
        }
    }
    ring_buffer(size_t size_, T value) :
            buf_size(size_)
    {
        arr = new T[buf_size];
        current_pos = 0;
        for (size_t i = 0; i < buf_size; i++)
        {
            arr[i] = value;
        }
    }
    ~ring_buffer() {
        delete[] arr;
    }

    void push_back(T v) {
        arr[current_pos] = v;
        if (current_pos == (buf_size - 1)) {
            current_pos = 0;
        }
        else {
            current_pos++;
        }
    }
    int  size() {
        return buf_size;
    }
    void pop_back() {
        arr[buf_size - 1] = 0;
        current_pos--;
        buf_size--;
    }
    void push_front(T v) {
        T* temp_arr = new T[buf_size];
        temp_arr[0] = v;
        for (size_t i = 1; i < buf_size; i++)
        {
            temp_arr[i] = arr[i-1];
        }
        for (size_t i = 0; i < buf_size; i++)
        {
            arr[i] = temp_arr[i];
        }
    }
    void push_at(const iterator it, T value) {
        T* temp_arr = new T[buf_size];
        int i;
        for ( i = 0; i < buf_size; i++)
        {
            if (it == &(arr[i])) {
                temp_arr[i] = value;
                break;
            }
            else {
                temp_arr[i] = arr[i];
            }
        }
        i++;
        for (size_t j = i - 1; j < buf_size; j++)
        {
            if (i == buf_size) {
                i = 0;
            }
            temp_arr[i] = arr[j];
            i++;
        }
        for (size_t i = 0; i < buf_size; i++)
        {
            arr[i] = temp_arr[i];
        }

    }
    void pop_at(const iterator it) {
        if (it >= end()) {
            throw invalid_argument("Ring_buffer out of range");
        }
        T* temp_arr = new T[buf_size];
        int j = 0;
        for (int i = 0; i < buf_size; i++)
        {
            if (it == &(arr[j])) {
                j++;
                i--;
            }
            else {
                temp_arr[i] = arr[j];
                j++;
            }
        }
        for (size_t i = 0; i < buf_size; i++)
        {
            arr[i] = temp_arr[i];
        }
        buf_size--;

    }
    void pop_front() {
        for (size_t i = 0; i < buf_size -1; i++)
        {
            arr[i] = arr[i + 1];
        }
        buf_size--;
    }
    T get_first() {
        return arr[0];
    }
    T get_last() {
        return arr[buf_size -1];
    }
    iterator begin(){
        return iterator(arr);
    }
    iterator end() {
        return iterator(&(arr[buf_size]));
    }
    const T operator [](size_t N) {
        if (N >= buf_size) {
            throw invalid_argument("Ring_buffer out of range");
        }
        else {
            return  arr[N];
        }
    }
    void resize(size_t n) {
        if (n < buf_size) {
            throw  invalid_argument("Ring cannot be cutted");
        }
        else {
            T* new_arr = new T[n];
            for (int i = 0; i < n; i++)
            {
                new_arr[i] = arr[i];
            }
            current_pos = buf_size;
            buf_size = n;
            arr = new_arr;
        }
    }
};



void print(ring_buffer<int>& ring) {
    for (size_t i = 0; i < ring.size(); i++)
    {
        cout << ring[i] << " ";
    }
    cout << endl;
}

int comp1 (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main() {
    ring_buffer<int> my_buffer(7);
    my_buffer.push_back(5);
    my_buffer.push_back(10);
    my_buffer.push_back(5);
    my_buffer.push_back(323);
    my_buffer.push_back(23);
    my_buffer.push_back(21);
    my_buffer.push_back(234);
    my_buffer.push_back(48);
    print(my_buffer);
    my_buffer.resize(8);
    my_buffer.push_back(67);

    cout << "Resize by 8 elements and push back 67" << endl;

    print(my_buffer);

    cout << "Push front 14, and push front 99" << endl;

    my_buffer.push_front(14);
    my_buffer.push_front(99);

    print(my_buffer);

    auto it = my_buffer.begin();
    it+=2;
    my_buffer.push_at(it, -34);
    cout << "Push at position 3 number -34"<<  endl;

    print(my_buffer);

    cout <<"There are no number less then zero?" <<  endl;

    none_of(my_buffer.begin(), my_buffer.end(), less_than_zero) == 1 ? cout << "Yes" : cout << "No";
    cout << endl;
    my_buffer.pop_back();
    cout << "Pop back" << endl;

    print(my_buffer);

    auto it1 = my_buffer.begin();
    it1 ;
    cout << "Pop at 1 position" << endl;
    my_buffer.pop_at(it1);

    print(my_buffer);

    ring_buffer<int> second(7);

    cout << "Sorted buffer:" << endl;

    sort(my_buffer.begin(), my_buffer.end());

    print(my_buffer);

    copy(my_buffer.begin(), my_buffer.end(), second.begin());

    return 0;

}