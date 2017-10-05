#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> const& vec){
	size_t size = vec.size();
	cout <<"大小："<< size<<endl;
	cout <<"内容:"<<flush;
	for(size_t i=0;i<size;++i){
		cout <<vec[i]<<' ';
	}
	cout << endl;
}
void show(vector<int> const& vec){
	for(vector<int>::const_iterator it= vec.begin();it!=vec.end();++it){
		cout <<*it<<' ';
	}
	cout << endl;
}
void rshow(vector<int> const& vec){
	for(vector<int>::const_reverse_iterator it = vec.rbegin();it!=vec.rend();++it){
		cout <<*it<<' ';
	}
	cout << endl;
}
template<typename T>
void disp(vector<T> const& vec){
	for(typename vector<T>::const_iterator it = vec.begin();it!=vec.end();++it){
		cout << *it << ' ';
	}
	cout <<endl;
}
int main(void){
	vector<int> v1;
	print(v1);
	vector<int> v2(5);
	print(v2);
	vector<int> v3(5,123);
	print(v3);
	int a[]={100,200,300,400,500};
	vector<int> v4(&a[0],&a[5]);
	print(v4);
	vector<int> v5(&a[1],&a[4]);
	print(v5);
	v5.front()=250;
	cout <<v5.front()<<endl;
	v5.back()++;
	cout <<v5.back()<<endl;
	v5.push_back(402);
	v5.push_back(403);
	print(v5);
	v5.pop_back();
	print(v5);
	//v5.push_front(100);
	//v5.pop_front(100);
	int i=0;
	for(vector<int>::iterator it = v5.begin();it!=v5.end();++it){
		*it=i++;
	}
	print(v5);
	show(v5);//0 1 2 3
	rshow(v5);
	vector<int>::iterator it = v5.begin();
	cout <<*(it+2)<<endl;//2
	it +=2;
	cout <<*it<<endl;// 2
	//it[0]=-1;
	//cout <<*it<<endl;// -1
	cout << boolalpha << (it > v5.begin())<<endl;//true
	//it[0]=1;
	//cout <<*it<<endl;// 2
	cout << v5.begin()-it<<endl;//-2
	//相加没有意义
	//cout <<v5.begin()+it <<endl;
	vector<string> v6;
	v6.push_back("北京");
	v6.push_back("天津");
	v6.push_back("上海");
	v6.push_back("重庆");
	disp(v6);
	disp(v5);
	vector<string>::iterator it2 = v6.insert(v6.begin()+1,"济南");
	disp(v6);
	cout<<*it2<<endl;
	it2 = v6.erase(it2);
	disp(v6);
	cout <<*it2<<endl;
	v6.insert(v6.begin(),"广州");
	disp(v6);
	v6.erase(v6.begin());
	disp(v6);
	return 0;
}
