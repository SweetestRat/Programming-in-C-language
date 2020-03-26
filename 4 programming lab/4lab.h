#ifndef INC_4_LAB_4LAB_H
#define INC_4_LAB_4LAB_H

using namespace std;

#include <iostream>

// Интерфейс "Геометрическая фигура".
class IGeoFig {
public:
// Площадь.
    virtual double square() const {return 0;}
// Периметр.
    virtual double perimeter() const {return 0;}
};

// Вектор
class CVector2D {
public:
    double x, y;
};

// Интерфейс "Физический объект".
class IPhysObject {
public:
// Масса, кг.
    virtual double mass() const {return 0;}
// Координаты центра масс, м.
    virtual CVector2D position() const {return {0, 0};}
// Сравнение по массе.
    bool operator==( const IPhysObject& ob ) const {
        if(mass() == ob.mass())
            return true;
        return false;
    }
// Сравнение по массе.
    bool operator<( const IPhysObject& ob ) const {
        if(mass() < ob.mass())
            return true;
        return false;
    }
};

// Интерфейс "Отображаемый"
class IPrintable {
public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
    virtual void draw() const {}
};

// Интерфейс для классов, которые можно задать через диалог с пользователем.
class IDialogInitiable {
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() {}
};

// Интерфейс "Класс"
class BaseCObject: public IGeoFig, public IPhysObject, public IPrintable, public IDialogInitiable {
public:
// Имя класса (типа данных).
    virtual const char* classname() const {return "none";}
// Размер занимаемой памяти.
    virtual size_t size() const {return 0;}
};

#endif //INC_4_LAB_4LAB_H
