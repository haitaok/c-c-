/*
	树的测试代码
*/
#include <stdio.h>
#include "02tree.h"
void print(tree* p_tree){
	if(!p_tree||!(p_tree->p_root)){
		return;
	}
	//printf("%d ",p_tree->p_root->num);//前序遍历
	print(p_tree->p_root->p_left);
	//printf("%d ",p_tree->p_root->num);//中序遍历
	print(p_tree->p_root->p_right);
	printf("%d ",p_tree->p_root->num);//后序遍历
}
int main(){
	tree tr1={},tr2={},tr3={};
	node nd1={},nd2={},nd3={};
	tr1.p_root=&nd1;
	nd1.num=1;
	nd1.p_left=&tr2;
	nd1.p_right=&tr3;
	nd2.num=2;
	tr2.p_root=&nd2;
	nd3.num=3;
	tr3.p_root=&nd3;
	print(&tr1);
	printf("\n");
	return 0;
}
