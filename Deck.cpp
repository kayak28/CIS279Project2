//Deck.cpp
#include "Deck.h"
#include <string>
#include <iostream>
#include <stdlib.h> // srand, rand
#include <stdio.h> // printf, scanf, puts, null
#include <time.h> //time
using namespace std;

Deck::Deck()
{
	size = 53;
	howmany = 53;
	deck[size];
	char suit;
	for (int i = 0; i < 13; ++i)
	{
		if(i = 0 || i = 11 || i = 12|| )
		{
			if(i = 0)
			{
				deck[i] = new Card('H', 'A');
			}
			else if(i = 11)
			{
				deck[i] = new Card('H','J');
			}
			else
			{
				deck[i] = new Card('H','K');
			}
			
 		}
 		itoa(i, suit, 10);
		deck[i] = new Card('H',suit);
	}
	for (int i = 0; i < 13; ++i)
	{
		if(i = 0 || i = 11 || i = 12|| )
		{
			if(i = 0)
			{
				deck[i] = new Card('D', 'A');
			}
			else if(i = 11)
			{
				deck[i] = new Card('D','J');
			}
			else
			{
				deck[i] = new Card('D','K');
			}
			
 		}
 		itoa(i, suit, 10);
		deck[i] = new Card('D',suit);
	}
	for (int i = 0; i < 13; ++i)
	{
		if(i = 0 || i = 11 || i = 12|| )
		{
			if(i = 0)
			{
				deck[i] = new Card('S', 'A');
			}
			else if(i = 11)
			{
				deck[i] = new Card('S','J');
			}
			else
			{
				deck[i] = new Card('S','K');
			}
			
 		}
 		itoa(i, suit, 10);
		deck[i] = new Card('S',suit);
	}
	for (int i = 0; i < 13; ++i)
	{
		if(i = 0 || i = 11 || i = 12|| )
		{
			if(i = 0)
			{
				deck[i] = new Card('C', 'A');
			}
			else if(i = 11)
			{
				deck[i] = new Card('C','J');
			}
			else
			{
				deck[i] = new Card('C','K');
			}
			
 		}
 		itoa(i, suit, 10);
		deck[i] = new Card('C',suit);
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
	/*basic idea
		int a = 4;
		int b = 6; switch them 

		int c = a;
		a = b;
		b = c;  
	*/
	int half_size = (int) size / 2;
	Card temp[half_size];
	for (int i = 0; i < half_size; ++i)
	{
		temp[i] = deck[i];
		deck[i] = deck[half_size + i];
		deck[half_size + i] = deck[i];
	}
}
void Deck::shuffle()
{
	srand(time(NULL));//initialize rand seed
	int index1 = rand % howmany;
	int index2 = rand % howmany;
	Card temp = deck[index1];
	deck[index1] = deck[index2];
	deck[index2] = temp;
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
		for (int i = 0; i < howmany; ++i
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