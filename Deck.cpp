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
		if(i<13)
		{
			deck[i] = new Card('S','R');
		}
		else if(i < (13*2))
		{	
			*/????? 
		}
		else if(i < (13*3))
		{

		}
		else
		{

		}
	}
		
}
Deck::Deck(const Deck& obj)
{
	size = obj.size;
	howmany = obj.howmany;
	deck[size];
	for (int i = 0; i < howmany; ++i)
	{
		deck[i] = obj.deck[i];
	}
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
	if(isFull()||contains())
	{
		if(isFull())
		{
			printf("This deck is full\n");
		}
		else if(contains())
		{
			throw new DeckException("The given Card already exists");
		}
		else
		{
			howmany++;
			deck[howmany] = obj;
		}
	}
}
int Deck::getCount() const
{
	return howmany;
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
	return empty;
}
bool Deck::isFull()
{
	bool full = false;
	if(howmany == size)
	{
		full = true;
	}
	return full;
}
int Deck::largest() const
{

}
bool Deck::operator==(const Deck& obj)
{
	bool equality = false;
	if(howmany == obj.howmany)
	{
		for (int i = 0; i < howmany; ++i)
		{
			if()
		}
	}
	else
	{
		return equality;
	}


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