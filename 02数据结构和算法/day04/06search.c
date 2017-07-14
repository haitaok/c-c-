/*
	折半查找演示
*/
#include <stdio.h>
int* search(int* p_num,int size,int num){
	int start=0,end=size-1;
	while(start<end){
		if((*(p_num+(start+end)/2))==num){
			return p_num+(start+end)/2;
		}else if((*(p_num+(start+end)/2))>num){
			end=(start+end)/2-1;
		}else{
			start=(start+end)/2+1;
		}
	}
	return NULL;
}
int* search2(int* p_num,int start,int end,int num){
	if(start>end){
		return NULL;
	}
	if((*(p_num+(start+end)/2))==num){
		return p_num+(start+end)/2;
	}else if((*(p_num+(start+end)/2))>num){
		return search2(p_num,0,(start+end)/2-1,num);
	}else{
		return search2(p_num,(start+end)/2+1,end,num);
	}
}

int main(){
	int arr[]={3,6,9,14,17,19,22,25,27};
	int *p_num=search2(arr,0,9,6);
	if(p_num){
		printf("找到的数字是%d\n",*p_num);
	}
	return 0;
}
