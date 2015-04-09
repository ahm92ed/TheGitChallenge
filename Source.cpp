#include <iostream>
using namespace std;

void beeb (string n)
{
	cout<<"Welcome "<< n <<endl;
	cout << '\a';
}
int main()
{
	cout<<"Welcome :)"<<endl;
	cout<<"What is your name?" << endl;
	string Name ; 
	cin>> Name;
	cout<<"Done \n";
	return 0;
}