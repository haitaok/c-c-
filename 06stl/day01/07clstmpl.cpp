#include <iostream>
using namespace std;
template <typename T>
class Comparator{
public:
	Comparator(T x,T y):m_x(x),m_y(y){
	
	}
	T max(void) const{
		return m_x<m_y?m_y:m_x;
	}
	T min(void) const{
		return m_x<m_y?m_x:m_y;
	}		
private:
	T m_x;
	T m_y;	
};
/*template <typename T>
Comparator<T>::Comparator(T x,T y):m_x(x),m_y(y){
	
}
template<typename T>
T Comparator<T>::max(void) const{
	return m_x<m_y?m_y:m_x;
}
template<typename T>
T Comparator<T>::min(void) const{
	return m_x<m_y?m_x:m_y;
}*/
int main(void){
	Comparator<int> ci(123,456);
	cout<<ci.max()<<' '<<ci.min()<<endl;
	Comparator<double> cd(1.23,4.56);
	cout <<cd.max()<<' '<<cd.min()<<endl;
	Comparator<string> cs("hello","world");
	cout <<cs.max()<<' '<<cs.min()<<endl;
	return 0;
}
