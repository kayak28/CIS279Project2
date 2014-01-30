//card.h
#include <ostream>
using namespace std;
class Card
{
	public: 
		Card();
		Card(char suit, char rank);
		bool operator==(const Card& obj) const;
		friend ostream& operator<<(ostream& out, const Card& obj);
	
	private:
		char suit;
		char rank;
		//char[] suit = {'H','D','S','C'};
		//char[] rank = {}
}