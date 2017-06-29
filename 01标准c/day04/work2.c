#include <stdio.h>

int main(){
	int i=0,j=0;
	double a[10]={0};
	for(i=0;i<10;i++){
		//printf("%p\n",a+i);
		scanf("%lf",a+i);
		scanf("%*[^\n]");
		scanf("%*c");
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%g ",a[i]);
	}
	printf("\n");
	return 0;
}	
