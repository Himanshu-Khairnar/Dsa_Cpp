#include <stdio.h>

// void inserttionSort(int a[], int n)
// {
//     int key, j;
//     for (int i = 1; i < n; i++)
//     {
//         key = a[i];
//         j = i - 1;
//         while (j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j];
//             j--;
//         }
//         a[j + 1] = key;
//     }
// }

void inserttionSort(int a[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int a[] = {2, 32, 43, 12, 1};
    int n = 5;

    inserttionSort(a, n);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}