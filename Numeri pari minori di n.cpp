#include <iostream>

using namespace std;

int main()
{
	int n;
	int i=0;
	
	cout<<"Inserisci un numero\n";
	cin>>n;
	
	while (i<n)
	{
		cout<<i<<",";
		i=i+2;
	}
	system ("PAUSE");
}
