#include<iostream>
using namespace std;
main()
{
int a,b,c;
int rosnaco(int a, int b, int c);
int malejaco(int a, int b, int c);
cout <<"Podaj liczbe pierwsza" <<endl; ;
cin >>a;
cout <<"Podaj liczbe druga:"<<endl;
cin >>b;
cout <<"Podaj liczbe trzecia"<<endl; ;
cin >>c;
rosnaco(a, b, c);
cout<<endl;
malejaco(a, b, c);
return 0;
}
int rosnaco(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				cout<<c<<" "<<b<<" "<<a;
			}
			else
			{
				cout<<b<<" "<<c<<" "<<a;
			}
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			if(a>c)
			{
				cout<<c<<" "<<a<<" "<<b;
			}
			else
			{
				cout<<a<<" "<<c<<" "<<b;
			}	
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			if(b>a)
			{
				cout<<a<<" "<<b<<" "<<c;
			}
			else
			{
				cout<<b<<" "<<a<<" "<<c;
			}
		}
	}
}
int malejaco(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				cout<<a<<" "<<b<<" "<<c;
			}
			else
			{
				cout<<a<<" "<<c<<" "<<b;
			}
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			if(a>c)
			{
				cout<<b<<" "<<a<<" "<<c;
			}
			else
			{
				cout<<b<<" "<<c<<" "<<a;
			}	
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			if(b>a)
			{
				cout<<c<<" "<<b<<" "<<a;
			}
			else
			{
				cout<<c<<" "<<a<<" "<<b;
			}
		}
	}
}
