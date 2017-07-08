/*
	顺序存储方式实现队列的演示
*/
#include <stdlib.h>
#include "linkqueue.h"
typedef struct node{
	int num;
	struct node* p_next;
}node;

static node head,*top;

//初始化函数
void init(){	
	head.p_next=NULL;
	top=NULL;
}

//清理函数
void deinit(){
	while(head.p_next){
		node* p_tmp=head.p_next;
		head.p_next=p_tmp->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
	top=NULL;
	
}
//判断是否满的函数
int full(){
	return 0;
}

//判断是否空的函数
int empty(){
	return !head.p_next;
}
//放数据的函数
void push(int num){
	node* p_tmp = (node*)malloc(sizeof(node)),*p_node=NULL;
	if(p_tmp){
		p_tmp->num=num;
		p_tmp->p_next=NULL;
		for(p_node=&head;p_node;p_node=p_node->p_next){
			if(!(p_node->p_next)){
				p_node->p_next=p_tmp;
				break;
			}
		}
	}
}
//取数据的函数
int pop(){
	int ret=1<<31;
	if(head.p_next){
		node* p_tmp=head.p_next;
		ret=head.p_next->num;
		head.p_next=p_tmp->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}	
	return ret;
}

//取下一个数字的函数
int front(){
	if(head.p_next){
		return head.p_next->num;
	}
	return 1<<31;
	
}

//获得有效数据个数的函数
int size(){
	int cnt=0;
	node* p_node; 
	for(p_node=&head;p_node;p_node=p_node->p_next){
		if(p_node->p_next){
			cnt++;
		}
	}
	return cnt;
}





