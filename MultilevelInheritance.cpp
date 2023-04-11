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

class DerivedX : public Derived
{
    public:
        int i, j;
        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
        }
        ~DerivedX()
        {
            cout<<"Inside Derived destructor\n";
        };
        void sun()
        {
            cout<<"Inside Derived sun\n";
        }
};

int main()
{
    cout<<"Size of Base :"<<sizeof(Base)<<"\n";
    cout<<"Size of Base :"<<sizeof(Derived)<<"\n";
    cout<<"Size of Base :"<<sizeof(DerivedX)<<"\n";

    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
    
    return 0;
}