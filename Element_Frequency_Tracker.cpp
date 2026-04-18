#include <iostream>
using namespace std;
int countOccurrences(int arr[], int n, int x)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to count occurrences: ";
    cin >> x;
    int result = countOccurrences(arr, n, x);
    cout << "The element " << x << " appears " << result << " times in the array."
         << endl;
    return 0;
}
