# include<iostream>

using namespace std;

int main()
{
    int no = 11;
    int &x = no;

    double d = 90.999;
    double &y = d;

    int *p = & no;
    int *(&z) = p;

    cout<<&no<<"\n";
    cout<<&x<<"\n";
    
    return 0;
}