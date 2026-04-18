#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int x)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> x;

    int result = binarySearch(arr, n, x);

    if (result != -1)
    {
        cout << "Binary Search Result: " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
