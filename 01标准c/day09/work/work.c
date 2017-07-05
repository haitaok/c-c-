#include <stdio.h>

typedef unsigned short int uint16;

typedef struct date{
	uint16 year;
	uint16 month;
	uint16 date;
}date;

void input(date ds[],int n){
	//printf("%p\n",ds);
	int i;
	for(i=0;i<n;i++){
		printf("请输入第%d个日期，格式1900-01-01：",i+1);
		scanf("%hd-%hd-%hd",&ds[i].year,&ds[i].month,&ds[i].date);
		scanf("%*[^\n]");
		scanf("%*c");
	}
}

void sort(date ds[],int n,int (*rule)(date*,date*)){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(rule(&ds[i],&ds[j])==1){
				date t = ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
}
void print(date ds[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d-%02d-%02d\n",ds[i].year,ds[i].month,ds[i].date);
	}
	printf("-------------------\n");
}

int yearrule(date* a,date* b){
	return a->year>b->year;
}
int monthrule(date* a,date* b){
	return a->month<b->month;
}
int allrule(date* a,date* b){
	return a->year*10000+a->month*100+a->date<b->year*10000+b->month*100+b->date;
}


int main(){
	date ds[5];
	//printf("%p\n",ds);
	input(ds,5);
	sort(ds,5,yearrule);
	print(ds,5);
	sort(ds,5,monthrule);
	print(ds,5);
	sort(ds,5,allrule);
	print(ds,5);
	//date a;
	//date b =a;
	//printf("a=%p,b=%p\n",&a,&b);
	return 0;
}
