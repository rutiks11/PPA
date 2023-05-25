#include <iostream>
using namespace std;

class Demo
{
    public:
    
    void Fun()
    {
        cout << "Inside Fun\n";
    }

    void Gun()
    {
        cout << "Inside Gun\n";
    }
};

int main()
{
    Demo obj;

    cout<< sizeof(obj) << "\n";

    obj.Fun();  // CALL 1000    CALL _____
    obj.Gun();  // CALL 2000
    
    return 0;
}