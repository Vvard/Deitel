#include <iostream>
#include <iomanip>

typedef float mType;

mType square(int&);
mType cube(int&);
void printData(int&);

int main()
{
	int size = 11;

	printData(size);	

	return 0;
}

mType square(int& a)
{
	return a * a;
};

mType cube(int& b)
{
	return b * b * b;
};

void printData(int& s)
{
	std::cout << std::setw(10) << "Number"
		      << std::setw(10) << "Square"
			  << std::setw(10) << "Cube"
			  << std::endl;

	for (int i = 0; i < s; ++i) {
		std::cout << std::setw(10) << i
			      << std::setw(10) << square(i)
				  << std::setw(10) << cube(i)
				  << std::endl;
	}
};
