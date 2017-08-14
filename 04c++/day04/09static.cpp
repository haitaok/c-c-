#include <iostream>

using namespace std;

class Dog{
	int age;
	public:
	static int dogcount;
	
	static void  show(){
		cout<<dogcount<<endl;
	}
	Dog(){
		dogcount++;
	}
	void showDao(){
		show();
	}
	
};
int Dog::dogcount=0;

int main(){
	Dog d1;
	Dog d2;
	Dog::show();
	d2.showDao();
	d2.dogcount=4;
	d1.show();
}
