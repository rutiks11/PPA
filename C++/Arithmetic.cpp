#include <iostream>
using namespace std;

class Arithematic
{
    private:
        int No1;
        int No2;
    
    public:
        Arithematic()   // Default Constructor
        {
            No1 = 0;
            No2 = 0;
        }

        Arithematic(int A,int B)    // Parameterise Constructor
        {
            No1 = A;
            No2 = B;
        }

        int Addition()          // Method
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        
        int Subtraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithematic obj1(11,21);
    Arithematic obj2;

    int iRet = 0;

    iRet = obj1.Addition();
    cout << "Addition is : " << iRet << "\n";
    
    iRet = obj1.Subtraction();
    cout << "Subtraction is : " << iRet << "\n";


    iRet = obj2.Addition();
    cout << "Addition is : " << iRet << "\n";
    
    iRet = obj2.Subtraction();
    cout << "Subtraction is : " << iRet << "\n";

    // cout<<"Value of No1 : "<<obj1.No1; Error

    return 0;
}