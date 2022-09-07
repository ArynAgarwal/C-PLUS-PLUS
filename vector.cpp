/*vector<int> :: iterator itr;

itr=v.begin;

for(itr; itr!=v.end();itr++){
	cout<<*itr;
}
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(8);
	v.push_back(3);
	v.push_back(11);
	
	cout<<"The size of the vector is: "<<v.size()<<endl;
	cout<<"The capacity of the vector is: "<<v.capacity()<<endl;
	cout<<"The elements in the vector are: ";
	
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	v.resize();
	cout<<"Size: "<<v.size();
	cout<<"Capacity"<<v.capacity();
	cout<<endl;
	v.insert(v.begin()+2,32);
	cout<<"The elements in the vector are: ";
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	find()
	
	vector<int> :: iterator itr;
	itr=v.begin();
	
	for(itr; itr!=v.end(); itr++){
		cout<< *itr<<" ";
	}
	cout<<endl;
	
	for(int i:v){
		cout<< i<<" ";
	}
	cout<<endl;
	
	vector<int>::reverse_iterator itr1;
	
	itr1=v.rbegin();
	
	for(itr1; itr1!=v.rend();itr1++){
		cout<<*itr1<< " ";
	}
	cout<<endl;
	
	v.pop_back();
	cout<<"The elements in the vector are: ";
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<v.empty()<<endl;
	v.clear();
	cout<<v.empty();
	return 0;
	
}
