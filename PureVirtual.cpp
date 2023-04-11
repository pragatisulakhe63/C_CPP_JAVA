#include<iostream>
using namespace std;

class Circle
{
    public:
        float PI;
        float Radius;

        Circle()
        {
            PI = 3.14;
            Radius = 0.0;
        }
        Circle(float A, float B)
        {
            PI = A;
            Radius = B;
        }
        void Display()
        {
            cout<<"Value of radius is:"<<Radius<<"\n";
        }
        virtual float Area() = 0;
        virtual float Circumfarance() = 0;

};
class Marvellous : public Circle
{
    public:
        Marvellous() : Circle()
        {

        }
        Marvellous(float X, float Y) : Circle(X,Y)
        {

        }
        float Area()
        {
            float Ans = PI * Radius * Radius;
            return Ans;
        }
        float Circumfarance()
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }
};

int main()
{
     Marvellous mobj1;
     Marvellous mobj2(3.14,10.89);
     
     float fret = 0.0;

     fret = mobj2.Area();
     cout<<"Area is :"<<fret<<"\n";

     fret = mobj2.Circumfarance();
     cout<<"Circumfarance is:"<<fret<<"\n";

    return 0;
}