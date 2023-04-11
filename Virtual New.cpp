#include<iostream>
using namespace std;

class Base
{
    public:                         //Access Specifier
        int A, B;

        void fun()          //1000
        {
            cout<<"Base fun\n";
        }
        virtual void gun()      //2000
        {
            cout<<"Base gun\n";
        }
        virtual void sun()          //3000
        {
            cout<<"Base gun\n";
        }
        virtual void run()          //4000
        {
            cout<<"Base run\n";
        }

};


class Derived : public Base
{
    public:
        int X, Y;
      
        void gun()     
        {
            cout<<"Derived fun\n";
        }
        virtual void run() 
        {   
            cout<<"Derived run\n";  
        }
        virtual  void mun() 
        {    
            cout<<"Derived mun\n"; 
        }
};

int main()
{
    // cout<<"Size of base class:"<<sizeof(Base)<<"\n";
    // cout<<"Size of base class:"<<sizeof(Derived)<<"\n";
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj; //upcasting

    bp-> fun();
    bp-> gun();
    bp-> sun();

    return 0;
}