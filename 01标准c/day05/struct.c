#include <stdio.h>
typedef struct Goods{
	char name[18];//18
	double price;//8
	char special;//1
	short saled;//2
	int num;//4
	
}gs;
typedef struct Goodsa{
	char name[17];//18
	char special;//1
	short saled;//2
	double price;//8
	int num;//4
	
}ga;
typedef struct Goodsb{
	char name[17];//17
	char special;//1
	short saled;//2
	double price;//8
	int num;//4
	
}gb;
typedef struct a{
	char d;//1
	char e;
	char f;
	double ad;
	
}a;
//typedef struct Goods gs;
int main(){
	//gs a[10];
	printf("%d\n",sizeof(gs));
	printf("%d\n",sizeof(ga));
	printf("%d\n",sizeof(gb));
	printf("a=%d\n",sizeof(a));
	return 0;
}
