#include <iostream>
#include <string>

using namespace std;
int main()
{
	double prezzo_prodotto [15];
	string codice_prodotto[15];
	double quantita;
	int scelta;
	bool f=false;
	
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"--                             RAPISARDI SHOP                            --"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl<<endl;
	
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"--               ELENCO DEI PRODOTTI               --"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Mele 2 euro/kg(111222)\n";
	cout<<"Pere 3 euro/kg(333444)\n";
	cout<<"Arance 4 euro/kg(444555)\n";
	cout<<"Sapone per piatti 5 euro(666777)\n";
	cout<<"Amuchina 2 euro(888999)\n";
	cout<<"Bresaola 15 euro/kg(121212)\n";
	cout<<"Prociutto cotto gran biscotto 20 euro/kg(232323)\n";
	cout<<"Prosciutto crudo gran biscotto 20 euro/kg(454545)\n";
	cout<<"Salame gran biscotto 23 euro/kg(676767)\n";
	cout<<"Pannolini pampers 4,90 euro(898989)\n";
	cout<<"Assorbenti lines 4 euro(999888)\n";
	cout<<"Rasoi gillette 3 euro(777666)\n";
	cout<<"Cavolfiori 5/kg(555444)\n";
	cout<<"Penne bic 2 euro(333222)\n";
	cout<<"Set quaderni 4 euro(111000)\n";
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Prema 0 per uscire dal programma,prema 1 per scegliere i prodotti\n";
	do
	{
		cin>>scelta;
		if (scelta != 0  && scelta != 1)
		{
			cout<<"Valore inserito errato riprovare\n";
			f=false;	
		}
		else
		{
			f=true;
		}
	}while (f == false);
	switch (scelta)
	{
		case 0:
		break;
		
		case 1:
			cout<<"Inserisca i codici a barre dei prodotti scelti\n";
			
			
			
	}
	system ("PAUSE");
}
