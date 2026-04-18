#include <iostream>
using namespace std;

void searchMatrix(int matrix[][10], int m, int n, int x)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == x)
            {
                cout << "Element " << x << " found at position (" << i << ", " << j << ")." << endl;
                return;
            }
        }
    }
    cout << "Element not found in the matrix." << endl;
}

int main()
{
    int m, n, x;

    cout << "Enter the rows: ";
    cin >> m;

    cout << "Enter the columns: ";
    cin >> n;

    int matrix[5][10];

    cout << "Enter elements of the matrix:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the element to search: ";
    cin >> x;

    searchMatrix(matrix, m, n, x);

    return 0;
}
