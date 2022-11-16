#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows & columns: ";
    cin >> n >> m;
    cout << "Input " << n * m << " elements:\n";

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Creating a Matrix
    cout << "Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Searching in Matrix
    int x;
    cout << "Search for number: ";
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Found at row: " << i + 1 << " & col: " << j + 1 << endl;
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Not found\n";
    }
    
}