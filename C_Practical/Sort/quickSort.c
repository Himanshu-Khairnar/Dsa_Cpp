#include <stdio.h>

// int parititon(int a[], int low, int high)
// {
//     int pivot = a[high];
//     int i = low - 1;
//     int temp;

//     for (int j = low; j < high; j++)
//     {
//         if (a[j] < pivot)
//         {
//             i++;
//             temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }
//         temp=a[i+1];
//         a[i+1] =a[high];
//         a[high] = temp;
//         return i+1;
//     }
// }

// void quickSort(int a[], int low, int high)
// {
//     if (low < high)
//     {
//         int p = parititon(a, low, high);
//         quickSort(a, low, p - 1);
//         quickSort(a, p + 1, high);
//     }
// }

int parition(int a[], int l, int h)
{
    int pivot = a[h];
    int i = l - 1;
    int temp;

    for (int j = l; j < h; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[h];
    a[h] = temp;
    return i + 1;
}
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = parition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}
int main()
{
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = 6;
    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}