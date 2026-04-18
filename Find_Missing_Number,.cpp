#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    int totalSum = n * (n + 1) / 2;

    int arrSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arrSum += arr[i];
    }

    return totalSum - arrSum;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter the " << n - 1 << " elements of the array:" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}
