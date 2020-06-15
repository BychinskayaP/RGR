
#include "Air.h"
#include <string>
#include "sort.h"

using namespace std;
int main() {
	rus(0);
	

	Air aeroflot[7];

	ifstream in("Flights.txt"); 
	cout << "Вывод на экран рейсов из файла данных... \n";
	for (int i = 0; i < 7; i++)
	{
		in >> aeroflot[i];
		cout << aeroflot[i];
	}
	cout << "\n";
	Air a("2", 1, "Ил2");                    // Пример работы конструктора копировальщика
	Air b(a);
	Air c, d, e, f;
	c = d = e = f = b;
cout << c << d << e << f << b;
string PT;
cout << "\n Введите пункт назначения, чтобы узнать информацию о рейсах \n";

rus(1);
cin >> PT;
rus(0);
cout << "В пункт " << PT << " есть рейс(ы):";
search(PT, aeroflot);         // Функция поиска рейсов

// Теперь сортировки....

Air a1[7], a2[7], a3[7], a4[7], a5[7]; // Для каждого объекта класса будет своя сортировка

cout << "\n Неотсортированный массив данных:\n";

for (int i = 0; i < 7; i++)
{
	a1[i] = a2[i] = a3[i] = a4[i] = a5[i] = aeroflot[i];

}
coutarray(a1);


Bubble(a1);             // Пузырьком

Inserts(a2);          // Вставками

Selection(a3);             // Выбором

Shell(a4); // Шелла

Hoar(a5, 0, 6);      // Хоара(быстрая)
cout << "\n";
coutarray(a5);



	return 0;
}
