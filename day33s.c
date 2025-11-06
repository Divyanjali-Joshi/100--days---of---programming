//Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

void insertsorted(int *arr, int *n, int key){
    int i, pos;
    
    for(pos=0; pos< *n; pos++){
        if(arr[pos]>key)
        break;
    }

    
    for(i = *n; i>pos; i--){
        arr[i] = arr[i-1];
    }

    
    arr[pos] = key;
    (*n)++; 
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    insertsorted(arr, &n, key);

    printarr(arr,n);
    return 0;
}
