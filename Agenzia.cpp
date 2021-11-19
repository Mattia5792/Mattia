#include <iostream>
#include <string>

using namespace std;

int main()
{
	int codice;
	bool f=false;
	float costi;
	float bagagli;
	float persone;
	string scelta;
	float costo;
	
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
    	if (codice != 554226 && codice != 553223 && codice != 552224)
    	{
    		cout<<"Codice errato,riprovare\n";
    		f=false;
		}
		else
		{
			f=true;
		}
    }
    while(f == false);
    
    switch (codice)
    {
    	case 554226:
   		cout<<"Inserisca il numero di persone in viaggio\n";
   		cin>>persone;
   		cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''(Senza lettere maiuscole)\n";
 		cin>>scelta;
    	if (scelta != "si" && scelta != "no")
		{
			do
			{
				cout<<"Carattere non riconosciuto,riprovare\n";
				f=false;
				cout<<"Inserisca di nuovo la sua scelta\n";
				cin>>scelta;
				if (scelta == "si" or scelta == "no")
				{
					f=true;
				}
				else
				{
					f=false;
				}
			}
			while (f==false);
		}
    	if (scelta == "si")
    	{
    		do
    		{
    			cout<<"In quanti portate i bagagli in stiva?\n";
				cin>>bagagli;
    			if (bagagli > persone)
    			{
    				cout<<"Errore, i bagagli sono piu' delle persone,riprovare\n";
    				f=false;
    			}
    			else
    			{
    				cout<<"Le verranno aggiunti 20 euro per ogni bagaglio sul prezzo finale\n";
	    			cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
	    			cout<<"Il prezzo lordo e' di "<<30*persone+20*bagagli<<" Euro\n";
	    			cout<<"Le imposte sono di "<<(30*persone+20*bagagli)/100*10<<" euro\n";
	    			costo=(30*persone+20*bagagli)+(30*persone+20*bagagli)/100*10;
	    			cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
	    			if (costo > 500)
			   		{
			    		cout<<"Sta ordinando a novembre?Digiti ''si'' o ''no''(Senza lettere maiuscole)\n";
			    		cin>>scelta;
			   			if (scelta == "si")
			    		{
			    			cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
			    			cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
			    			costo=costo-(costo/100*10);
			    			cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
						}
						if (scelta == "no")
						{
							cout<<"Recarsi per il check-in al gate 8\n";
			    			cout<<"Le auguriamo un buon viaggio\n";
			    			f=true;
			    		}
					}
	    			f=true;
				}
			}
    		while (f == false);
    	}
    	if (scelta == "no")
    	{
    		cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
    		cout<<"Il prezzo lordo e' di "<<30*persone+20*bagagli<<" Euro";
    		cout<<"Le imposte sono di "<<(30*persone+20*bagagli)/100*10<<" euro\n";
    		costo=(30*persone)+(30*persone+20*bagagli)/100*10;
    		cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
    		if (costo > 500)
			{
			  	cout<<"Sta ordinando a novembre?Digiti ''si'' o ''no''(Senza lettere maiuscole)\n";
			    cin>>scelta;
			    if (scelta == "si")
			    {
			   		cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
			   		cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
			   		costo=costo-(costo/100*10);
			   		cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
				}
				if (scelta == "no")
				{
					cout<<"Recarsi per il check-in al gate 8\n";
			    	cout<<"Le auguriamo un buon viaggio\n";
			    	f=true;
			    }
			}
		}
		if (scelta != "si" && scelta != "no")
		{
			do
			{
				cout<<"Carattere non riconosciuto,riprovare\n";
				f=false;
			}
			while (f == false);
		}
    	break;	
		case 553223:
		cout<<"Inserisca il numero di persone in viaggio\n";
    	cin>>persone;
    	cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''(Senza lettere maiuscole)\n";
    	cin>>scelta;
    	if (scelta != "si" && scelta != "no")
		{
			do
				{
					cout<<"Carattere non riconosciuto,riprovare\n";
					f=false;
					cout<<"Inserisca di nuovo la sua scelta\n";
					cin>>scelta;
					if (scelta == "si" or scelta == "no")
					{
						f=true;
					}
					else
					{
						f=false;
					}
				}
				while (f==false);
		}
    	if (scelta=="si")
	    {
			do
	    	{
	    		cout<<"In quanti portate i bagagli in stiva?\n";
				cin>>bagagli;
	    		if (bagagli > persone)
		    	{
		    		cout<<"Errore, i bagagli sono piu' delle persone,riprovare\n";
		    		f=false;
		    	}
		    	else
		    	{
		    		cout<<"Le verranno aggiunti 20 euro per ogni bagaglio sul prezzo finale\n";
			    	cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
			    	cout<<"Il prezzo lordo e' di "<<(55*persone)+(20*bagagli)<<" Euro\n";
			    	cout<<"Le imposte sono di "<<(55*persone+20*bagagli)/100*10<<" euro\n";
			    	costo=(55*persone)+(20*bagagli)+(55*persone*bagagli)/100*10;
			    	cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
				}
			}
		    while (f == false);
	   	}
	    if (scelta == "no")
	    {
		    cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
		    cout<<"Il prezzo lordo e' di "<<(55*persone+20*bagagli)<<" Euro";
		    cout<<"Le imposte sono di "<<(55*persone+20*bagagli)/100*10<<" euro\n";
			costo=(55*persone+20*bagagli)/100*10+(55*persone/100*10);
			cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
		    cout<<"Le auguriamo un buon viaggio\n"; if (costo > 500)
			{
			    cout<<"Sta ordinando a novembre?Digiti ''si'' o ''no''(Senza lettere maiuscole)\n";
			    cin>>scelta;
			    if (scelta == "si")
			    {
			    	cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
			    	cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
			    	costo=costo-(costo/100*10);
			    	cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
			    	cout<<"Le auguriamo un buon viaggio\n";
			    	f=true;
				}
				if (scelta == "no")
				{
			    	cout<<"Le auguriamo un buon viaggio\n";
			    	f=true;
			    }
			    if (scelta != "si" && scelta != "no")
				{
					do
					{
						cout<<"Carattere non riconosciuto,riprovare\n";
						f=false;
						cout<<"Inserisca di nuovo la sua scelta\n";
						cin>>scelta;
						if (scelta == "si")
						{
							cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
					    	cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
					    	costo=costo-(costo/100*10);
					    	cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
					    	cout<<"Le auguriamo un buon viaggio\n";
							f=true;
						}
						else
						{
						f=false;
						}
						if (scelta == "no")
						{
							cout<<"Le auguriamo un buon viaggio\n";
			    			f=true;
						}
					}
					while (f == false);
				}
			}
		    
		}
	    break;
    	case 552224:
    	cout<<"Inserisca il numero di persone in viaggio\n";
    	cin>>persone;
    	cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''(Senza lettere maiuscole)\n";
    	cin>>scelta;
    	if (scelta != "si" && scelta != "no")
		{
			do
			{
				cout<<"Carattere non riconosciuto,riprovare\n";
				f=false;
				cout<<"Inserisca di nuovo la sua scelta\n";
				cin>>scelta;
				if (scelta == "si" or scelta == "no")
				{
					f=true;
				}
				else
				{
					f=false;
				}
			}
			while (f == false);
		}
	    if (scelta == "si")
		{
		    do
		    {
		    	cout<<"In quanti portate i bagagli in stiva?\n";
				cin>>bagagli;
		    	if (bagagli > persone)
		    	{
		    		cout<<"Errore, i bagagli sono piu' delle persone,riprovare\n";
		    		f=false;
		    	}
		    	else
		    	{
		    		cout<<"Le verranno aggiunti 50 euro per ogni bagaglio sul prezzo finale\n";
			    	cout<<"Essendo una destinazione intercontinentale le imposte di imbarco saranno del 17%\n";
			    	cout<<"Il prezzo lordo e' di "<<400*persone+50*bagagli<<" Euro\n";
			    	cout<<"Le imposte sono di "<<(400*persone+50*bagagli)/100*17<<" euro\n";
			    	costo=(400*persone+50*bagagli)+(400*persone+50*bagagli)/100*17;
			    	cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
			    	if (costo > 500)
			    	{
			    		cout<<"Sta ordinando a novembre?Digiti ''si'' o ''no''(Senza lettere maiuscole)\n";
			    		cin>>scelta;
			    		if (scelta == "si")
			    		{
			    			cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
			    			cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
			    			costo=costo-(costo/100*10);
			    			cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
						}
						if (scelta == "no")
						{
							cout<<"Recarsi per il check-in al gate 8\n";
			    			cout<<"Le auguriamo un buon viaggio\n";
			    			f=true;
			    		}
					}
					if (scelta != "si" && scelta != "no")
					{
						do
						{
							cout<<"Carattere non riconosciuto,riprovare\n";
							f=false;
							cout<<"Inserisca di nuovo la sua scelta\n";
							cin>>scelta;
							if (scelta == "si")
							{
								cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
						    	cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
						    	costo=costo-(costo/100*10);
						    	cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
						    	cout<<"Le auguriamo un buon viaggio\n";
								f=true;
							}
							if (scelta == "no")
							{
								cout<<"Le auguriamo un buon viaggio\n";
				    			f=true;
							}
						}
						while (f == false);
					}
				}
			}
		    while (f == false);
		}
		if (scelta == "no")
		{
		    cout<<"Essendo una destinazione intercontinentale le imposte di imbarco saranno del 17%\n";
		    cout<<"Il prezzo lordo e' di "<<(400*persone)+(50*bagagli)<<" Euro\n";
		    cout<<"Le imposte sono di "<<(400*persone+50*bagagli)/100*10<<" euro\n";
		    costo=(400*persone)+(50*bagagli)+(400*persone+50*bagagli)/100*10;
		    cout<<"Il prezzo finale e' di "<<costo<<" euro\n";
		    if (costo > 500)
			{
			    cout<<"Sta ordinando a novembre?Digiti ''si'' o ''no''(Senza lettere maiuscole)\n";
			    cin>>scelta;
			    if (scelta == "si")
			    {
			    	cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
			    	cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
			    	costo=costo-(costo/100*10);
			    	cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
			    	cout<<"Le auguriamo un buon viaggio\n";
			    	f=true;
				}
				if (scelta == "no")
				{
			    	cout<<"Le auguriamo un buon viaggio\n";
			    	f=true;
			    }
			    if (scelta != "si" && scelta != "no")
				{
					do
					{
						cout<<"Carattere non riconosciuto,riprovare\n";
						f=false;
						cout<<"Inserisca di nuovo la sua scelta\n";
						cin>>scelta;
						if (scelta == "si")
						{
							cout<<"Ha diritto al nostro sconto promozionale autunnale del 10%!!!\n";
					    	cout<<"Lo sconto e' di "<<costo/100*10<<" euro\n";
					    	costo=costo-(costo/100*10);
					    	cout<<"Il prezzo scontato e' di "<<costo<<" euro\n";
					    	cout<<"Le auguriamo un buon viaggio\n";
							f=true;
						}
						else
						{
						f=false;
						}
						if (scelta == "no")
						{
							cout<<"Le auguriamo un buon viaggio\n";
			    			f=true;
						}
					}
					while (f == false);
				}
			}
		}
		break;
	}
	system ("PAUSE");
}
