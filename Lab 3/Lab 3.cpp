#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "Body.h"
#include "Car.h"
#include "Color.h"
#include "IncorrectInputStringException.h"
#include "IncorrectInputIntException.h"
#include "IncorrectInputValue.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car a;
	Engine::engine type;
	char color[20], brand[20];
	int power, kolvoDoor, i,volume;
	Size size;

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
				try
				{
					cin>> brand;
					for (int i = 0; i < strlen(brand); i++)
						if (brand[i] >= 48 && brand[i] <= 57) throw IncorrectInputStringException(1,(char*) "Введена цифра в названии");
				}

				catch (IncorrectInputStringException exp)
				{
					exp.show();
					continue;
				}

				a.setBrand(brand);
				rewind(stdin);
			}

			else if (i == 2)
			{
				cout << "Введите цвет : " << endl;
				rewind(stdin);
				try
				{
					cin >> color;
					for (int i = 0; i < strlen(color); i++)
						if (brand[i] >= 48 && brand[i] <= 57) throw IncorrectInputStringException(1, (char*)"Введена цифра в названии");
				}
				catch (IncorrectInputStringException exp)
				{
					exp.show();
					continue;
				}

				a.setColor(color);
			}

			else if (i == 3)
			{
				rewind(stdin);
				cout << "Ввведите длину : " << endl;
				try
				{
					cin >> size.length;
					rewind(stdin);
					if (size.length < 0) throw IncorrectInputIntException(1,(char*) "Введено отрицательное значение");
					if (size.length == 0) throw IncorrectInputIntException(2, (char*)"Введено нулевое значение");
				}
				catch (IncorrectInputIntException exp)
				{
					exp.show();
					continue;
				}
				
				cout << "Ввведите ширину : " << endl;
				try
				{
					cin >> size.width;
					rewind(stdin);
					if (size.width < 0) throw IncorrectInputIntException(1, (char*)"Введено отрицательное значение");
					if (size.width == 0) throw IncorrectInputIntException(2, (char*)"Введено нулевое значение");
				}
				catch (IncorrectInputIntException exp)
				{
					exp.show();
					continue;
				}
				cout << "Ввведите высоту : " << endl;
				try
				{
					cin >> size.height;
					rewind(stdin);
					if (size.height < 0) throw IncorrectInputIntException(1, (char*)"Введено отрицательное значение");
					if (size.height == 0) throw IncorrectInputIntException(2, (char*)"Введено нулевое значение");
				}
				catch (IncorrectInputIntException exp)
				{
					exp.show();
					continue;
				}
				a.setSize(size);
			}

			else if (i == 4)
			{
				try
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
					else throw IncorrectInputValueException(1, (char*)"Введено неправильное значение при выборе");
				}
				catch (IncorrectInputValueException exp)
				{
					exp.show();
					continue;
				}
			}

			else if (i == 5)
			{
				cout << "Введите мощность двигателя : " << endl;
				try
				{
					rewind(stdin);
					cin >> power;
					if (power < 0) throw IncorrectInputValueException(1, (char*)"Введено отрицательное значение");
					if (power == 0) throw IncorrectInputValueException(2, (char*)"Введено нулевое значение");
				}
				catch(IncorrectInputValueException exp)
				{
					exp.show();
					continue;
				}

				a.setPower(power);
			}
			else if (i == 6)
			{
				cout << "Введите объем двигателя : " << endl;
				try
				{
					rewind(stdin);
					cin >> volume;
					if (volume < 0) throw IncorrectInputValueException(1, (char*)"Введено отрицательное значение");
					if (volume == 0) throw IncorrectInputValueException(2, (char*)"Введено нулевое значение");
				}
				catch (IncorrectInputValueException exp)
				{
					exp.show();
					continue;
				}
				a.setVolume(volume);
			}
			else if (i == 7)
			{
				cout << "Введите количество дверей : " << endl;
				try
				{
					rewind(stdin);
					cin >> kolvoDoor;
					if (!cin.good()) throw IncorrectInputIntException(1, (char*)"Введено не числовое значение");
					if (kolvoDoor < 0) throw IncorrectInputValueException (1, (char*)"Введено отрицательное значение");
					if (kolvoDoor == 0) throw IncorrectInputValueException(2, (char*)"Введено нулевое значение");
					if (kolvoDoor > 6)throw IncorrectInputValueException(2, (char*)"Введено слишком большое значение");
					
				}
				catch (IncorrectInputIntException exp)
				{
					exp.show();
					continue;
				}
				catch (IncorrectInputValueException exp)
				{
					exp.show();
					continue;
				}

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
				cout << "Длина : " << a.getSize().length << " м." << endl;
				cout << "Ширина : " << a.getSize().width << " м." << endl;
				cout << "Высота : " << a.getSize().height << " м." << endl;

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