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
			cout << "����� ������ : " << brand << "���� : " << color << "����� : " << size[0]<<"�." << endl << "������ : " << size[1]<<"�." << endl << "������ : " << size[2]<<"�." << endl;
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




