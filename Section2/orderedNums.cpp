#include <iostream>

typedef int mType;

void Calculate(mType s, mType e)
{
	for (mType i = s; i <= e; i++) {
		std::cout << i;
		if (i % 5 == 0) {
			std::cout << std::endl;
		}
		else {
			std::cout << "\t";
	    }
	}
}

int main()
{
	Calculate(1, 100);	

	return 0;
}
