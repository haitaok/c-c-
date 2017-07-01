#include <stdio.h>

void hano(char from,int n,char to,char spare){
	if(n>0){
		hano(from,n-1,spare,to);//把上面n-1个盘子移动到空位
		printf("move %d %c==>%c\n",n,from,to);//移动第n个盘子
		hano(spare,n-1,to,from);//把空位上n-1个盘子移动到目的地		
	}
}

int main(){
	hano('a',3,'b','c');
	return 0;
}
