#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, element;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> element;
        arr.push_back(element);
    }

    cout << "Array after push_back: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Performing pop_back" << endl;

    if (!arr.empty()) {
        arr.pop_back();
    } else {
        cout << "The array is already empty!" << endl;
    }

    cout << "Array after pop_back: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}