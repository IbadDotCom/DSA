#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n)
{
    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            cout << "Found at: ";
            return mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Size of array: ";
    cin >> n;

    // Array should be sorted
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Search for: ";
    cin >> key;

    cout << binarySearch(arr, key, n) << endl;
}