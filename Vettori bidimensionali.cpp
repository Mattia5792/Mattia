/*
* Realizzare un programma che permetta di registrare in una tabella bidimensionale nome e cognome dei clienti di un'azienda
*/

#include <iostream>
#include <string>

using namespace std;

string Nomi_cognomi[4][2];

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Inserisci il nome:";
        cin>>Nomi_cognomi[i][0];
        cout << "Inserisci  cognome:";
        cin >> Nomi_cognomi[i][1];
        system("cls");
    }
    for (int i = 0; i < 4; i++)
    {
        cout << Nomi_cognomi[i][0] << " ";
        cout << Nomi_cognomi [i][1] << endl;
    }
    system("PAUSE");
}
