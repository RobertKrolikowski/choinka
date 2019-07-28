#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int wielkosc;
	char koniec;
	do
	{
		cout<<"Witaj w programie do malowania choinki."<<endl;
		cout<<"Podaj wielkosc choinki(3-10): ";
		cin>>wielkosc;
		if(wielkosc > 10)
			wielkosc = 10;
		else if(wielkosc < 3)
			wielkosc = 3;
		for(int i = 0; i < wielkosc; i++)
		{
			for(int j = i; j < wielkosc; j++)
			{
				cout<<" ";
			}
			for(int j = i * 2 + 1; j > 0; j--)
			{
				cout<<"*";
			}
			cout<<endl;			
		}
		for(int i = 0 ; i < wielkosc; i++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		cout<<"Czy chcesz rysowac jeszcze raz (t/n)? ";
		cin>>koniec;
		system("cls");
	}while(koniec == 't' || koniec == 'T');
	cout<<"Program czeka na nacisniecie entera...";
	getch();
	return 0;
}