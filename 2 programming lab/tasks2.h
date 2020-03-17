#ifndef UNTITLED38_TASKS2_H
#define UNTITLED38_TASKS2_H
#include <string>

using namespace std;

class Textfluss
{
public:
    explicit Textfluss(const string&);
    explicit Textfluss();
    int Öffne(const string&);
    int Schließen();
    string NamenHolen();
    bool IstGeöffnet();
    int Schreiben(const string&);
    int Schreiben(int);
    int Schreiben(float);
    ~Textfluss();
private:
    string Name;
    bool istgeöffnet = false;
    FILE* file;
};


#endif //UNTITLED38_TASKS2_H
