#include <iostream>
using namespace std;

void findFirstAndLastOccurrence(int arr[], int n, int x, int &first, int &last)
{
    first = -1;
    last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
}

int main()
{
    int n, x;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to find first and last occurrences: ";
    cin >> x;

    int first, last;

    findFirstAndLastOccurrence(arr, n, x, first, last);

    if (first != -1 && last != -1)
    {
        cout << "First Occurrence = " << first << endl;
        cout << "Last Occurrence = " << last << endl;
    }
    else
    {
        cout << "Element " << x << " not found in the array." << endl;
    }

    return 0;
}
