#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return fact(n-1) * n;
}

int main()
{
    int n;
    cout<<"Enter Number For The Factorial: "<<endl;
    cin>>n;

    cout<<fact(n);
}