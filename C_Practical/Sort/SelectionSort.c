#include<stdio.h>

int main(){
    int arr[]={43,12,534,65};
    int length = sizeof(arr)/sizeof(arr[0]);
    // printf("%d ",length);
    for(int i = 0;i<length;i++)
    {
        int min = i;
        for(int j = i;j<length;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }

        }
        if(i!=min)
        {
            int temp =arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
             
        }
    }
    for(int i = 0;i<length;i++)
    {
        printf("%d ",arr[i] );
    }
}