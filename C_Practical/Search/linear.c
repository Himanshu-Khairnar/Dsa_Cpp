#include<stdio.h>
#include<stdlib.h>

int arr[] = {212,32,2131,4324,4323,123,124,125,12,3};
int n = 10;

int linearSearch(int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}

int main(){
    int key;
  
    int result = linearSearch(1203);
    if(result==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n",result);
    }
    return 0;
}