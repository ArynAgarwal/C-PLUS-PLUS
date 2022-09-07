#include<iostream>

using namespace std;

class person
{
	private:
		int x;
	public:
	person(int num1){
		x=num1;
	}
	void friend operator+(person obj1,student obj2);
	
};

class student
{
	private:
		int y;
	public:
	student(int num2)	{
		y=num2;
	}
	void friend operator+(person obj1,student obj2);
};

class teacher
{
	private: 
		int z;
	public:
		void friend operator+(person obj1,student obj2)
		{
			teacher obj3;
			obj3.z=obj1.x+obj2.y;
			return obj3;
		}
};
int main(){
	person o1(2);
	student o2(3);
	teacher o3();
	cout<<o3.z<<endl;
	return 0;
}
