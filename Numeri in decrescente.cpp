#include <iostream>

using namespace std;

int main()
{
	int N;
	
	cout<<"Inserisci N\n";
	cin>>N;
	N=N-2;
	while (N>0)
	{
		cout<<N<<endl;
		N=N-2;
	}
	system ("PAUSE");
}
