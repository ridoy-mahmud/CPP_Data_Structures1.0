#include <iostream>
using namespace std;

int linearSearch(int arr[], int num, int key)
{
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int num;
    cout << "Enter The Number of Elements - ";
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the Keyword - ";
    cin >> key;
    cout << linearSearch(arr, num, key) << endl;
    return 0;
}