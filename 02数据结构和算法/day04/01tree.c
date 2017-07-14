/*
	二叉树演示
*/
#include <stdlib.h>
#include <stdio.h>
#include "01tree.h"
void init(tree *p_root){
	p_root->p_root=NULL;
}

//清理函数
void deinit(tree *p_root){
	if(!(p_root->p_root)){
		return;
	}
	deinit(&(p_root->p_root->left));
	deinit(&(p_root->p_root->right));
	printf("删除节点%d\n",p_root->p_root->num);
	free(p_root->p_root);
	p_root->p_root=NULL;
	
}

//查找函数 自己写
tree* findNum(tree *p_root,int num){
	if(!(p_root->p_root)){
		return NULL;
	}
	if(p_root->p_root->num==num){
		return p_root;
	}
	tree* p_tmp=findNum(&(p_root->p_root->left),num);
	if(p_tmp){
		return p_tmp;
	}
	p_tmp=findNum(&(p_root->p_root->right),num);
	if(p_tmp){
		return p_tmp;
	}
	return NULL;
	
}
//查找函数 老师写
tree* search(tree *p_root,int num){
	if(!(p_root->p_root)){
		return NULL;
	}
	tree *p_tmp=NULL;
	if(p_root->p_root->num==num){
		return p_root;
	}
	p_tmp = search(&(p_root->p_root->left),num);
	if(p_tmp){
		return p_tmp;
	}
	return search(&(p_root->p_root->right),num);

}
//在有序二叉树中查找的函数
tree* find_num_order(tree *p_root,int num){
	tree* p_tmp=p_root;
	while(p_tmp->p_root){
		if(p_tmp->p_root->num<num){
			p_tmp=&(p_tmp->p_root->right);
		}else if(p_tmp->p_root->num>num){
			p_tmp=&(p_tmp->p_root->left);
		}else{
			return p_tmp;
		}
	}
	return NULL;
}
tree* find_num_order2(tree *p_root,int num){
	if(!(p_root->p_root)){
		return NULL;
	}
	if(p_root->p_root->num==num){
		return p_root;
	}
	tree * p_tmp=NULL;
	if(p_root->p_root->num<num){
		p_tmp = find_num_order2(&(p_root->p_root->right),num);
		if(p_tmp){
			return p_tmp;
		}
	}
	if(p_root->p_root->num>num){
		p_tmp = find_num_order2(&(p_root->p_root->right),num);
		if(p_tmp){
			return p_tmp;
		}
	}
	return NULL;
}
//在有序二叉树中查找的函数 查找不到，返回最后一个方块
tree *search_in_order(tree *p_root,int num){
	if(!(p_root->p_root)){
		return p_root;
	}
	if(p_root->p_root->num==num){
		return p_root;
	}
	else if(p_root->p_root->num>num){
		return search_in_order(&(p_root->p_root->left),num);
	}
	else{
		return search_in_order(&(p_root->p_root->right),num);
	}
	
}
//按顺序在有序二叉树中插入新数字
void insert_in_order(tree* p_root,int num){
	tree* p_tree=search_in_order(p_root,num);
	if(!(p_tree->p_root)){
		node* p_tmp = (node*)malloc(sizeof(node));
		if(p_tmp){
			p_tmp->num=num;
			p_tmp->left.p_root=NULL;
			p_tmp->right.p_root=NULL;
			p_tree->p_root=p_tmp;
		}
	}
}
//统计节点个数
int count(tree *p_tree){
	int cnt=0;
	if(!(p_tree->p_root)){
		return 0;
	}
	cnt =count(&(p_tree->p_root->left));
	cnt+=count(&(p_tree->p_root->right));
	return cnt+1;
}

//计算树的高度
int height(tree *p_tree){
	int lheight=0,rheight=0;
	if(!(p_tree->p_root)){
		return 0;
	}
	lheight=height(&(p_tree->p_root->left));
	rheight =height(&(p_tree->p_root->left));
	return (lheight>rheight?lheight:rheight)+1;
	
}




