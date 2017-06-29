#include <stdio.h>

typedef struct product{
	char name[20];
	double price;
	int stock;
} product;

int main(){
	product pros[5];
	int i=0;	
	for(i=0;i<5;i++){
		printf("请输入商品名，价格，库存:");
		scanf("%s %lf %d",pros[i].name,&pros[i].price,&pros[i].stock);
		scanf("%*[^\n]");
		scanf("%*c");
	}
	int j=0;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			product pi=pros[i];
			product pj = pros[j];			
			if(pi.price<pj.price){
				product temp = pros[i];
				pros[i]=pj;
				pros[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("名称:%s,价格:%lf,库存:%d\n",pros[i].name,pros[i].price,pros[i].stock);
	}

	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			product pi=pros[i];
			product pj = pros[j];			
			if(pi.stock>pj.stock){
				product temp = pros[i];
				pros[i]=pj;
				pros[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("名称:%s,价格:%lf,库存:%d\n",pros[i].name,pros[i].price,pros[i].stock);
	}

	return 0;
}
