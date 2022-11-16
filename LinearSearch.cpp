#include <iostream>
using namespace std;

int LinearSearch(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found at: ";
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Search for: ";
    cin >> key;

    cout << LinearSearch(arr, key, n) << endl;
}