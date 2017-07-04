#include <stdio.h>

void print(int* p){
	printf("%d ",*p);
}
void add(int *p){*p+=10;}
void clear(int *p){*p=0;}
void fill(int* p){
	static int n=0;
	*p=++n;
}

void foreach(int a[],int n,void (*fp)(int*)){
	int i;
	for(i=0;i<n;i++){
		(*fp)(a+i);
	}
}
void mul(int* p){*p*=10;}

int main(){
	int a[5];
	int i;
	foreach(a,5,fill);//for(i=0;i<5;i++){fill(a+i);}
	foreach(a,5,add);//for(i=0;i<5;i++){add(a+i);}
	foreach(a,5,print);//for(i=0;i<5;i++){print(a+i);}
	printf("\n");
	foreach(a,5,clear);//for(i=0;i<5;i++){clear(a+i);}
	foreach(a,5,print);//for(i=0;i<5;i++){print(a+i);}
	printf("\n");
	foreach(a,5,fill);
	foreach(a,5,mul);
	foreach(a,5,print);
	printf("\n");
	return 0;
}
