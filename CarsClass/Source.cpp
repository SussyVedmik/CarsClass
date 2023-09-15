#include<iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car a("Audi A5", "Red", 2021, 25000);
	/*	char* model = a.GetModel();
	cout << model << endl;	*/
	a.Input();
	a.SetColor("White");
	char* color = a.GetColor();
	cout << color << endl;
	a.SetModel("BMW");
	char* model = a.GetModel();
	cout << model << endl;
	a.Print();
	
	


}