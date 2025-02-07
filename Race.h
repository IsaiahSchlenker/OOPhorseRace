#include <iostream>
#include "Horse.h"

#ifndef Race_H_Exists
#define Race_H_Exists

class Race{
	private:
		Horse horses[5];
	public:
		Race();
		void run();
};//end Race



#endif
