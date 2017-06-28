#include <stdio.h>

int main(){
	int a[3][5]={
		{1,2},
		{3},
		{4,5}
	};
	int i,j;
	for(i=0;i<3;i++){
		printf("%p\n",a[i]);
		for(j=0;j<5;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	char names[4][20]={
		"杨勇","何军军","李霖","钟玉龙"
	};
	for(i=0;i<4;i++){
		printf("感谢你的支持,%s!\n",names[i]);
	}
	return 0;
}
