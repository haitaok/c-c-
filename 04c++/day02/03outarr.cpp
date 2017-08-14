#include <iostream>
using namespace std;

void outputarr(int * arr,unsigned int len=5,char se=','){
	for(int i=0;i<len;i++){
		cout<<*(arr+i);
		if(i<len-1){
			cout<<se;
		}
	}
	cout<<endl;
}

int main(){
	int arr[]={1,2,3,4,5};
	outputarr(arr);
}
