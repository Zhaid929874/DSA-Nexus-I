#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if (n < 5)
    {
        cout << "Array size must be at least 5!" << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 2; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "Updated Array after deleting index 2: ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
