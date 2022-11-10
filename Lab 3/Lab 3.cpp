#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "Body.h"
#include "Car.h"
#include "Color.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car a;
	Engine::engine type;
	char color[20], brand[20];
	double volume;
	int power, kolvoDoor, i;
	int size[3];

	while (1)
	{
		i = 0;
		cout << "1 - Записать информацию о автомобиле\n2 - Вывести всю информацию об автомобиле\n3 - Вывести определенную информацию об автомобиле\n0 - Завершить программу" << endl;
		cin >> i;
		if (i == 1)
		{
			cout << "Выберете какую информацию записать :\n1 - Бренд\n2 - Цвет\n3 - Размер\n4 - Тип двигателя\n5 - Мощность двигателя\n6 - Объем двигателя\n7 - Количество дверей" << endl;
			cin >> i;
			if (i == 1)
			{
				cout << "Введите название бренда : " << endl;
				rewind(stdin);
				fgets(brand, 20, stdin);
				a.setBrand(brand);
			}

			else if (i == 2)
			{
				cout << "Введите цвет : " << endl;
				rewind(stdin);
				fgets(color, 20, stdin);
				a.setColor(color);
			}

			else if (i == 3)
			{
				rewind(stdin);
				cout << "Ввведите длину : " << endl;
				cin >> size[0];
				rewind(stdin);
				cout << "Ввведите ширину : " << endl;
				cin >> size[1];
				rewind(stdin);
				cout << "Ввведите высоту : " << endl;
				cin >> size[2];
				a.setSize(size);
			}

			else if (i == 4)
			{
				cout << "Выберете тип двигателя : \n1 - бензиновый\n2 - дизельный\n3 - электрический" << endl;
				rewind(stdin);
				cin >> i;
				if (i == 1)
				{
					type = Engine::engine::diesel;
					a.setType(type);
				}
				else if (i == 2)
				{
					type = Engine::engine::petrol;
					a.setType(type);
				}
				else if (i == 3)
				{
					type = Engine::engine::electro;
					a.setType(type);
				}

				else
					cout << "Введено неверное значение" << endl;

			}

			else if (i == 5)
			{
				cout << "Введите мощность двигателя : " << endl;
				rewind(stdin);
				cin >> power;
				a.setPower(power);
			}
			else if (i == 6)
			{
				cout << "Введите объем двигателя : " << endl;
				rewind(stdin);
				cin >> volume;
				a.setVolume(volume);
			}
			else if (i == 7)
			{
				cout << "Введите количество дверей : " << endl;
				rewind(stdin);
				cin >> kolvoDoor;
				a.setDoorAmount(kolvoDoor);
			}
		}
		else if (i == 2)
			a.printAllInfo();

		else if (i == 3)
		{
			cout << "Выберете информацию для вывода : \n1 - Бренд\n2 - Цвет\n3 - Размер\n4 - Тип двигателя\n5 - Мощность двигателя\n6 - Объем двигателя\n7 - Количество дверей" << endl;
			cin >> i;
			if (i == 1)
			{
				cout << a.getBrand();
			}
			else if (i == 2)
			{
				cout << a.getColor();
			}
			else if (i == 3)
			{
				cout << "Длина : " << a.getSize()[0] << " м." << endl;
				cout << "Ширина : " << a.getSize()[1] << " м." << endl;
				cout << "Высота : " << a.getSize()[2] << " м." << endl;

			}
			else if (i == 4)
			{
				if (a.getType() == 0)
					cout << "Дизельный" << endl;
				else if (a.getType() == 1)
					cout << "Бензиновый" << endl;
			}
			else if (i == 5)
			{
				cout << a.getPower() << " л. с." << endl;
			}
			else if (i == 6)
			{
				cout << a.getVolume() << " л." << endl;

			}
			else if (i == 7)
			{
				cout << "Количество дверей : " << a.getDoorAmount() << endl;
			}
		}
		else if(i==0)
		return 0;
		cout << endl;
	}
	
}