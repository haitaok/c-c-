#include <stdio.h>

void int2str(int n,char c[]){
	static int i=0;	
	if(n==0){
		c[i]='\0';
		return;
	}else{
		int2str(n/10,c);
		int m = n%10;
		c[i++]=m+'0';
		
		
	}
}

int main(){
	char c[100]={0};
	int n=12345;
	int2str(n,c);
	printf("%s\n",c);
}
