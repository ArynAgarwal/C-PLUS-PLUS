#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream f1;
	string str;
	f1.open("D:\\file handling\\abc.txt",ios::app);
	
	if(f1.fail())	{
		cout<<"Failed the open the stream....try again."<<endl;
		return 10;
	}
	else{
		cout<<"Enter what you want to write in the file..."<<endl;
		getline(cin,str);
		f1<<endl;
		f1<<str;
		f1.close();
	}
}

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream f2;
	string s;
	f2.open("D:\\file handling\\abc.txt");
	if(f2.fail()){
		cout<<"Failed to the open the stream...try again."<<endl;
		return 0;
	}
	else{
		
	}
}
