/*
	连表测试
*/
#include <stdio.h>
#include "04linklist.h"

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
	insert_node2(-2);
	insert_node(-1);
	insert_tail(1);
	insert_tail(2);
	insert_tail(3);
	insert_node(0);
	insert_node2(4);
	printf("个数是%d\n",size());
	remove_node(2);
	for_each(print_cb,NULL);
	
	printf("%d ",get_tail());
	remove_tail();
	printf("%d ",get_tail());
	remove_tail();
	/*printf("%d\n",get_tail());
	remove_tail();*/
	printf(empty()?"空的\n":"不空\n");
	deinit();
	return 0;
}
