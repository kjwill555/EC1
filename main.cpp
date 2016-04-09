#include "BoxInterface.cpp"
#include "MagicBox.cpp"
#include "ToyBox.cpp"
#include "PlainBox.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

    ToyBox <string> tb;
    MagicBox <string> mb;
    
    string input1, input2;
    
    BoxInterface <string> * Boxptr1 = &tb;
    BoxInterface <string>* Boxptr2 =&mb;
    
    cout <<"Enter toy to put in toy box: ";
    cin >> input1;
    Boxptr1 ->setItem(input1);
    
    cout <<"Enter magic to put in magic box: ";
    cin >> input2;
    Boxptr2 ->setItem(input2);
    
    cout << Boxptr1->getItem() << endl;
    cout << Boxptr2->getItem() << endl;
	return 0;
}
