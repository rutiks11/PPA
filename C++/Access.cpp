#include <iostream>
using namespace std;

class Base 
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;
    
    public:
        Base()
        {
            A = 11;
            B = 21;
            C = 51;
        }
};

class Derived : public Base
{
    public: 
        int X;
        void Display()
        {
            cout << A << "\n";  // Access
            cout << B << "\n";  // ERROR - Not Access
            cout << C << "\n";  // Access 
        }
};

int main()
{
    Derived dobj;

    cout<< dobj.A << "\n";  // A
    cout<< dobj.B << "\n";  // NA - ERROR
    cout<< dobj.C << "\n";  // NA - ERROR
    cout<< dobj.X << "\n";  // A

    return 0;
}


