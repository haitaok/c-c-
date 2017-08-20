#include <iostream>
using namespace std;
class A{
	private:
	int a;
	void funprivate(){
		cout << "funprivate()" << endl;
	}
	protected:
	void funprotected(){
		cout << "funprotected()" << endl;
	}
	public:
	void funpublic(){
		cout << "funpublic()" << endl;
	}
	
};
class B:protected A{
	public:
	void showApublic(){
		funpublic();
	}
	void showAprotected(){
		funprotected();
	}
	
};

int main(){
	B b;
	b.showApublic();
	b.showAprotected();
	
}
