#include <iostream>
using namespace std;

int binarySearch(int array[], int key, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == key)
            return mid;

        if (array[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main(void)
{
    int num;
    cout << "Enter The Number of Elements - ";
    cin >> num;

    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "Enter the value of keyword - ";
    cin >> key;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, key, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    return 0;
}