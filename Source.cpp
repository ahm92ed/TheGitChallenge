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
	return 0;
}