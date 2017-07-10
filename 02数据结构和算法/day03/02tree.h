#ifndef __02TREE_H__
#define __02TREE_H__
struct tree;

typedef struct node{
	int num;
	struct tree* p_left;
	struct tree* p_right;
}node;

typedef struct tree{
	node *p_root;
} tree;
#endif //__02TREE_H__
