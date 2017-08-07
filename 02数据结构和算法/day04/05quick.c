/*
	快速排序
*/
#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *p_num,int size){
	int base=*p_num,num=0,start=0,end=size-1;
	if(size<=1){
		return;
	}
	for(num=1;num<=size-1;num++){
		if(*(p_num+start)>*(p_num+end)){
			int tmp=*(p_num+start);
			*(p_num+start)=*(p_num+end);
			*(p_num+end)=tmp;
		}
		if(*(p_num+start)==base){
			end--;
		}else{
			start++;
		}
	}
	quick_sort(p_num,start);
	quick_sort(p_num+start+1,size-start-1);
	
}
int compare(const void *p_num,const void* p_num1){
	if(*(const int*)p_num>*(const int*)p_num1){
		return 1;
	}else if(*(const int*)p_num<*(const int*)p_num1){
		return -1;
	}else{
		return 0;
	}
}

int main(){
	int arr[]={6,4,56,25,97,46,72,1},num=0;
	//quick_sort(arr,8);
	qsort(arr,8,sizeof(int),compare);
	for(num=0;num<=7;num++){
		printf("%d ",arr[num]);
	}
	printf("\n");
	return 0;
}
