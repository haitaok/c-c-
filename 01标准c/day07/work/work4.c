#include <stdio.h>

int main(){
	FILE *f;
	char c;
	if((f=fopen(__FILE__,"r"))!=NULL){
		while(fread(&c,1,1,f)==1){
			fwrite(&c,1,1,stdout);
		}
		fclose(f);
	}
	return 0;
}
