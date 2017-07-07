/*
	链式物理结构实现栈的演示
*/
#include <stdlib.h>
#include "04stack.h"

typedef struct node{
	int num;
	struct node *p_next;
}node;

static node head;

//初始化函数 把我门栈置成使用的位置
void init(){
	head.p_next=NULL;
}

//清理栈
void deinit(){
	node *p_tmp=NULL;
	while(head.p_next){
		//删除一节点
		p_tmp=head.p_next;
		head.p_next=head.p_next->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
}

//判断栈是否已经满了
int full(){
	return 0;
}
//判断栈是否是空的
int empty(){
	return !head.p_next;
}
//放置新数据的函数
void push(int num){
	node *p_tmp=(node*)malloc(sizeof(node));
	if(p_tmp){
		p_tmp->num=num;
		p_tmp->p_next=head.p_next;
		head.p_next=p_tmp;
	}
}
//取数据的函数
int pop(){
	int num=1<<31;
	if(head.p_next){
		node *p_tmp=head.p_next;
		num=head.p_next->num;
		head.p_next=head.p_next->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
	return num;
}
//获得最后一个数据的函数
int last(){
	int num=1<<31;
	if(head.p_next){
		num=head.p_next->num;
	}
	return num;
}
//获得有效数据个数的函数
int size(){
	int cnt=0;
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		if(p_node->p_next){
			cnt++;
		}
	}
	return cnt;
}





