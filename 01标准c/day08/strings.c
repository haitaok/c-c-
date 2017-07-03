#include <stdio.h>

int main(){
	char * names[9]={"何军军","杨勇","王刚","王龙"};//只有保存字符串开始地址
	int i;
	for(i=0;i<9;i++){
		printf("感谢%s参与大内TV节目\n",names[i]);
	}
	const int a=10,b=80,c=20,d=60,e=98,f=76;
	const int* p[6]={&a,&b,&c,&d,&e,&f};
	int j;
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(*p[j]<*p[i]){
				const int* t=p[j];p[j]=p[i];p[i]=t;
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d ",*p[i]);
	}
	printf("\n");
	return 0;
}
