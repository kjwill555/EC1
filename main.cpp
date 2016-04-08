#include "BoxInterface.cpp"
#include "MagicBox.cpp"
#include "ToyBox.cpp"
#include "PlainBox.cpp"
#include <iostream>

using namespace std;

int main() {

	string hi = "hi";
	ToyBox <string> tb(hi, BLACK);
	
	cout << tb.getColor();
	return 0;
}