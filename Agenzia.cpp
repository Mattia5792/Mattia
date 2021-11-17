#include <iostream>
#include <string>

using namespace std;

int main()
{
	int codice;
	bool f=false;
	float costi;
	int bagagli;
	float persone;
	string scelta;
	float costo;
	int imposte;
	
	cout<<"--------------------------------"<<endl;
    cout<<"--     RAPISARDI AIRLINES     --"<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    
    cout<<"Benvenuto nel programma di prenotazione dell'agenzia di viaggi ''Rapisardi Airlines''\n";
    cout<<"Il piano tariffario per le destinazioni e' il seguente e le destinazioni dei viaggi sono:\n";
    cout<<"Catania-Roma (30 euro) (554226),Catania-Praga (55 euro) (553223),Catania-New York (400 euro) (552224)\n";
    
    do
    {
    	cout<<"Inserisca il codice della tariffa scelta\n";
    	cin>>codice;
    	if (codice!=554226 && codice!=553223 && codice!=552224)
    	{
    		cout<<"Codice errato,riprovare\n";
    		f=false;
		}
		else
		{
			f=true;
		}
    }
    while(f==false);
    
    	switch (codice)
    	{
    		case 554226:
    			cout<<"Inserisca il numero di persone in viaggio\n";
    			cin>>persone;
    			cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''\n";
    			cin>>scelta;
    			if (scelta=="si")
    			{
    				do
    				{
    					if (bagagli > persone)
    					{
    						cout<<"Errore, i bagagli sono piu' delle persone,riprovare\n";
    						f=false;
    					}
    					else
    					{
    						cout<<"In quanti portate i bagagli in stiva?\n";
							cin>>bagagli;
    						cout<<"Le verranno aggiunti 20 euro per ogni bagaglio sul prezzo finale\n";
	    					cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
	    					cout<<"Il prezzo lordo e' di "<<30*persone*bagagli<<" Euro\n";
	    					cout<<"Le imposte sono di "<<30*persone/100*10<<" euro\n";
	    					costo=(30*persone*bagagli)+(30*persone*bagagli)/100*10;
	    					cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
	    					cout<<"Le auguriamo un buon viaggio\n";
	    					f=true;
						}
					}
    				while (f==false);
    			}
    			if (scelta=="no")
    			{
    				cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
    				cout<<"Il prezzo lordo e' di "<<30*persone<<" Euro";
    				cout<<"Le imposte sono di "<<(30*persone/100*10)<<" euro\n";
    				costo=(30*persone)+(30*persone/100*10);
    				cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
    				cout<<"Le auguriamo un buon viaggio\n";
				}
    			break;	
				case 553223:
					cout<<"Inserisca il numero di persone in viaggio\n";
    				cin>>persone;
    				cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''\n";
    				cin>>scelta;
    			if (scelta=="si")
    			{
					do
    				{
    					if (bagagli > persone)
    					{
    						cout<<"Errore, i bagagli sono piu' delle persone,riprovare\n";
    						f=false;
    					}
    					else
    					{
    						cout<<"Le verranno aggiunti 20 euro per ogni bagaglio sul prezzo finale\n";
	    					cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
	    					cout<<"Il prezzo lordo e' di "<<55*persone*bagagli<<" Euro\n";
	    					cout<<"Le imposte sono di "<<(55*persone/100*10)<<" euro\n";
	    					costo=(55*persone*bagagli)+(55*persone*bagagli)/100*10;
	    					cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
	    					cout<<"Le auguriamo un buon viaggio\n";
	    					f=true;
						}
						cout<<"In quanti portate i bagagli in stiva?\n";
						cin>>bagagli;
					}
    				while (f==false);
    			}
    				if (scelta=="no")
    			{
    				cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
    				cout<<"Il prezzo lordo e' di "<<55*persone<<" Euro";
    				cout<<"Le imposte sono di "<<(55*persone/100*10)<<" euro\n";
    				costo=(55*persone)+(55*persone/100*10);
    				cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
    				cout<<"Le auguriamo un buon viaggio\n";
				}
    			break;
    			case 552224:
    				cout<<"Inserisca il numero di persone in viaggio\n";
    				cin>>persone;
    				cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''\n";
    				cin>>scelta;
    				if (scelta=="si")
	    			{
	    				do
	    				{
	    					if (bagagli > persone)
	    					{
	    						cout<<"Errore, i bagagli sono piu' delle persone,riprovare\n";
	    						f=false;
	    					}
	    					else
	    					{
	    						cout<<"Le verranno aggiunti 20 euro per ogni bagaglio sul prezzo finale\n";
		    					cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
		    					cout<<"Il prezzo lordo e' di "<<400*persone*bagagli<<" Euro";
		    					cout<<"Le imposte sono di "<<(400*persone/100*10)<<" euro\n";
		    					costo=(400*persone*bagagli)+(400*persone*bagagli)/100*10;
		    					cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
		    					cout<<"Le auguriamo un buon viaggio\n";
		    					f=true;
							}
							cout<<"In quanti portate i bagagli in stiva?\n";
							cin>>bagagli;
						}
	    				while (f==false);
	    			}
	    			if (scelta=="no")
	    			{
	    				cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
	    				cout<<"Il prezzo lordo e' di "<<400*persone<<" Euro";
	    				cout<<"Le imposte sono di "<<(400*persone/100*10)<<" euro\n";
	    				costo=(400*persone)+(400*persone/100*10);
	    				cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
	    				cout<<"Le auguriamo un buon viaggio\n";
					}
	    			break;
	    	}		
	system ("PAUSE");
}
