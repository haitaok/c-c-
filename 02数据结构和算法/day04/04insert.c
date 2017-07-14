/*
	插入排序演示
*/
#include <stdio.h>

int main(){
	int arr[]={23,56,34,92,67,16};
	int pos=0,pos1=0;
	for(pos=1;pos<=5;pos++){
		for(pos1=pos-1;pos1>=0;pos1--){
			if(arr[pos1]>arr[pos1+1]){
				int tmp=arr[pos1];
				arr[pos1]=arr[pos1+1];
				arr[pos1+1]=tmp;
			}else{
				break;
			}
		}
	}
	for(pos=0;pos<=5;pos++){
		printf("%d ",arr[pos]);
	}
	printf("\n");
	return 0;
}
