#include<iostream>

using namespace std;

class a
{
	int x;
	
	public:
		
		int f1()
		{
			return x=20;
		}
};

class b
{
	int y;
	
	public:
		
		int f2()
		{
			return y=558;
		}
};

class c: public a,public b
{
	int z;
	
	public:
		
		int f3()
		{
			return z=17;
		}
}ob;

int main ()
{
	int k,l,m;
	
	k=ob.f1();
	
	l=ob.f2();
	
	m=ob.f3();
	
	cout<<"1.temel sinifa eristi"<<k<<endl;
	
	cout<<"2.temel sinifa eristi"<<l<<endl;
	
	cout<<"turetilmis sinifa eristi"<<m<<endl;	
	
	
	return 0;
}
