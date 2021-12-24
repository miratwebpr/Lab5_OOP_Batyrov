

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
    Base(const Base& obj)
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
    virtual bool isA(string className)
    {
        if (className == "Base")
            return true;
        return false;
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
    virtual void print2_5()
    {
        printf("void print2_5 in BASE\n");
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
    virtual bool isA(string className)
    {
        if (className == "Desc")
            return true;
        return false;
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
    virtual void print2_5()
    {
        printf("void print2_5 in DESC\n");
    }
    void someThing()
    {
        printf("someThing()\n");
    }
};
void func1(Base obj)
{
    printf("func1(Base obj)\n");
}
void func2(Base* obj)
{
    printf("func2(Base* obj)\n");
}
void func3(Base& obj)
{
    printf("func3(Base& obj)\n");
}
Base Bfunc1() 
{
    printf("Bfunc1()\n");
    Base b1; 
    return b1;
}
Base* Bfunc2() 
{ 
    printf("Bfunc2()\n");
    Base *b1 = new Base();
    return b1;
}
Base& Bfunc3()
{
    printf("Bfunc3()\n");
    Base b1;
    return b1;
}

int main()
{
    setlocale(LC_ALL, "ru");
    /*
    Base *b = new Desc();
    string out = b->getclassName();
    cout << out << endl;
    delete b;
    */
    /*
    Base *b = new Desc();
    if (b->isA("Base")) {
        Desc* d = dynamic_cast<Desc*>(b);
        d->someThing();
    }
    delete b;
    */
    unique_ptr<Base> b1(new Base());

}
