#include<iostream>
using namespace std;

int main()
{
    int size = 10, length = 5;
    int newElement;
    cin>>newElement;

    int arr[size]={12, 14, 23, 29, 16};

    // Original Array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    // Appending
    // arr[length++] = newElement;
    arr[length] = newElement;
    length++;

    //Appended Array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;

}