//Апаровчи Матвей 
#include <iostream>
#include <cmath>
using namespace std; 
int main() {
	/*For4.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1,
 2, . . ., 10 кг конфет.*/
/*	int a, b;
	cin >> a; 
	for ( int i = 1; i <= 10; i++) {
		b = a * i; 
		cout << i << ' ' << b << endl; 
	} */
	/*For7.Даны два целых числа A и B(A < B).Найти сумму всех целых чисел
 от A до B включительно.*/
/*	int b, a, c = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		c += i;
		cout << i << ' ' << c << endl;
	} */ 
	/* For8.Даны два целых числа A и B(A < B).Найти произведение всех целых
		чисел от A до B включительно */
/*	int b, a, c = 1;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		c *= i;
		cout << i << ' ' << c << endl;
	} */
	/*For9.Даны два целых числа A и B(A < B).Найти сумму квадратов всех целых
 чисел от A до B включительно.*/
	int a, b, c = 0;
	cin >> a >> b; 
	for (int i = a; i <= b; i++) {
		c += i * i; 
		cout << c << endl; 
	}
	return 0; 
}