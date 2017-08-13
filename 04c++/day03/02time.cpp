#include <iostream>
#include <unistd.h>

using namespace std;

struct Time{
	int hour;
	int min;
	int sec;
	void setMyTime(int hour=0,int min=0,int sec=0){
		hour=hour;
		min=min;
		sec=sec;
	}
	void showMyTime(){
		cout <<hour<<":"<<min<<":"<<sec <<endl;
	}
	void dida(){
		sec++;
		if(sec==60){
			min++;
			sec=0;
			if(min==60){
				hour++;
				min=0;
				if(hour==24){
					hour=0;
				}
			}
		}
		
		cout<<hour<<":"<<min<<":"<<sec<<endl;
	}
	void run(){
		while(true){
			sleep(1);
			dida();
			
		}
	}
};

int main(){
	Time t;
	t.setMyTime(23,59,58);
	//t.change();
	//t.change();
	t.run();
}
