/*In un albergo il prezzo della camera dipende dal piano in cui ci si trova secondo la seguente tabella.
piano 1 € 35
piano 2 € 45
piano 3 € 55
piano 4 € 65
Calcola il prezzo del conto sapendo il numero di giorni di soggiorno e il piano della camera.
*/ 
#include <iostream>

using namespace std;

int piano;
float giorni;


int main()
{
	cout << "Quale piano vuole scegliere?" << endl;
	cin >> piano;
	switch (piano)
	{
	case 1:
		cout << "Il prezzo della camera e' 35 euro, per quanti giorni vuole stare?" << endl;
		cin >> giorni;
		cout << "Il prezzo totale e' " << 35 * giorni << " euro" << endl;
		break;
	case 2:
		cout << "Il prezzo della camera e' 45 euro, per quanti giorni vuole stare?" << endl;
		cin >> giorni;
		cout << "Il prezzo totale e' " << 45 * giorni << " euro" << endl;
		break;
	case 3:
		cout << "Il prezzo della camera e' 55 euro, per quanti giorni vuole stare?" << endl;
		cin >> giorni;
		cout << "Il prezzo totale e' " << 55 * giorni << " euro" << endl;
		break;
	case 4:
		cout << "Il prezzo della camera e' 65 euro, per quanti giorni vuole stare?" << endl;
		cin >> giorni;
		cout << "Il prezzo totale e' " << 65 * giorni << " euro" << endl;
		break;
	}
	system("PAUSE");
}