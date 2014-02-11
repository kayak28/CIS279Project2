#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Card.h"
using namespace std;

Card::Card()
{
	suit = 'H';
	rank = 'A';
}
Card::Card(char mark, char num)
{
	suit = mark;
	rank = num;
}
char Card::getSuit()const
{
	return suit;
}
char Card::getRank()const
{
	return rank;
}
bool Card::operator==(const Card& obj)
{
	bool identical = false;
	if(strcmp(suit, obj.suit) ==0)
	{
		if(strcmp(rank,obj.rank)==0)
		{
			identical = true;
		}
	}
	else
	{
		return identical;
	}
	return identical;
}
ostream& operator<<(ostream& out, const Card& obj)
{
	out << "suit is " << obj.suit << "\n";
	out << "rank is " << obj.rank << "\n";
	return out;
}


