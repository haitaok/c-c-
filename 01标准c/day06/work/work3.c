#include <stdio.h>

typedef struct goods{
	char name[20];
	double price;
	int stock;
} goods;

void input(goods gs[],int n){
	int i=0;	
	for(i=0;i<n;i++){
		printf("请输入商品名 价格 库存：");
		scanf("%s %lf %d",gs[i].name,&gs[i].price,&gs[i].stock);
		scanf("%*[^\n]");
		scanf("%*c");
	}
}

void output(goods gs[],int n){
	int i=0;	
	for(i=0;i<n;i++){
		printf("%s %lf %d\n",gs[i].name,gs[i].price,gs[i].stock);
	}
	
}
void sort2price(goods gs[],int n){
	int i=0,j=0;	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){		
			if(gs[i].price>gs[j].price){
				goods temp = gs[i];
				gs[i]=gs[j];
				gs[j]=temp;
			}
		}
	}
}
void sort2stock(goods gs[],int n){
	int i=0,j=0;	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){		
			if(gs[i].stock>gs[j].stock){
				goods temp = gs[i];
				gs[i]=gs[j];
				gs[j]=temp;
			}
		}
	}
}

int main(){
	int n=0;
	printf("请输入商品书：");
	scanf("%d",&n);
	scanf("%*[^\n]");
	scanf("%*c");
	goods gs[n];
	input(gs,n);
	sort2price(gs,n);
	output(gs,n);
	sort2stock(gs,n);
	output(gs,n);
	return 0;
}
