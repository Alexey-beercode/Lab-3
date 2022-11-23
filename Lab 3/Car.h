#pragma once
#include "Body.h"
#include "Engine.h"
#include "Color.h"
#include <iostream>
using namespace std;

	class Car :public Engine, public Body, public Color
	{
		char brand[20];

	public:

		Car()
		{
			strcpy_s(brand, "BMW");
		}

		char* getBrand()
		{
			return brand;
		}

		void setBrand(char a[20])
		{
			for (int i = 0; i < 20; i++)
				brand[i] = a[i];
		}
		
		void printAllInfo()
		{
			setlocale(LC_ALL, "ru");
			cout << "����� ������ : " << brand <<endl<< "���� : " << color <<endl<< "����� : " << size.length <<"�." << endl << "������ : " << size.width<<"�." << endl << "������ : " << size.height<<"�." << endl;
			cout << "���������� ������ : " << doorAmount << endl << "����� ��������� : " << volume << endl << "�������� ��������� : " << power << endl << "��� ��������� : ";
			switch (type)
			{
			case 0:cout << "���������";
				break;
			case 1:cout << "����������";
				break;
			}
		}
	};




