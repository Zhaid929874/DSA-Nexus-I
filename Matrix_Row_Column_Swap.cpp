#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j;
    cout<<"Enter array values"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Before exchanging,"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0; i<3; i++)
    {
        int x =  arr[0][i];
        arr[0][i]=arr[2][i];
        arr[2][i]=x;
    }
    for(i=0; i<3; i++)
    {
        int x =  arr[i][0];
        arr[i][0]=arr[i][2];
        arr[i][2]=x;
    }
    cout<<"After exchanging,"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
