//DeckException.cpp
#include <iostream>
#include <string>
#include "DeckException.h"

using namespace std;

DeckException::DeckException(string warning)
{
	error = warning;
}
DeckException::DeckException()
{
	error = "Deck Exception";
}
string DeckException::getError()
{
	return error;
}