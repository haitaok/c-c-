#include <stdlib.h>
#include "01stack.h"

typedef struct node{
	int num;
	struct node* p_next;
}node;

static node head;

void init(){
	head.p_next==NULL;
}
void deinit(){
	node* p_tmp=NULL;
	while(p_tmp=head.p_next){
		head.p_next = p_tmp->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
}
int full(){
	return 0;
}
int empty(){
	return !head.p_next;
}
void push(int n){
	node* p_node;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(!p_tmp){
			p_node->p_next=(node*)malloc(sizeof(node));
			p_node->p_next->num=n;
			p_node->p_next->p_next=NULL;
			break;
		}
	}
}
int pop(){
	int n=1<<31;
	node* p_node;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp&&!(p_tmp->p_next)){
			n=p_tmp->num;
			free(p_tmp);
			p_node->p_next=NULL;
			p_tmp=NULL;
		}
	}
	return n;
}
int last(){
	int n=1<<31;
	node* p_node;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp = p_node->p_next;
		if(!p_tmp){
			n=p_node->num;
		}
	}
	return n;
}
int size(){
	int cnt=0;
	node* p_node;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp){
			cnt++;
		}
	}
	return cnt;
}
