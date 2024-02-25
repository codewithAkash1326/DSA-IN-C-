#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size1;
    cout << "enter the size :" << endl;
    cin >> size1;
    int arr1[size1] = {};
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cout << "enter the size :" << endl;
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int ans[size1 + size2];

    int i = 0; // will help us to iterate on arr1
    int j = 0; // will help us iterate on arr2
    int k = 0; // will help us iterate on ans

    while (i < size1 and j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < size1)
    {
        ans[k] = arr1[i];
        k++;
        i++;
    }
    while (j < size2)
    {
        ans[k] = arr2[j];
        k++;
        j++;
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
