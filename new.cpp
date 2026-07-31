#include<iostream>
using namespace std;
int main()
{
     int*arr;
     int size;
     cout<<"Enter the size of the integer array:";
     cin>>size;
     cout<<"Creating an array of size "<<size<<"..";
     arr= new int[size];
     cout<<"\nDynamic allocation of memory for arry arr is successful.";
     delete arr;  
cout<<"\nEnter array elements:";
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
delete[] arr;
return 0;
}