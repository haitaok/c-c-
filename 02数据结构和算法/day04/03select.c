/*
	选择排序演示
*/
#include <stdio.h>

int main(){
	int arr[]={23,56,34,92,67,16},pos=0,num=0;
	for(num=0;num<=4;num++){
		for(pos=num+1;pos<=5;pos++){
		if(arr[num]>arr[pos]){
			int tmp=arr[num];
			arr[num]=arr[pos];
			arr[pos]=tmp;
		}
	}
	}
	
	for(pos=0;pos<=5;pos++){
		printf("%d ",arr[pos]);
	}
	puts("");
	return 0;
}
