#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;
        
        Base()
        {
            cout<<"Inside Base Constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int X;
        int Y;

        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }

};

int main()
{
    Derived *ptr = NULL;

    ptr = new Derived;

    ptr ->fun();
    ptr->gun();

    delete ptr;

    return 0;
}