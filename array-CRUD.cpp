#include <iostream>
using namespace std;

// CRUD: Create, Read, Update, Delete;

// C= Create
void Create(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// R=Read
void Read(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// U=Update
void Update(int arr[], int n)
{
    int m, k;
    cout << "Enter index number that you want to update: ";
    cin >> m;
    cout << "Enter your update number: ";
    cin >> k;

    arr[m] = k;
    Read(arr, n);
}

// D=Delete
void Delete(int arr[], int n)
{
    int m;
    cout << "Enter index number that you want to delete: ";
    cin >> m;
    for (int i = m; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    int a = n - 1;
    Read(arr, a);
}

int main()
{
    int size;
    cin >> size;
    int arr[size];

    Create(arr, size);
    Update(arr, size);
    Delete(arr, size);

    return 0;
}
