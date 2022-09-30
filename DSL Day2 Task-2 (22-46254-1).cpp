#include<iostream>
using namespace std;

int main()
{
    int arr1[6]={17,15,23,56,48,11};
    int arr2[6]={5,11,23,17,12,15};

    int arr3[100];
    int a=0;
    int x=0;
    for(int i=0; i<6;i++)
    {
        for (int j=0; j<6; j++)
        {
            if (arr1[i]==arr2[j])
            {
               do
                {
                    arr3[x]=arr1[i];
                    x++;
                    break;
                }
                while(x<100);
                a=1;
            }

        }
    }
     for(int i=0; i<x;i++)
    {
      cout<<arr3[i]<<" ";
    }

    if(a==0)
    {
        cout<<"No common element";
    }

}
