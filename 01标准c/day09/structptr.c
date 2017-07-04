#include <stdio.h>
typedef unsigned short int uint16;
typedef struct date{
	uint16 year;
	uint16 month;
	uint16 day;
} date;
void print(date const* p){
	//printf("%d年%d月%d日\n",(*p).year,(*p).month,(*p).day);
	printf("%d年%d月%d日\n",p->year,p->month,p->day);//简化写法
}
int main(){
	date a[3]={{2010,8,13},{2010,10,1},{2010,5,5}};
	int i;
	for(i=0;i<3;i++){
		print(&a[i]);
	}
	return 0;
}
