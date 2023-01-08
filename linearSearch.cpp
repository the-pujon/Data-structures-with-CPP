#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter aray size: ";
    cin >> n;
    int a[n];
    cout << "Enter aray elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter the number that you want to search: ";
    int x, index;
    cin >> x;
    int count = 0;

    for (int i = 0; i < n; i++)

    {
        if (a[i] == x)
        {
            count++;
            index = i;
        }
    }
    if (count != 0)
    {
        cout << "The number has found and index number: " << index;
    }
    else
    {
        cout << "The number has not found!" << endl;
    }
}