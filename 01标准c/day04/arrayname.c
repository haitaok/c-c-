#include <stdio.h>

int main(){
	int a[5]={11,22};
	double d[8];
	char s[9];
	printf("%d,%d,%d\n",sizeof(a),sizeof(d),sizeof(s));
	(*&a)[1] +=123;
	int i=0;
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
