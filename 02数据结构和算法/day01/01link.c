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
	//在链表最后一个增加一个子节点
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node* p_tmp=p_node->p_next;
		if(!p_tmp){
			p_node->p_next=&forth;
			break;
		}
	}
	//删除尾节点
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp&&!(p_tmp->p_next)){
			p_node->p_next=NULL;
		}
	}
	//摘除一节点
	if(head.p_next){
		head.p_next=head.p_next->p_next;
	}
	//插入一个节点
	forth.p_next=head.p_next;
	head.p_next=&forth;
	//显示所有节点的数据
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node* p_tmp=p_node->p_next;
		if(p_tmp){
			printf("%d ",p_tmp->num);
		}
	}
	printf("\n");
	return 0;
}
