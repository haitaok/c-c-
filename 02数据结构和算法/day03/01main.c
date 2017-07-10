/*
	连表测试
*/
#include <stdio.h>
#include "01linklist.h"

int print_cb(void*p_node,void *p_data){
	if(((node*)p_node)->p_next){
		printf("%d ",((node*)p_node)->p_next->num);
		/*if(!(((node*)p_node)->p_next->p_next)){
			printf("\n");
			return 1;
		}*/
		return 0;
	}else{
		printf("\n");
		return 1;
	}
	
}

int main(){
	init();
	insert_tail(1);
	insert_tail(5);
	insert_tail(9);
	insert_in_order(7);
	insert_in_order(13);
	for_each(print_cb,NULL);
	deinit();
	return 0;
}
