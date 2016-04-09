#include "BoxInterface.cpp"
#include "MagicBox.cpp"
#include "ToyBox.cpp"
#include "PlainBox.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

	ToyBox <string> tb; //ToyBox object
	MagicBox <string> mb; //MagicBox object

	string input1, input2; //to handle inputs

	BoxInterface <string> * Boxptr1 = &tb; //instantiate using base class pointers
	BoxInterface <string>* Boxptr2 = &mb;

	//prompt for inputs into each box
	cout << "Enter toy to put in toy box: ";
	getline(cin, input1);
	Boxptr1->setItem(input1);

	cout << "Enter magic to put in magic box: ";
	getline(cin, input2);
	Boxptr2->setItem(input2);

	//print the inputs back out
	cout << Boxptr1->getItem() << endl;
	cout << Boxptr2->getItem() << endl;
	return 0;
}
