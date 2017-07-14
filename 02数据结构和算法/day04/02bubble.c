/*
	冒泡派寻
*/
#include <stdio.h>

int main(){
	int arr[]={23,56,34,92,67,16},pos=0,num=0;
	for(num=5;num>=1;num--){
		for(pos=1;pos<=num;pos++){
			if(arr[pos-1]>arr[pos]){
				int tmp=arr[pos-1];
				arr[pos-1]=arr[pos];
				arr[pos]=tmp;
			}
		}
	}
	
	
	for(pos=0;pos<=5;pos++){
		printf("%d ",arr[pos]);
	}
	printf("\n");
	return 0;
}
