#include <stdio.h>
#include <stdlib.h>

int validRepeat(int i[],int n,int num){
	//printf("%d\n",n);
	int k=0;
	for(k=0;k<n;k++){
		if(i[k]==num){
			return 0;
		}
	}
	return 1;
}

void generateImageName(char a[]){
	static int i[1000];
	static int j=0;
	int num=0;
	do{
		num = rand()%1000;
		if(validRepeat(i,j,num)==1){
			i[j++]=num;
			break;
		}
	}while(1);
	sprintf(a,"image%03d.jpg",num);
}



int main(){
	char a[20];
	generateImageName(a);
	printf("%s\n",a);
	generateImageName(a);
	printf("%s\n",a);
	generateImageName(a);
	printf("%s\n",a);
	generateImageName(a);
	printf("%s\n",a);
	return 0;
}
