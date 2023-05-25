#include <iostream>
using namespace std;

class Base
{
    public:
        int A , B;

        int Addition(int i, int j) // 1000
        {
            return i+j;
        }

        virtual int Subtraction(int i, int j)   //2000
        {
            return i-j;
        }

        virtual int Multiplication(int i,int j) = 0;
};

class Derived :public Base
{
    public:
        int X,Y;

    // 3000
    int Subtraction(int i, int j)
    {
        int Ans = 0;
        Ans = i - j;
        return Ans;
    }

    // 4000
    int Multiplication(int i,int j)
    {
        return i*j;
    }
};

int main()
{
    // Base bobj        // NA
    Base *bp = new Derived();
    int iRet = 0;

    iRet = bp->Addition(11,21);
    cout << "Addition is " << iRet << "\n";

    
    iRet = bp->Subtraction(11,21);
    cout << "Subtraction is " << iRet << "\n";

    iRet = bp->Multiplication(11,21);
    cout << "Multiplication is " << iRet << "\n";

    return 0;
}