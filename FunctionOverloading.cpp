#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int Addition(int No1, int No2)

        {
            return No1 + No2;
        }
        int Addition (int No1, int No2, int No3)

        {
            return No1 + No2 + No3;
        }
        double Addition(double No1, double No2)

        {
            return No1 + No2;
        }
        double Addition(double No1, double No2, double No3)
        
        {
            return No1 + No2 + No3;
        }

};
int main()
{
    Arithematic obj;

    cout<<obj.Addition(50,20)<<"\n";
    cout<<obj.Addition(10,20,30)<<"\n";
    cout<<obj.Addition(50.25,20.64)<<"\n";
    cout<<obj.Addition(20.65,34.68,98.78)<<"\n";
    return 0;
}