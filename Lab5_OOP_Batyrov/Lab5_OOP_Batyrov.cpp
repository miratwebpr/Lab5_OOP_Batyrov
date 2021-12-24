

#include "stdio.h"
#include <conio.h>
#include <iostream>
#include <memory>
#include <cstring>
#include <typeinfo>
using namespace std;
class Base
{
public:
    Base()
    {
        printf("Base()\n");
    }
    Base(Base* obj)
    {
        printf("Base(Base *obj)\n");
    }
    Base(Base& obj) 
    {
        printf("Base(Base &obj)\n");
    }
    virtual ~Base()
    {
        printf("~Base()\n");
    }
    virtual string getclassName()
    {
        return "Base";
    }
    void print2_2()
    {
        printf("void print2_2\n");
        print2_2Help();
    }
    void print2_2Help()
    {
        printf("void print2_2Help in BASE\n");
    }
    void print2_3()
    {
        printf("void print2_3\n");
        print2_3Help();
    }
    virtual void print2_3Help()
    {
        printf("void print2_3Help in BASE\n");
    }
    void print2_4()
    {
        printf("void print2_4 in BASE\n");
    }
};
class Desc : public Base
{
public:
    Desc() :Base()
    {
        printf("Desc()\n");
    }
    Desc(Desc* obj) : Base(*obj)
    {
        printf("Desc(Desc* obj)\n");
    }
    Desc(Desc& obj) : Base(&obj)
    {
        printf("Desc(Desc& obj)\n");
    }
    ~Desc() 
    {
        printf("~Desc()\n");
    }
    virtual string getclassName()
    {
        return "Desc";
    }
    void print2_2Help()
    {
        printf("void print2_2Help in DESC\n");
    }
    virtual void print2_3Help()
    {
        printf("void print2_3Help in DESC\n");
    }
    void print2_4()
    {
        printf("void print2_4 in DESC\n");
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    /*
    Base *b = new Desc();
    string out = b->getclassName();
    cout << out << endl;
    delete b;
    */
    Base *b = new Desc();
    b->print2_4();
    delete b;
}
