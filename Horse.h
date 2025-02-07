#include <iostream>

#ifndef Horse_H_Exists
#define Horse_H_Exists

class Horse{
	private:
		int position;
		int id;
		int trackLength;
	public:
		Horse();
		void init(int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};//end Horse
#endif
