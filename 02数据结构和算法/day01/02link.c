/*
	动态分配节点的链式结构演示
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int num;
	struct node *p_next;
}node;

int main(){
	node head={},*p_node=NULL;
	int num=0;
	printf("请输入一个整数:");
	scanf("%d",&num);
	//插入新的节点
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(!p_tmp){
			p_node->p_next = (node*)malloc(sizeof(node));
			p_node->p_next->num=num;
			p_node->p_next->p_next=NULL;
			break;
		}
	}
	//打印所有节点内容
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp){
			printf("%d ",p_tmp->num);
		}
		
	}
	printf("\n");
	//删除一节点
	if(head.p_next){
		node *p_tmp=head.p_next;
		head.p_next=head.p_next->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
	return 0;
}
