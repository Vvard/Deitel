#include <iostream> //continue
#include <iomanip>

void printBoard(const char, int);

int main()
{
	const char smb = '*';
	int size = 8;

	printBoard(smb, size);

	return 0;
}

void printBoard(const char sym, int s)
{
	int initValue;

	for (int i = 0; i < s; ++i) {
		if ( i % 2 == 0) {
			initValue = 0;
		} else {
			initValue = 1;
		}

		for (int j = initValue; j < 2 * s + initValue; ++j) {
			if (j % 2 == 0) {
				std::cout << sym;
			} else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
};
