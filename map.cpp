#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v={9,8,2,5,8,7,2};
	v.push_back(8);
	v.push_back(4);
	v.push_back(2);
	
	cout<<"Elements in the vector before sorting: ";
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	
	if(binary_search(v.begin(),v.end(),5)){
		cout<<"5 is present in the vector.";
	}
	else
		cout<<"Not present.";
	
	
	sort(v.begin(),v.end());
	
	if(binary_search(v.begin(),v.end(),5)){
		cout<<"5 is present in the vector.";
	}
	else
		cout<<"Not present.";
	
	cout<<endl<<"Max element: "<<*max_element(v.begin(),v.end());
	cout<<endl;
	cout<<"Min element: "<<*min_element(v.begin(),v.end());
	cout<<endl;
	
	cout<<"Elements in the vector: ";
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	reverse(v.begin(),v.end());
	cout<<"Elements in the vector after reversing: ";
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	cout<<"The number of times 8 was present in vector: ";
	cout<<count(v.begin(),v.end(),8);
	return 0;
}
