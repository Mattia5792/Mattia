/*
Scrivere un programma che riceve in ingresso un mese (numero intero) e stampa quanti giorni ha quel mese.
*/ 
#include <iostream>

using namespace std;

int mese;


int main()
{
	cout << "Inserisci il mese:";
	cin >> mese;
	switch (mese)
	{
		case 1:
			cout << "Gennaio ha 30 giorni" << endl;
			break;
		case 2:
			cout << "Febbraio ha 28 giorni" << endl;
			break;
		case 3:
			cout << "Marzo ha 31 giorni" << endl;
			break;
		case 4:
			cout << "Aprile ha 30 giorni" << endl;
			break;
		case 5:
			cout << "Maggio ha 31 giorni" << endl;
			break;
		case 6:
			cout << "Giugno ha 30 giorni" << endl;
			break;
		case 7:
			cout << "Luglio ha 31 giorni" << endl;
			break;
		case 8:
			cout << "Agosto ha 31 giorni" << endl;
			break;
		case 9:
			cout << "Settembre ha 30 giorni" << endl;
			break;
		case 10:
			cout << "Ottobre ha 31 giorni" << endl;
			break;
		case 11:
			cout << "Novembre ha 30 giorni" << endl;
			break;
		case 12:
			cout << "Dicembre ha 31 giorni" << endl;
			break;
	}
	system("PAUSE");
}