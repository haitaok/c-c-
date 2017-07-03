#include <stdio.h>
#include <string.h>

int substr(const char* s,char c,char a[100][100]){
	int n=0;
	int i=0;	
	while(*s!='\0'){
		//printf("%c\n",*s);
		if(*s==c){			
			a[n][i]='\0';
			n++;
			i=0;
		}else{
			a[n][i++]=*s;
		}
		s++;
	}
	return n+1;	
}


int main(){
	char a[100][100];
	int n = substr("abc:de:fghi:hk",':',a);
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}	
	return 0;
}
