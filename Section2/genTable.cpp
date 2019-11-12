#include <iostream>
#include <iomanip>

void printHeader()
{
	std::cout << "N " << "\t" <<
			  "10*N" << "\t" <<
			  "100*N" << "\t" <<
			  "1000*N" << std::endl;
};

void displayNums(int& s)
{
	for (int i = 1; i <= s; i++) {
		int n = 1;
		for (int j = 1; j <= s - 1; j++) {
			std::cout << i * n << "\t"; 
			n *= 10;
		}
		std::cout << std::endl;
	}
};

int main()
{
 	int size = 5;

	printHeader();
	displayNums(size);

	return 0;
}
