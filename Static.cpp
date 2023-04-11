#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;

    Demo() // Default constructor
    {
        int i;
        int j;
        static int  k;

    }
    Demo(int a, int b) //Parameterised constructor
    {
        i = 0;
        j = 0;
    }

}

int Demo:: k = 0;

int main()
{
    cout<<"Value of k : "<<Demo::k<<"\n"; 
     Demo obj1(10, 11);
     Demo obj2(20, 21);


     cout<<sizeof(obj);

    return 0;
}

//Size of object is summation of its non static characteristics.
// sizeof(obj) = sizeof(i)+ sizeof(j);
//sizeof(obj) = 4 + 4;
//sizeof(obj) = 8;