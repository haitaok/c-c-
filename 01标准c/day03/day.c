#include <stdio.h>

int main(){
	int year=0;
	int month=0;
	int date=0;
	int cnit = 0;
	do{
		printf("请输入一个日期，格式：1999-01-01：");
		cnit = scanf("%d-%d-%d",&year,&month,&date);
		scanf("%*[^\n]%*c");
	}while(cnit!=3);
	int i=0;
	int day=0;
	for(i=1;i<month;i++){
			switch(i){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					day+=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					day+=30;
					break;
				case 2:
					if(year%4==0&&year%100!=0||year%400==0){
						day+=29;
					}else{
						day+=28;
					}
			}
		}
		
	day+=date;
	printf("%d-%d-%d是一年的第%d天\n",year,month,date,day);	
	return 0;	
}
