#include <stdio.h>
#include <ctype.h>

int str2int(const char* str,const char** q){
	
	int r=0;
	while(isdigit(*str)){
		r = r*10+*str-'0';
		++str;
	}	
	*q=str;
	return r;
}

int main(){
	const char* p=NULL;
	int n = str2int("3926abxys",&p);
	printf("n=%d,p=%s\n",n,p);
	return 0;
}
