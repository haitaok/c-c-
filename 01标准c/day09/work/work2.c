#include <stdio.h>

void filter(int a[],int n,int (*rule)(int),int (*save)[]){
	int i,j=0;
	for(i=0;i<n;i++){
		if(rule(a[i])==1){
			*(*save+j)=a[i];
			j++;
		}
	}
}

int rule(int a){
	return a>3;
}

int main(){
	int a[5]={1,2,3,4,5};
	int b[5]={0};
	int (*p)[5]=&b;
	filter(a,5,rule,p);
	int i;
	for(i=0;i<5;i++){
		printf("%d ",*(*p+i));
	}
	printf("\n");
	return 0;
}
