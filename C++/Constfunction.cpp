#include <iostream>
using namespace std;

class Demo
{
    public:
        int A;
        int B;
        
        const int C;
        const int D;

    Demo(): C(11),D(21) // member initialization list
    {
        A = 0;
        B = 0;
    }

    Demo(int i, int j, int k, int l) : C(k), D(l)
    {
        A = i;
        B = j;
    }

    void fun()
        {
            A++;    // A
            B++;    // A
           // C++;    // ERROR - NA (Cannot change the value of constant)
           // D++;    // NA
        }
    void gun() const // Constant Function
        {
            // A++;    // NA
            // B++;    // NA
            // C++;    // NA
            // D++;    // NA
        }

};

int main()
{
    Demo obj1(11,21,51,101);
    const Demo obj2(11,21,51,101);

    obj1.fun();
    obj1.gun();

    //obj2.fun(); // Constant Object call only constant method 
    obj2.gun();



    return 0;
}
