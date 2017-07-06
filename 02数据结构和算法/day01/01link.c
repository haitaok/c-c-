/*
	链式物理结构演示
*/
#include <stdio.h>
typedef struct node{
	int num;
	struct node* p_next;
}node;
int main(){
	node fst={},sec={},thd={},head={},forth={};
	node* p_node=NULL;
	head.p_next=&fst;
	fst.num=1;
	fst.p_next=&sec;
	sec.num=3;
	sec.p_next=&thd;
	thd.num=5;
	thd.p_next=NULL;
	forth.num=7;
	forth.p_next=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node* p_tmp=p_node->p_next;
		if(!p_tmp){
			p_node->p_next=&forth;
			break;
		}
	}
	node* p_tmp=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		if(p_node->p_next){
			p_tmp=p_node;
		}else{
			p_tmp->p_next=NULL;
		}
	}
	
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node* p_tmp=p_node->p_next;
		if(p_tmp){
			printf("%d ",p_tmp->num);
		}
	}
	printf("\n");
	return 0;
}
