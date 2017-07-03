#include <stdio.h>
typedef enum bool{true=1,false=0} bool;

bool isdigitstr(const char* s){
	while(*s!='\0'){
		if(!(*s>='0'&&*s<='9')){
			return false;
		}
		s++;
	}
	return true;
}

int main(){
	printf("%d\n",isdigitstr("123"));
	printf("%d\n",isdigitstr("abc"));
	printf("%d\n",isdigitstr("123abc"));
	return 0;
}
