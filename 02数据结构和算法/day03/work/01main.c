/*
	树的测试代码
*/
#include <stdio.h>
#include <stdlib.h>
#include "01tree.h"
void print(tree* p_tree){
	if(!(p_tree->p_root)){
		return;
	}
	//printf("%d ",p_tree->p_root->num);//前序遍历
	print(&(p_tree->p_root->left));
	printf("%d ",p_tree->p_root->num);//中序遍历
	print(&(p_tree->p_root->right));
	//printf("%d ",p_tree->p_root->num);//后序遍历
}
int main(){
	/*tree tr1={};
	node nd1={},nd2={},nd3={};
	tr1.p_root=&nd1;
	nd1.num=1;
	nd1.left.p_root=&nd2;
	nd1.right.p_root=&nd3;
	nd2.num=2;
	nd3.num=3;*/
	/*tree root={},*p_tree=NULL;
	root.p_root = (node*)malloc(sizeof(node));
	if(root.p_root){
		tree* p_tmp=NULL;
		root.p_root->num=3;
		root.p_root->left.p_root=NULL;
		root.p_root->right.p_root=NULL;
		p_tmp=&(root.p_root->left);
		p_tmp->p_root=(node*)malloc(sizeof(node));
		if(p_tmp->p_root){
			p_tmp->p_root->num=5;
			p_tmp->p_root->left.p_root=NULL;
			p_tmp->p_root->right.p_root=NULL;
		}
		p_tmp=&(root.p_root->right);
		p_tmp->p_root=(node*)malloc(sizeof(node));
		if(p_tmp->p_root){
			p_tmp->p_root->num=9;
			p_tmp->p_root->left.p_root=NULL;
			p_tmp->p_root->right.p_root=NULL;
		}
		
		
	}*/
	tree root={},*p_tree=NULL;
	insert_in_order(&root,9);
	insert_in_order(&root,5);
	insert_in_order(&root,7);
	insert_in_order(&root,3);
	insert_in_order(&root,16);
	insert_in_order(&root,8);
	print(&root);
	printf("\n");
	//tree* p_tree =  findNum(&root,2);
	//printf("%d\n",p_tree->p_root->num);
	/*p_tree = search(&root,2);
	if(p_tree){
		printf("找到的数字是%d\n",p_tree->p_root->num);
	}
	p_tree = search(&root,4);
	if(!p_tree){
		printf("没有找到4\n");
	}*/
	p_tree = search_in_order(&root,3);
	if(p_tree->p_root){
		printf("找到的数字是%d\n",p_tree->p_root->num);
	}
	p_tree = search_in_order(&root,7);
	if(!(p_tree->p_root)){
		printf("没有找到数组7\n");
	}
	deinit(&root);
	return 0;
}
