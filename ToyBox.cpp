#include "PlainBox.cpp"

enum Color
{
	BLACK, RED, BLUE, GREEN, YELLOW, WHITE
};

template < class ItemType >
class ToyBox :public PlainBox < ItemType >
{
private:
	Color boxColor;

public:
	ToyBox();
	ToyBox(const Color & theColor);

	ToyBox(const ItemType & theItem, const Color & theColor);

	Color getColor() const;

};

template < class ItemType > 
ToyBox < ItemType >::ToyBox()
{
	PlainBox < ItemType >();
	boxColor = BLACK;
}   // end default constructor

template < class ItemType > 
ToyBox < ItemType >::ToyBox(const Color & theColor)
{
	PlainBox < ItemType >();
	boxColor = theColor;
}   // end constructor

template < class ItemType > 
ToyBox < ItemType >::ToyBox(const ItemType & theItem, const Color & theColor) {
PlainBox <ItemType >();
PlainBox < ItemType >::setItem(theItem);
boxColor = theColor;
}   // end constructor

template < class ItemType >
Color ToyBox < ItemType >::getColor() const
{
	return boxColor;
}