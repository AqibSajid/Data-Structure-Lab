#include<iostream>
using namespace std;
int main()
{
    int array[13],num,temp, i,j;
    cout<<"Enter the range:"<<endl;
    cin>>num;

    for(i=0; i<num; i++)
    {
        cin>>array[i];
    }
    cout<<"Output 1:"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<array[i]<<" ";
    }
    for(i=0, j=num-1; i<num/2; i++ , j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    cout<<"ln";
    cout<<"Output 2:"<<endl;

    for(i=0; i<num; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
