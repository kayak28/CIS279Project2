#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
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
char Card::getSuit()
{
	return suit;
}
char Card::getRank()
{
	return rank;
}
bool Card::operator==(const Card& obj)const 
{
	bool identical = false;
	if(strcmp(suit, obj.suit))
	{
		if(strcmp(rank,obj.rank))
		{
			identical = true;
		}
	}
	return identical;
}
ostream& operator<<(ostream& out, const Card& obj)
{
	out << "suit is " << obj.suit << "\n";
	out << "rank is " << obj.rank << "\n";
	return out;
}


