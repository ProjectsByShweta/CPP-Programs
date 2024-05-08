#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;
    Base()
    { cout<<"Base Constructor\n"; }

    int Addition (int i, int j)                //1000
    { return i+j; }

   virtual int Substraction (int i, int j)      //2000
    { return i-j; }

   virtual int Multiplication (int i, int j)= 0;

};
class Derived : public Base
{
    public:
    int X,Y;
    Derived()
    { cout<<"Derived Constructor\n"; }
    
    int Substraction(int i, int j)            //3000
    {return i - j; }

    int Multiplication (int i, int j)         //4000
   { return i*j; }

   virtual int Division (int i, int j)        //5000
   { return i/j; }
};

int main()
{
   // Base bobj;
    Derived dobj;
    Base *bp = &dobj;

    cout<<bp->Addition(10,11)<<"\n";                 //Base addition
    cout<<bp->Substraction(20,11)<<"\n";             //derived substraction
    cout<<bp->Multiplication(10,11)<<"\n";           //derived multiplication
  //  Cout<<bp->Division(100,10)<<"\n";                //error

    return 0;
}