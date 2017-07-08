/*
	链式物理结构演示
*/
#include <stdio.h>
typedef struct node{
	
	int num;
	struct node *p_next;
} node;
int main(){
	node fst={},sec={},thd={};
	node *p_node=NULL;
	fst.num=1;
	fst.p_next=&sec;
	sec.num=3;
	sec.p_next=&thd;
	thd.num=5;
	thd.p_next=NULL;
	for(p_node=&fst;p_node;p_node = p_node->p_next){
		printf("%d ",p_node->num);
	}
	printf("\n");
	return 0;
}
