#include <iostream>

using namespace std;
/* Animal 声明 和全局函数的声明 */
class Animal;
void showAnimal(Animal* a);
class Animal{
	string name;
	int age;
	public:
	Animal(string name="",int age=0){
		this->name=name;
		this->age=age;
	}
	void setName(const string& name){
		this->name=name;
	}
	void show(){
		showAnimal(this);
		innerShow(this);
		cout<<name<<","<<age<<endl;
	}
	Animal* getSelf(){
		age++;
		return this;
	}
	Animal getSelf2(){
		age++;
		return *this;
	}
	Animal& getSelf3(){
		age++;
		return *this;
	}
	string& getName(){
		return name;
	}
	void innerShow(Animal * a){
		cout <<a->name<<endl;
	}
};
void showAnimal(Animal* a){
	cout<<a->getName()<<endl;
}
int main(){
	/*Animal animal("test",1);
	animal.show();
	animal.setName("test2");
	animal.show();*/
	Animal animal("test1",1);
	showAnimal(&animal);
	animal.show();
	//animal.getSelf2().getSelf2();
	//animal.getSelf3().getSelf3();
	animal.getSelf()->getSelf();
	animal.show();
}
