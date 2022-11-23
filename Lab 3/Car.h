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
			cout << "Бренд машины : " << brand <<endl<< "Цвет : " << color <<endl<< "Длина : " << size.length <<"м." << endl << "Ширина : " << size.width<<"м." << endl << "Высота : " << size.height<<"м." << endl;
			cout << "Количество дверей : " << doorAmount << endl << "Объем двигателя : " << volume << endl << "Мощность двигателя : " << power << endl << "Тип двигателя : ";
			switch (type)
			{
			case 0:cout << "Дизельный";
				break;
			case 1:cout << "Бензиновый";
				break;
			}
		}
	};




