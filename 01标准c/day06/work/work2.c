#include <stdio.h>

void sort(int a[],int n){
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void print(int a[],int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int a[5]={2,1,5,4,6};
	sort(a,5);
	print(a,5);
	return 0;
}
