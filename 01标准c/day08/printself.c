#include <stdio.h>

int main(){
	char* s="#include <stdio.h> %cint main()%c{%c%c char*s=%c%s%c;%c%cprintf(s,10,10,10,9,34,s,34,10,9,10,9,10,10);%c%creturn0;%c}%c";
	printf(s,10,10,10,9,34,s,34,10,9,10,9,10,10);
	return 0;
}
