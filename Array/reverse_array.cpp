#include <iostream>
#include <vector>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int ar[size] = {};
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    reverse(ar, size);
    printarray(ar, size);
    return 0;
}