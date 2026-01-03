#include <stdio.h>
#include <stdlib.h>

int arr[] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 100};
int n = 10;

int binarySearch(int key)
{
    int left = 0;
    int right = n - 1;
    int mid = 0;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else if (arr[mid] > key)
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int key;

    int result = binarySearch(23);
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n", result);
    }
    return 0;
}