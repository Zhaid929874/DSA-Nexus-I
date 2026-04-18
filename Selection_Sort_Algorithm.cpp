#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int Min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[Min])
            {
                Min = j;
            }
        }

        // swap outside inner loop
        if (Min != i)
        {
            swap(arr[i], arr[Min]);
        }
    }
}

int main()
{
    int n = 6;
    int arr[] = {7, 4, 10, 8, 3, 2};

    Selection_Sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}