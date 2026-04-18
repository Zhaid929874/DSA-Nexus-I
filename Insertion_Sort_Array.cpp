#include<iostream>
using namespace std;
void Insecction_sort(int arr[], int n)
{
    for(int i=0 ; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int arr[]= {7,5,2,3,1,8};
    int n = 6;
    Insecction_sort(arr,n);
    cout<<"Sorted Array:"<<" ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
