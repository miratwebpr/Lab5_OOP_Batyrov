

#include "stdio.h"
#include <conio.h>
class Base
{
protected:
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
    ~Base()
    {
        printf("~Base()\n");
    }
};
class Desc : public Base
{
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
};
int main()
{
    
}
