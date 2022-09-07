#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,int> m={{1,10},{2,20},{3,30},{4,40}};
	m.insert({5,50});
	sort(m.begin(),m.end());
	map<int,int>::iterator itr;
	itr=m.begin();
	for(itr;itr!=m.end();itr++){
		cout<<itr->first<<"-"<<itr->second<<endl;
	}
	return 0;
}
