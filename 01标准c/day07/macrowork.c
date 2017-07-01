#include <stdio.h>

#define ISLEAP(y) ((y)%4==0&&(y)%100!=0||(y)%400==0)
#define ISSMALL(m) ((m)==4||(m)==6||(m)==9||(m)==11)
#define NORMAL(m) (ISSMALL(m)?30:31)
#define DAYS(y,m) ((m)==2?28+ISLEAP(y):NORMAL(m))
#define IN(x,from,to) ((x)>=(from)&&(x)<=(to)) 
#define ISVALID(y,m,d) ((y)>1600&&IN(m,1,12)&&IN(d,1,DAYS(y,m)))

int main(){
	printf("%d,%d,%d\n",DAYS(2010,2),DAYS(2010,8),DAYS(2010,11));
	printf("%d,%d\n",ISVALID(2010,2,29),ISVALID(2020,2,29));
	return 0;
}
