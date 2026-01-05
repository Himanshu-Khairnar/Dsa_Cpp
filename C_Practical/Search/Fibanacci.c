#include <stdio.h>

int fibonacciSearch(int a[], int n, int key)
{
    int fibMMm2 = 0;
    int fibMMm1 = 1;
    int fibM = fibMMm2 + fibMMm1;

    while (fibM < n)
    {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }

    int offset = -1;

    while (fibM > 1)
    {
        int i = offset + fibMMm2;

        if (i < n && a[i] < key)
        {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        }
        else if (i < n && a[i] > key)
        {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        }
        else
            return i;
    }

    // if (fibMMm1 && offset + 1 < n && a[offset + 1] == key)
    //     return offset + 1;

    return -1;
}

int main()
{
    int a[] = {10, 22, 35, 40, 45, 50, 80};
    int n = 7;
    int key = 40;

    int pos = fibonacciSearch(a, n, key);

    if (pos != -1)
        printf("Element found at index %d", pos);
    else
        printf("Element not found");

    return 0;
}
