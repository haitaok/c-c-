#include <stdio.h>
#include "isdate.h"
#include "day.h"
#include "week.h"

int main()
{
	int year=0,month=0,date=0;
	do{
		printf("请输入一个日期 如1900-01-01：");
		if(scanf("%d-%d-%d",&year,&month,&date)!=3){
			printf("输入日期有误，请重新输入\n");
			continue;
		}		
		if(!isdate(year,month,date)){
			printf("没有这个日期，请重新输入\n");
			continue;
		}else{
			printf("日期%d-%d-%d是这一年的第%d天\n",year,month,date,day(year,month,date));
			printf("日期%d-%d-%d是星期%d\n",year,month,date,week(year,month,date));
			break;
		}
	}while(1);
	return 0;
}
