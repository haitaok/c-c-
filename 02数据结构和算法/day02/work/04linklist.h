#ifndef __04LINKLIST_H__
#define __04LINKLIST_H__
typedef struct node{
	int num;
	struct node *p_next;
} node;
void init();
void deinit();
int empty();
void insert_head(int);
void remove_head();
void insert_tail(int);
void remove_tail();
int get_head();
int get_tail();
int size();
void for_each(int (*)(void*,void*),void*);
int removeNum(int);
int removeNum2(int);
int remove_node(int);
void insert_node(int);
int insert_node2(int);
#endif //__04LINKLIST_H__
