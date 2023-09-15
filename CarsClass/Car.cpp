#include "Car.h"
#include<iostream>
using namespace std;


Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->price = pr;
	this->year = y;
}

Car::~Car()
{
	delete[]this->model;
	delete[]this->color;
}

void Car::Input()
{
}

void Car::Print()
{
}

char* Car::GetModel()
{
	return model;
}

char* Car::GetColor()
{
	return color;
}

int Car::GetYear()
{
	return 0;
}

double Car::GetPrice()
{
	return 0.0;
}

void Car::SetModel(const char* m)
{

}

void Car::SetColor(const char* c)
{
	if (color != nullptr)
	{
		cout << color << "... delete\n";
		delete[]color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
}

void Car::SetPrice(double pr)
{
}
