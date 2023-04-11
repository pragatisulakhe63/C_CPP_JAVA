#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength)
        {
            iSize = length;
            Arr = new int [iSize];

        }
        ~Array()
        {
            delete []Arr;
        }
};

int main()
{
    Array obj1(4);
    Array obj2(6);
    
    return 0;

}
        