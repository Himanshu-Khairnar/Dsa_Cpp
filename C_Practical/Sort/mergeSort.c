#include <stdio.h>

// void merge(int a[], int l, int m, int r)
// {
//     int i = l, j = m + 1, k = 0;
//     int temp[20];
//     while (i <= m && j <= r)
//     {
//         if (a[i] <= a[j])
//         {
//             temp[k] = a[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = a[j];
//             j++;
//         }
//         k++;
//     }
//     while (i <= m)
//     {
//         temp[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j <= r)
//     {
//         temp[k] = a[j];
//         k++;
//         j++;
//     }
//     for (i = l, k = 0; i <= r; i++, k++)
//     {
//         a[i] = temp[k];
//     }
// }

// void mergesort(int a[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = (l + r) / 2;
//         mergesort(a, l, m);
//         mergesort(a, m + 1, r);
//         merge(a, l, m, r);
//     }
// }

void merge(int a[], int l, int m, int r)
{
    int  i = l, j = m + 1, k = 0;
    int temp[20];
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= m)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = l, k = 0; i <= r; i++, k++)
    {
        a[i] = temp[k];
    }
}

void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main()
{
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    mergesort(a, 0, n - 1);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}