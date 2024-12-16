#include <stdio.h>
void sapXep(int *arr, int size){
    int i, j, temp;
    for (i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("mang sau khi sap xep: ");
    for(i= 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={18,3,1,8,2,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    sapXep(arr,size);
    return 0;
}

