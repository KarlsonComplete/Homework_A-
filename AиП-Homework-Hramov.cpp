// AиП-Homework-Hramov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
//1 home
/*	cout << "*" << "     " << "*" << endl;
	cout << "*" << "    " << "*" << endl;
	cout << "*" << "   " << "*" << endl;
	cout << "*" << "  " << "*" << endl;
	cout << "*" << " " << "*" << endl;
	cout << "*" << "" << "*" << endl;
	cout << "*" << " " << "*" << endl;
	cout << "*" << "  " << "*" << endl;
	cout << "*" << "   " << "*" << endl;
	cout << "*" << "    " << "*" << endl;
	cout << "*" << "     " << "*" << endl;
		*/
	 
//2home
/*	int h, w, selection;
	cout << "Наш калькулятор может посчитать периметр и площадь прямоугольника" << endl;
	cout << "Введите высоту прямоугольника : "<<endl;
	cin >> h;
	cout << "Введите ширину прямоугольника : " << endl;
	cin >> w;
	cout << "Какую операцию вы хотите выполнить c прямоугольником " << endl
		<< "1.Посчитать площадь" << endl
		<< "2.Посчитать периметр" << endl;
		cin >> selection;

		switch (selection){
			case 1:
				cout << "Результат подсчета площади прямоугольника равен: " << h * w << endl;
				break;

			case 2: cout << "Результат подсчета периметра прямоугольника равен: " << 2*(h * w) << endl;
				break;
		
		default:
			break;
		}
		*/
//3home
/*	float number1, number2, number3,num1,num2,num3,sum;
	cout << "Введите 3 числа : " << endl;
	cin >> number1;
	cin >> number2;
	cin >> number3;
	cout << "Вы ввели : "<< number1<<endl;
	cout << "Вы ввели : " << number2 << endl;
	cout << "Вы ввели : " << number3 << endl;
	num1 = number1 * 2;
	cout << "Число 1 равно : " << num1 << endl;
	num2 = number2 / 3;
	cout << "Число 2 равно : " << num2 << endl;
	num3 = number3 * number3;
	cout << "Число 3 равно : " << num3 << endl;
	sum = num1 + num2 + num3;
	cout << "Cумма новых чисел равно : "<< sum <<endl;
	*/
//4home
/*	int num1, num2, num3, largestnum;
	cout <<" Введите 3 числа" <<endl;
	cin >> num1 >> num2  >> num3 ;
	cout << "Наибольшее число " << (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)) * 5 << endl;
	cout << "Наименьшее число " << (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)) * 3 << endl;
	*/
//5home
/*	int selection,selection1;
	double value, answer;
	cout << "Добро пожаловать в наш конвертер!" << endl;
	
	cout << "Выберите из списка величину из которой вы хотите перевести :" << endl
			<< "1.Кубические санитиметры" << endl
			<< "2.Литры" << endl
			<< "3.Баррель" << endl;
			cin >> selection;
	
			cout << "Выберите из списка величину в которую вы хотите перевести :" << endl
			<< "1.Кубические санитиметры" << endl
			<< "2.Литры" << endl
			<< "3.Баррель" << endl;
			cin >> selection1;

			cout << "Введите значения: ";
			cin >> value;

			if (selection==3 && selection1==2) {
				answer = value * 159;
				cout << "Ответ :" << answer <<"литров"<< endl;
			}
			if (selection==3 && selection1==1) {
				answer = value * 159000;
				cout << "Ответ :" << answer <<"см^3" << endl;
			}
			if (selection == 2 && selection1 == 3) {
				answer = value * 0.0063;
				cout << "Ответ :" << answer << "баррелей" << endl;
			}
			if (selection == 2 && selection1 == 1) {
				answer = value * 1000;
				cout << "Ответ :" << answer << "см^3" << endl;
			}
			if (selection == 1 && selection1 == 2) {
				answer = value * 0.001;
				cout << "Ответ :" << answer << "литров" << endl;
			}
			if (selection == 1 && selection1 == 3) {
				answer = value * 0.0000063;
				cout << "Ответ :" << answer << "баррелей" << endl;
			}
*/
//6home
/*int x,answer;
x = -2;
answer = (abs(x))+(x * x * x * x * x);
cout << "Answer: " << answer ;
*/
}


