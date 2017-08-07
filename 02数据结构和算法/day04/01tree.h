#ifndef __01TREE_H__
#define __01TREE_H__
struct node;
typedef struct tree{
	struct node *p_root;
} tree;
typedef struct node{
	int num;
	tree left;
	tree right;
}node;

void deinit(tree *);
tree* findNum(tree*,int );
tree* search(tree *,int);
tree* find_num_order(tree *,int);
tree* find_num_order2(tree *,int);
tree *search_in_order(tree *,int);
void insert_in_order(tree*,int);
int count(tree *);
int height(tree *);
#endif //__01TREE_H__
