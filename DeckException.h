//DeckException.h
class DeckException
{
	public:
		DeckException(string warning);
		DeckException();
		string getError();
		//~DeckException();
	private: 
		string error;
};