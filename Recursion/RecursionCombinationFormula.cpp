#include<iostream>
using namespace std;

int comb(int n, int r)
{
    if(r == 0 || n == r)
        return (1);
    else
        return comb(n-1, r-1) + comb(n-1, r);
}

int main()
{   cout<<comb(4,2);
    return 0;
}