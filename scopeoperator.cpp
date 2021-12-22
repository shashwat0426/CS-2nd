
#include<iostream>
#include<iomanip>
using namespace std;
int m=10;
int main()
{
	int m;
	m=20;
{
		int m=30;
		   {
		cout<<"local 1 :"<<m<<endl;
		cout<<"global:"<< ::m<< endl;
      {
		int m=40;
		cout<<"local 2 :"<<m<<endl;
		cout<<"global:"<< ::m<< endl;
	  }
		  }
}
	cout<<"local 3:"<<m<<endl;
	cout<<"global:"<<::m<<endl;


}
