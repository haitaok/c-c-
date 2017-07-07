/*
	顺序物理结构实现栈的演示
*/
#include "03stack.h"
static int stack[10];
static int top; //栈顶位置 第一个方新数据的位置

//初始化函数 把我门栈置成使用的位置
void init(){
	top=0;
}

//清理栈
void deinit(){
	top=0;
}

//判断栈是否已经满了
int full(){
	return top==10;
}
//判断栈是否是空的
int empty(){
	return !top;
}
//放置新数据的函数
void push(int num){
	stack[top]=num;
	top++;
}
//取数据的函数
int pop(){
	top--;
	return stack[top];
}
//获得最后一个数据的函数
int last(){
	return stack[top-1];
}
//获得有效数据个数的函数
int size(){
	return top;
}





