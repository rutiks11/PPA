#include<iostream>

using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            A = 11;
            B = 21;
            cout << "Inside Demo Constructor \n";
        }
        ~Demo()
        {
            cout << "Inside Demo Destructor \n";
        }
        void fun()
        {
            cout << "Inside fun of Demo \n";
        }
};

// Child Class
class Hello : public Demo   // class Hello extends Demo
{
    public:
    int X,Y;

    Hello()
    {
        X = 51;
        Y = 101;
        cout << "Inside Hello Constructor\n";
    }
    
    ~Hello()
    {
        X = 51;
        Y = 101;
        cout << "Inside Hello Destructor\n";
    }

    void gun()
    {
        cout << "Inside gun of Hello \n";
    }
};

class PPA : public Hello
{
    public:
    int I,J;

    PPA()
    {
        cout << "Inside PPA Constructor\n";
        I = 111;
        J = 121;
    }

    ~PPA()
    {
        cout << "Inside PPA Destructor\n";
    }

    void sun()
    {
        cout << "Inside sun of PPA\n";
    }  
};

int main()
{
    cout<<"Inside main"<<"\n";

    cout<<"Size of Demo : "<<sizeof(Demo)<<"\n";
    cout<<"Size of Hello : "<<sizeof(Hello)<<"\n";
    cout<<"Size of PPA : "<<sizeof(PPA)<<"\n";
    
    PPA pobj;

    pobj.fun();
    pobj.gun();
    pobj.sun();

    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

    cout<<"End of main"<<"\n";

    return 0;
}