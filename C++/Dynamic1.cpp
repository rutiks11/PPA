#include<iostream>
using namespace std;

class Demo
{
    public:

    Demo()
    {
        cout << "Inside default Constructor \n";
    }
    
    Demo(int i, int j)
    {
        cout << "Inside Parameterise Constructor \n";
    }
    ~Demo()
    {
        cout<< "Inside Destructor \n";
    }

};

int main()
{
    Demo obj1;              // Static Memory Allocation
    Demo obj2(11,21);       // Static Memory Allocation

    Demo *p = new Demo();   // Dynamic Memory Allocation
    Demo *q = new Demo();   // Dynamic Memory Allocation
    
    delete p;
    delete q;
    
    cout << "End of main" << "\n";

    return 0;
}

// First destructor of Dynamic memory allocation is called
// End of main statement executed
// Destructor of static memory object allocation is call at the end of the program
