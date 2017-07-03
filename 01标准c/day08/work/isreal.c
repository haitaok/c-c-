#include <stdio.h>
typedef enum bool{true=1,false=0} bool;

bool isreal(const char * s){
	while(*s!='\0'){
		if(*s!='-'&&*s!='.'&&!(*s>='0'&&*s<='9')){
			return false;
		}else if(*s=='-'){
			if(!((*(s+1)>='0')&&(*(s+1)<='9'))) return false;
		}else if(*s=='.'){
			if(!((*(s+1)>='0')&&(*(s+1)<='9'))) return false;
		}
		s++;
	}
	return true;
}

int main(){
	printf("%d\n",isreal("123.12"));
	printf("%d\n",isreal("1."));
	printf("%d\n",isreal("-ads"));
	printf("%d\n",isreal("-123"));
	printf("%d\n",isreal("1.2"));
	return 0;
}
