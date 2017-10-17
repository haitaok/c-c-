#include <iostream>
#include <map>
using namespace std;
class Candidate{
public:
	Candidate(string const& name=""):m_name(name),m_votes(0){}
	string const& name(void)const{
		return m_name;
	}
	int votes(void) const{
		return m_votes;
	}
	void vote(void){
		++m_votes;
	}
private:
	string m_name;
	int m_votes;
};
int main(void){
	map<char,Candidate> cs;
	cs.insert(pair<char,Candidate>('E',Candidate("张飞")));
	cs.insert(make_pair('D',Candidate("赵云")));
	cs['C']=Candidate("关羽");
	cs['B']=Candidate("刘备");
	cs['A']=Candidate("曹操");
	typedef map<char,Candidate>::iterator IT;
	pair<IT,bool> res = cs.insert(make_pair('F',Candidate("黄忠")));
	if(res.second == false){
		cout <<"插入失败！"<<endl;
	}else{
		cout <<"插入成功："<<res.first->first<<", "<<res.first->second.name();
	}
	cs['C']=Candidate("马超");
	cs.erase(cs.begin());
	IT begin = cs.begin();
	begin++;
	IT end = cs.end();
	end --;
	cs.erase(begin,end);
	cout <<cs.erase('B') <<endl;
	for(int i=0;i<10;i++){
		for(IT it =cs.begin();it!=cs.end();++it ){
			cout <<'('<<it->first<<')'<<it->second.name()<<' ';
		}
		cout << endl<<"请投下庄严的一票:"<<flush;
		char key;
		cin >>key;
		IT it = cs.find(key);
		if(it == cs.end()){
			cout <<"废票!"<<endl;
			continue;
		}
		it->second.vote();
	}
	IT win=cs.begin();
	for(IT it =cs.begin();it!=cs.end();++it ){
		cout <<it->second.name()<<"获得"<< it ->second.votes()<<"票."<<endl;
		if(it->second.votes()>win->second.votes()){
			win = it;
		}
	}
	cout <<"热烈祝贺"<<win->second.name()<<"同志成功当选主席保洁员！"<<endl;
	return 0;
}
