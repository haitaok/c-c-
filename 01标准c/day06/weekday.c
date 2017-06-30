#include <stdio.h>
char w[7][10]={
	"星期日","星期一","星期二","星期三","星期四","星期五","星期六"
};
static char e[7][10]={
	"Sunday","Monday","Thuesday","Wednesday","Thursday","Friday","Saturday"
};
static char* week(int n){
	return e[n];
}
void showweekday(int n){
	printf("%s\n",e[n]);
}
