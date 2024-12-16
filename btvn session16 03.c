#include <stdio.h>
int sum(int *a, int *b, int *result){
    *result=*a+*b;
}
int main(){
    int a=1;
    int b=8;
    int result;
    sum(&a,&b,&result);
    printf("tong hai so a va b la: %d\n",result);
    return 0;
}

