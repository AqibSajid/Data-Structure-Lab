#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"the size of array is: ";
    cin>>a;

    int array[a];
    cout<<a<<" elements of array: "<<endl;
    for(int i=0; i<a; i++)
        cin>>array[i];

    cout<<"unique element of array is: "<<endl;
    for(int i=0; i<a; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(array[i]==array[j])
            {
                break;
            }

        }
        if (i == j)
            cout << array[i] <<"  ";

    }

    return 0;
}
