#include <stdio.h>
void themPhanTu(int *arr,int newValue,int index,int *n){
    for(int i=*n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=newValue;
    (*n)++;
}
int main(){
    int arr[100]={1,2,3,4,5,7};  
    int n=6;  
    int newValue=6;  
    int index=5;  
    themPhanTu(arr,newValue,index,&n);  
    printf("mang sau khi them: ");
    for(int i=0;i<n;i++){  
        printf("%d ",arr[i]);
    }
    return 0;
}
