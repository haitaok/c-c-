#include <iostream>

using namespace std;
class Array{
	/*真正存储数据的空间*/
	int* data;
	int len;
	/*现在数据中元素的个数*/
	int size;
	private:
	void expend(){
		len=2*len+1;
		/*保留原来的数据地址*/
		int *temp = data;
		/*申请新内存*/
		data = new int[len];
		/* 复制原来的数据 */
		for(int i=0;i<size;i++){
			data[i]=temp[i];
		}
		delete[] temp;
	}
	public:
	explicit Array(int len=5):size(0){//禁止把int变成array
		this->len = len;
		/*根据传入的数据分配空间*/
		data = new int[len];
	}
	~Array(){
		if(data){
			delete[] data;
			data=NULL;
		}
	}
	/*拷贝构造函数*/
	Array(const Array& arr){
		len = arr.len;
		size = arr.size;
		/*根据长度开辟新空间*/
		data = new int[len];
		/*拷贝值*/
		for(int i=0;i<size;i++){
			//data[i]=arr.data[i];
			*(data+i)=*(arr.data+i);	
		}
	}
	
	void push_data(const int& d){
		if(size>=len){
			//扩容
			expend();
		}
		data[size++]=d;
		
	}
	/* 
		复制运算符的重载 
		考虑返回值 考虑子赋值 被赋值对象的空间处理 原来对象数据的处理
	*/
	Array& operator=(const Array& arr){
		if(this!=&arr){
			int* temp = data;
			len = arr.len;
			size=arr.size;
			/*重新申请内存*/
			data = new int[len];
			for(int i=0;i<size;i++){
				data[i]=arr.data[i];
			}
			/*释放原来的空间*/
			delete[] temp;
			
		}
		
		return *this;
	}
	/*[] 运算符*/
	int operator[](int ind){
		if(ind>size-1){
			/*访问越届*/
			throw "out of range ind>size";
		}
		return data[ind];
	}
	friend ostream& operator<<(ostream& os,const Array& arr){
		for(int i=0;i<arr.size;i++){
			os << arr.data[i] << " ";
		}
		return os;
	}
};

int main(){
	Array arr(10);//必须满足一个参数构造
	arr.push_data(9);
	arr.push_data(5);
	arr.push_data(2);
	arr.push_data(7);
	cout << "--------" <<endl;
	cout << arr[0]<<endl;
	cout << arr[1]<<endl;
	cout << arr[2]<<endl;
	cout << arr[3]<<endl;
	try{
		cout << arr[4]<<endl;
	}catch(const char*  msg){
		cout <<msg <<endl;
	}
	

	Array arr2;
	/*不会调用构造 跟调用默认拷贝构造*/
	arr2 = arr;
	cout << arr << endl;
	cout << arr2 << endl;
	
}
