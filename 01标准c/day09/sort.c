#include <stdio.h>
int rule(double lh,double rh){
	if(lh>rh){
		return 1;
	}else{
		return 0;
	}
}
int rule2(double lh,double rh){
	return rh>lh;
}
#define swap(x,y){double t=x;x=y;y=t;}
//对排序规则的约定：保持顺序就返回0，需要交换就返回1
void sort(double a[],int n,int (*p)(double,double)){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p(a[i],a[j])==1){
				swap(a[i],a[j]);
			}
		}
	}
}

//int (*x(void(*p)()))(char)//遇到第一个名字 是这个表达是主要名称
typedef void (*T)();
typedef int (*U)(char);
U test2(T p){
} 

int(*test())(char){
	printf("%d\n",1);	
}

void input(double a[],int n){
	printf("请输入10个小数:");
	int i;
	for(i=0;i<n;i++){
		scanf("%lf",a+i);
	}
}
void show(double a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%g ",a[i]);
	}
	printf("\n");
}

int main(){
	double a[10];
	input(a,10);
	sort(a,10,&rule);
	show(a,10);
	input(a,10);
	sort(a,10,&rule2);
	show(a,10);
	int (*(*x)())(char);
	//x=&test;
	//U x(T p);
	x = test;
	x();
	U (*y)(T p);
	y=test2;
	return 0;
}
