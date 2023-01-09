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

    int m;
    cout << "\nEnter the number that you want to search: ";
    cin >> m;
    int lb = 0;
    int ub = n - 1;

    int mid;
    mid = (lb + ub) / 2;

    while (lb <= ub && a[mid] != m)
    {

        if (m > a[mid])
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
        mid = (lb + ub) / 2;
    }

    if (a[mid] == m)
    {
        cout << "Number has found and index is: ";
    }
    else
    {
        cout << "Number not found";
    }
    return 0;
}