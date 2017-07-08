/*
	顺序存储方式实现队列的演示
*/
#include "02queue.h"
static int queue[10];
static int head,tail;

//初始化函数
void init(){	
	head=0;
	tail=0;
}

//清理函数
void deinit(){
	head=0;
	tail=0;
}
//判断是否满的函数
int full(){
	return tail==10;
}

//判断是否空的函数
int empty(){
	return head==tail;
}
//放数据的函数
void push(int num){
	queue[tail]=num;
	tail++;
}
//取数据的函数
int pop(){
	head++;
	return queue[head-1];
}

//取下一个数字的函数
int front(){
	return queue[head];
}

//获得有效数据个数的函数
int size(){
	return tail-head;
}





