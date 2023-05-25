#include<iostream>
using namespace std;

class Demo
{   
    public:
        int A, B;           // Non Static characteristics
        static int X,Y;     // Static Characteristics

    Demo()  // Default constructor
    {
        // Initialization of non static characteristics
        A = 0;
        B = 0;
    }

    void fun()  // void fun(Demo *this)
    {
        cout << "Inside non static function fun\n";
        cout << "Value of A " << this->A << "\n";
        cout << "Value of B " << this->B << "\n";
        cout << "Value of X " << this->A << "\n";
        cout << "Value of Y " << this->A << "\n";     
    }

    static void gun()   // static void gun()
    {
        cout << "Inside static function gun\n";
        cout << "Value of X " << X << "\n";
        cout << "Value of Y " << Y << "\n";       
    }
};
// Initialisation of static characteristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    Demo::gun();
    Demo obj;

    obj.fun();  // fun(&obj)
    obj.gun();  // Avoid
    
    return 0;
}