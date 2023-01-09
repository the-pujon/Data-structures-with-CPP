#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // for insertion sort

    for (int i = 1; i < n; i++)
    {
        int temp = a[i];

        int index = i - 1;
        while (index >= 0 && a[index] > a[i])
        {
            a[index + 1] = a[index];
            index--;
        }
        a[index + 1] = temp;
    }

    cout << "After insertion sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}