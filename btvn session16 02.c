#include <stdio.h>
void swap(int*a, int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a = 1, b = 8;
	swap(&a,&b);
	printf("gia tri cua a la: %d\n",a);
	printf("gia tri cua b la: %d",b);
	return 0;
}

