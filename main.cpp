#include "BoxInterface.cpp"
#include "MagicBox.cpp"
#include "ToyBox.cpp"
#include "PlainBox.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

	string hi = "hi";
	ToyBox <string> tb;
	BoxInterface <string> * boxPtr1 = &tb;
	boxPtr1->setItem(hi);
	cout << boxPtr1->getItem() << endl;
	return 0;
}
