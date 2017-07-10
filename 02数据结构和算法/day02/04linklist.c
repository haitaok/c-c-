
#include <stdlib.h>
#include "04linklist.h"

static node head;

void init(){
	head.p_next=NULL;
}

void deinit(){
	while(head.p_next){
		node *p_tmp=head.p_next;
		head.p_next=p_tmp->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
}
int empty(){
	return !head.p_next;
}

//插入一结点
void insert_head(int num){
	node *p_tmp=(node*)malloc(sizeof(node));
	if(p_tmp){
		p_tmp->num=num;
		p_tmp->p_next=head.p_next;
		head.p_next=p_tmp;
	}
}

//删除一结点
void remove_head(){
	if(head.p_next){
		node *p_tmp=head.p_next;
		head.p_next=p_tmp->p_next;
		free(p_tmp);
		p_tmp=NULL;
	}
}
//插入尾结点
void insert_tail(int num){
	node *p_tmp=(node*)malloc(sizeof(node)),*p_node=NULL;
	if(p_tmp){
		p_tmp->num=num;
		p_tmp->p_next=NULL;
		for(p_node=&head;p_node;p_node=p_node->p_next){
			if(!p_node->p_next){
				p_node->p_next=p_tmp;
				break;
			}
		}
	}
	
}

//删除尾结点
void remove_tail(){
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp&&!(p_tmp->p_next)){
			free(p_tmp);
			p_tmp=NULL;
			p_node->p_next=NULL;
		}
	}
}

//获得一结点内容
int get_head(){
	int ret=1<<31;
	if(head.p_next){
		ret=head.p_next->num;
	}
	return ret;
}
//获得尾结点内容
int get_tail(){
	int ret=1<<31;
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node* p_tmp=p_node->p_next;
		if(p_tmp&&!(p_tmp->p_next)){
			ret=p_tmp->num;
			break;
		}
	}
	return ret;
}
//获得个数的函数
int size(){
	int cnt=0;
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node = p_node->p_next){
		if(p_node->p_next){
			cnt++;
		}
	}
	return cnt;
}
/*void print(){
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node = p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp){
			printf("%d ",p_tmp->num);
		}
		
	}
	printf("\n");
	
}*/

//遍历函数
void for_each(int (*p_func)(void*,void*),void *p_data){
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		if(p_func(p_node,p_data)){
			break;
		}
	}
}

//删除制定数字，用返回值 表示操作结果（1表示成功，0表示失败）
int removeNum(int n){
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp = p_node->p_next;
		if(p_tmp){
			if(n==p_tmp->num){
				p_node->p_next=p_tmp->p_next;
				free(p_tmp);
				p_tmp=NULL;
				return 1;
			}
		}
	}
	return 0;
}
int removeNum_cb(void *p_node,void *p_data){
	node *p_tmp=((node*)p_node)->p_next;
	int *n=(int*)p_data;
	if(p_tmp){
		if(p_tmp->num==(*n)){
			((node*)p_node)->p_next=p_tmp->p_next;
			return 1;
		}else{
			return 0;
		}				
	}
}

int removeNum2(int n){
	for_each(removeNum_cb,&n);
}

/*int remove_node(int num){
	node *p_node=NULL;
	for(p_node=&head;p_node;p_node=p_node->p_next){
		node *p_tmp=p_node->p_next;
		if(p_tmp&&p_tmp->num==num){
			p_node->p_next=p_tmp->p_next;
			free(p_tmp);
			p_tmp=NULL;
			return 1;
		}
	}
	return 0;
}*/

//删除指定数字
typedef struct rdata{
	int num,ret;
}rdata;
int remove_cb(void *p_node,void *p_data){
	if(((node*)p_node)->p_next&&((node*)p_node)->p_next->num==((rdata*)p_data)->num){
		node *p_tmp=((node*)p_node)->p_next;
		((node*)p_node)->p_next=p_tmp->p_next;
		free(p_tmp);
		p_tmp=NULL;
		((rdata*)p_data)->ret=1;
		return 1;
	}
	return 0;
}
int remove_node(int num){
	rdata rd = {};
	rd.num=num;
	for_each(remove_cb,&rd);
	return rd.ret;
	
}




