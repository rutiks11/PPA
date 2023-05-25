#include <iostream>
using namespace std;


class Demo
{
    public:
        int No1;
        int No2;
    
    Demo()      // Default Constructor
    {
        No1 = 10;
        No2 = 20;
    }

    Demo(int A, int B)  // Parameterise Constructor
    {
        No1 = A;
        No2 = B;
    }

    Demo(Demo &ref) // Copy Constructor
    {
        cout << "Inside copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    ~Demo()
    {
        cout << "Inside Destructor";
    }

};

int main()
{
    Demo obj1;      // Default Constructor
    cout << "Value of No1 from obj1 is : " << obj1.No1 << "\n";
    cout << "Value of No2 from obj1 is : " << obj1.No2 << "\n";
    
    Demo obj2(11,21);
    cout << "Value of No1 from obj2 is :" << obj2.No1 << "\n";
    cout << "Value of No2 from obj2 is :" << obj2.No2 << "\n";
    
    Demo obj3(obj2);     
    cout << "Value of No1 from obj3 is :" << obj2.No1 << "\n";
    cout << "Value of No2 from obj3 is :" << obj2.No2 << "\n";

    return 0;
}