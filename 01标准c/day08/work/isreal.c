#include <stdio.h>
typedef enum bool{true=1,false=0} bool;

bool isreal(const char * s){
	while(*s!='\0'){
		if(!(*s>='0'&&*s<='9')){
			return false;
		}else if(*s=='-'){
			if(!(*(s+1)>='0'&&*(s+1)<='9')) return false;
		}else if(*s=='.'){

		}
		s++;
	}
	return true;
}

int main(){

}
