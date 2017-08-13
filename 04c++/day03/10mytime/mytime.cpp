#include "mytime.h"
#include <cstdio>
#include <unistd.h>

MyTime::MyTime(int h,int m,int s):hour(h),min(m),sec(s){
	
}
void MyTime::show(){
	printf("%02d:%02d:%02d\r",hour,min,sec);
	fflush(stdout);
}
void MyTime::dida(){
	if(++sec==60){
		sec=0;
		if(++min==60){
			min=0;
			if(++hour==24){
				hour=0;
			}
		}
	}
}
void MyTime::run(){
	while(1){
		sleep(1);
		dida();
		show();
	}
}
