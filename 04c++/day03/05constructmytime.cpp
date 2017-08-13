#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <ctime>

using namespace std;

class MyTime{
	public:
	MyTime(){
		hour=0;
		min=0;
		sec=1;
		cout << "我是构造我怕谁" << endl;
	}
	//public:
	private:
	/*特征*/
	int hour;
	int min;
	int sec;
	public:
	/*行为*/
	void showMyTime(){
		//cout<<hour<<":"<<min<<":"<<sec<<endl;
		printf("%02d:%02d:%02d\r",hour,min,sec);
		fflush(stdout);
	}
	void setMyTime(int h=0,int m=0,int s=0){
		hour=h;
		min=m;
		sec=s;
	}
	/* 时间走一妙*/
	void dida(){
		sec++;
		if(60==sec){
			sec=0;
			min++;
			if(60==min){
				min=0;
				hour++;
				if(24==hour){
					hour=0;
				}
			}
		}
	}
	//private:
	public:
	void run(){
		while(1){
			//sleep(1);
			time_t t=time(NULL);
			while(t==time(NULL));
			dida();
			showMyTime();
		}
	}
	
};

int main(){
	/*在栈中构建对象 自动调用构造函数*/
	MyTime mytime;
	mytime.run();
}
