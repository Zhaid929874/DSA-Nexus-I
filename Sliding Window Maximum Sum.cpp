#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n, i, j, win, num, maxSum = numeric_limits<int>::min();
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the window size: ";
    cin >> win;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i <= n - win; i++)
    {
        int sum = 0;
        for (j = 0; j < win; j++)
        {
            sum += arr[i + j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    cout << "Maximum sum: " << maxSum << endl;

    return 0;
}
