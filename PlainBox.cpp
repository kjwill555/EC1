#include "BoxInterface.cpp"

template < class ItemType >	// Indicates this is a template defi nition
// Declaration for the class PlainBox

class PlainBox : public BoxInterface <ItemType>
{
private:
	// Data fi eld
	ItemType item;

public:
	// Default constructor
	PlainBox() {};

	// Parameterized constructor
	template < class ItemType >
	PlainBox(const ItemType & theItem)
	{
		item = theItem;
	}

	// Mutator method that can change the value of the data fi eld
	void setItem(const ItemType & theItem);

	// Accessor method to get the value of the data fi eld
	ItemType getItem() const;

};

template < class ItemType >
void PlainBox < ItemType >::setItem(const ItemType & theItem)
{
	item = theItem;
}   // end setItem

template < class ItemType >
ItemType PlainBox < ItemType >::getItem() const const
{
	return item;
}