#include<iostream>
using namespace std;

int main()
{
    int arr1[7]={10,20,30,40,50,60,70};
    int arr2[7]={1,2,3,4,5,6,7};

    int arr3[14];
    int i;
    for(i = 0; i<7; i++)
    {
        arr3[i]=arr1[i];
    }
    for(int j=0; j<7;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    for(int j = 14; j>0; j--)
    {
        cout<<arr3[j]<<"\t";
    }

}
