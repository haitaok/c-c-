#include <iostream>
using namespace std;
class A{
	public:
	static void show(A *mythis){
		mythis->play();
	}
	void play(){
		cout<<"this is play()"<<endl;
	}
};
int main(){
	A a;
	A::show(&a);
}
