#include <iostream>
using namespace std;

void beeb (string n)
{
	cout<<"Welcome "<< n <<endl;
	cout << '\a';
}

void show_image()
{
	//Display image 
}
int main()
{
	cout<<"Welcome :)"<<endl;
	cout<<"What is your name?" << endl;
	string Name ; 
	cin>> Name;
	cout<<"Done \n";
	cout<<"How old are you?" << endl;
	int age ;
	cin>>age;
	return 0;
}