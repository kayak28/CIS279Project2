#include <ostream>
using namespace std;

class Deck
{
	public:
		Deck();
		Deck(const Deck& obj);
		~Deck();
		void cut();
		void shuffle();
		Card takeOne();
		void addOne(const Card& obj);
		int getCount() const;
		bool contains(const Card& obj)const;
		bool isEmpty() const;
		int largest() const;
		bool operator==(const Deck& obj)const;
		static union(const Deck& obj1, const Deck& obj2);
		friend ostream& operator<<(ostream& out, const Deck& obj);

/* data */
	private:
		int howmany;
		int size;
		Card deck[size];
		
		
	
};