// #include <stdio.h>

// int getMax(int a[], int n)
// {
//     int i = 0;
//     int max = i;
//     for (i = 1; i < n; i++)
//     {
//         if (a[i] > max)
//             max = a[i];
//     }
//     return max;
// }

// void countSort(int a[], int n, int exp)
// {
//     int output[20];
//     int count[10] = {0};
//     for (int i = 0; i < n; i++)
//         count[(a[i] / exp) % 10]++;

//     for (int i = 1; i < 10; i++)
//         count[i] += count[i - 1];

//     for (int i = n - 1; i >= 0; i--)
//     {
//         output[count[(a[i] / exp) % 10] - 1] = a[i];
//         count[(a[i] / exp) % 10]--;
//     }

//     for (int i = 0; i < n; i++)
//         a[i] = output[i];
// }

// void radixsort(int a[], int n)
// {
//     int max = getMax(a, n);
//     for (int i = 1; max / i > 0; i *= 10)
//         countSort(a, n, i);
// }

// int main()
// {
//     int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
//     int n = 8;

//     radixsort(a, n);

//     for (int i = 0; i < n; i++)
//         printf("%d ", a[i]);

//     return 0;
// }

#include <stdio.h>

int getmax(int a[], int n)
{
    int i = 0;
    int max = a[i];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void countsort(int a[], int n, int exp)
{
    int output[20], count[10] = {0};
    for (int i = 0; i < n; i++)
        count[(a[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        a[i] = output[i];
}

void radixsort(int a[], int n)
{
    int max = getmax(a, n);
    for (int exp = 1; max / exp > 0; exp *= 10)
        countsort(a, n, exp);
}

int main()
{
    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;

    radixsort(a, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}