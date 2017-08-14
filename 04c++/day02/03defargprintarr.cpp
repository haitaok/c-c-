#include <iostream>

using namespace std;

void printArr(int *parr,unsigned int len=5,char dis=',');
int main(){
	int data[10]={9,8,7,6,5,4,3,2,1,6};
	printArr(data,3);
	printArr(data);
	printArr(data,10);
	printArr(data,10,'$');
}
void printArr(int *parr,unsigned int len,char dis){
	for(int i=0;i<len-1;i++){
		cout<<parr[i]<<dis;
	}
	cout<<parr[len-1]<<endl;
}
