#include<iostream>
using namespace std;

class Overloading
{
    public:
        int Add(int a, int b)
        {
            cout<<"Addition of integer\n";
            return a+b;
        }
        float Add(float a, float b)
        {
            cout<<"Addition of float\n";
             return a+b;
        }
        double Add(double a, double b)
        {
            cout<<"Addition of doubles\n";
             return a+b;
        }
        int Add(int a, int b, int c)
        {
            cout<<"Addition of 3 integers \n";
             return a+b+c;
        }
};
int main()
{
    Overloadin obj;

    i= obj.Add(11, 21);
    cout<<i<<"\n";
    i= obj.Add(11, 21);
    cout<<i<<"\n";
    f = obj.Add(11.9f, 21.9f);
    cout<<f<<"\n";
    d = obj.Add(11.9, 21.9);
    cout<<d<<"\n";
    return 0;
}