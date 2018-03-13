#include <iostream>
#include <windows.h>
using namespace std;
class Kalkulator
{
	double wynik;
public:
	void dodaj(double a, double b);
	void odejmij(double a, double b);
	void pomnoz(double a, double b);
	void podziel(double a, double b);
	double Get();
};
void Kalkulator::dodaj(double a, double b)
{
	wynik=a+b;
}
void Kalkulator::odejmij(double a, double b)
{
	wynik=a-b;
}
void Kalkulator::pomnoz(double a, double b)
{
	wynik=a*b;
}
void Kalkulator::podziel(double a, double b)
{
	wynik=a/b;
}
double Kalkulator::Get()
{
	return wynik;	
}
int main()
{
	double a, b;
	int dzialanie;
	char next;
	Kalkulator kal;
	kalkulator:
	system("cls");
	cout<<"Wybierz typ dzialania:"<<endl;
	cout<<"(1)Dodawanie"<<endl<<"(2)Odejmowanie"<<endl<<"(3)Mnozenie"<<endl<<"(4)Dzielenie"<<endl<<endl;
	cout<<"Wybor: ";cin>>dzialanie;
	if(dzialanie>4 or dzialanie<1)
	{
		goto kalkulator;
	}
	cout<<endl;
	cout<<"Podaj I Liczbe: ";
	cin>>a;
	cout<<"Podaj II Liczbe: ";
	cin>>b;
	switch(dzialanie)
	{
		case 1:
		{
		kal.dodaj(a, b);
		break;
		}
		case 2:
		{
		kal.odejmij(a, b);
		break;
		}
		case 3:
		{
		kal.pomnoz(a, b);
		break;
		}
		case 4:
		{
		kal.podziel(a, b);
		break;
		}
	}
	cout<<"Wynik: "<<kal.Get()<<endl<<endl;
	cout<<"Wykonac kolejne dzialanie?(Y/N): ";
	cin>>next;
	if(next=='Y' or next=='y')
	{
		goto kalkulator;
	}
	if(next=='N' or next=='n')
	{
		exit (0);
	}
}
