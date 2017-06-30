#include <stdio.h>
#include <string.h>

extern char w[7][10];
//char* week(int);
void showweekday(int n);
char* weekday(int n){
	
	return w[n];
}

int main(){
	printf("%s\n",weekday(3));
	showweekday(4);
	//strcpy (week(5),"Furong");
	//printf("%s\n",week(5));
	return 0;
}

