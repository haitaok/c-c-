#include <stdio.h>

void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void add(int x[],int n){
	int i=0;
	for(i=0;i<n;i++){
		x[i]<<=1;
	}
}
void reverse(int x[],int n){
	int i=0;
	for(i=0;i<n/2;i++){
		int temp = x[i];
		x[i]=x[n-1-i];
		x[n-1-i]=temp;
	}
}
int main(){
	int a[5]={11,22,33,44,55};
	int b[6]={1,2,3,4,5,6};
	print(a,5);
	print(b,6);
	add(a,5);
	print(a,5);
	reverse(a,5);
	print(a,5);
	return 0;
}
