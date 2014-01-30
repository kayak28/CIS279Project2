//Deck.cpp
#include "Deck.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

Deck::Deck()
{
	size = 53;
	howmany = 53;
	deck[size];
	for (int i = 0; i < howmany; ++i)
	{
		deck[i] = new Card('','');
	}
}
Deck::Deck(const Deck& obj)
{

}
void Deck::cut()
{

}
void Deck::shuffle()
{

}
Card Deck::takeOne()
{
	Card first;
	first = deck[0];
	for (int i = 0; i < howmany; ++i)
	{
		deck[i] = deck[i+1];
	}
	howmany--;
	return first;

}
void Deck::addOne(const Card& obj)
{

}
int Deck::getCount() const
{

}
bool Deck::contains(const Card& obj)const
{

}
bool Deck::isEmpty() const
{
	bool empty = false;
	if(howmany == 0)
	{
		empty = true;
	}
	else
	{
		empty = false;
	}
	return empty;
}
int Deck::largest() const
{

}
bool Deck::operator==(const Deck& obj)
{

}
Deck Deck::union(const Deck& obj1, const Deck& obj2)
{

}
ostream& operator<<(ostream& out, const Deck& obj)
{
	out << "----Deck Info----\n";
	for (int i = 0; i < howmany; ++i)
	{
		out << "suit = " << obj.deck[i].getSuit() << "\n";
		out << "rank = " << obj.deck[i].getRank() << "\n\n";
	}
	out << "total number of cards in deck = " << obj.howmany;
	return out;
}