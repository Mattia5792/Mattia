#include <iostream>
#include <string>

using namespace std;

int main()
{
	int codice;
	bool f=false;
	float costi;
	float bagagli;
	int persone;
	string scelta;
	
	cout<<"--------------------------------"<<endl;
    cout<<"--     RAPISARDI AIRLINES     --"<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    
    cout<<"Benvenuto nel programma di prenotazione dell'agenzia di viaggi ''Rapisardi Airlines''\n";
    cout<<"Il piano tariffario per le destinazioni e' il seguente e le destinazioni dei viaggi sono:\n";
    cout<<"Catania-Roma (30 euro) (554226),Catania-Praga (55 euro) (553223),Catania-New York (400 euro) (552224)\n";
    
    do
    {
    	if (codice!=554226 && codice!=553223 && codice!=552224)
    	{
    		cout<<"Codice errato,riprovare\n";
    		f=false;
		}
		else
		{
			f=true;
		}
		cout<<"Inserisca il codice della tariffa scelta\n";
    	cin>>codice;
    }
    while(f==false);
    
    do
    {
    	switch(codice)
    	{
    		case 554226:
    			cout<<"Inserisca il numero di persone in viaggio\n";
    			cin>>persone;
    			cout<<"Deve mettere dei bagagli in stiva?Scriva ''si'' o ''no''\n";
    			cin>>scelta;
    			if (scelta=="si")
    			{
    				cout<<"Le verranno aggiunti 20 euro sul prezzo finale\n";
    				cout<<"Essendo una destinazione europea le imposte di imbarco saranno del 10%\n";
    				cout<<"Il prezzo lordo e' di "<<50*persone<<" Euro";
    				cout<<"Con le imposte e' di "<<(50*persone)+(50*persone/100*10);
    			}
    				else
    				{
    				
					}
    				
				}
    			break;
		}
	}	
	system ("PAUSE");
}
