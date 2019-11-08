#include <iostream> //continue
#include <iomanip>
#include <cstdio>
#include <cmath>

void printRectangle(const char, const int&);
void printEllipse(const char, const int&, const int&);
void printArrow(const char, const int&);
void printRombus(const char, const int&);

int main()
{
	const char symbol = '*';
	int lenght = 12;
	int widht = 9;

	printRectangle(symbol, lenght);
	printEllipse(symbol, lenght, widht);
//	printArrow(symbol, lenght);
	//printRombus(symbol, lenght);

	return 0;
}

void printRectangle(const char sym, const int& l)
{
	if (l < 3) {
		std::cout << "Enter greater than or equal to 3 sizes to draw a rectangle.";
	} else {
		for (int i = 0; i < l; ++i) {
			if (i == 0 || i == l - 1) {
				for (int j = 0; j < l; ++j) {
					std::cout << sym; 
				} 
				std::cout << std::endl;
			} else {
				std::cout << sym << std::setw(l - 1) << sym << std::endl; 
			}
		}
		std::cout << std::endl;
	}
};

void printEllipse(const char smb, const int& s, const int& w)
{
	int a = std::ceil((float) s / 2);
	int b = std::floor((float) w / 2);
	int c = std::sqrt(a * a - b * b);
	
	for (int i = 0; i < s; ++i) {
		if (i == 0 || i == s - 1) {
			std::cout << std::setw(c + 1); 
			for (int j = 0; j < c; ++j) {
				std::cout << smb;
			}
			std::cout << std::endl;
		} else {
			if (c - i > 0 && (c - i) != 1) {
				std::cout << std::setw(c - i) << smb << std::setw(s - i)
				     	  << smb << std::endl;
			} else {
				if (s - i < c && s - i != 1) {
					std::cout << std::setw(s - i) << smb << std::setw(s - (i - c) + 1)
						      << smb << std::endl;
				} else {
					std::cout << smb << std::setw(s - 1) << smb << std::endl;
				}
			}
		}
	}

//	int basis = s / 3;
//	int focus; 
//
//	for (int i = 0; i < s; ++i) {
//		if (i == 0 || i == s - 1) {
//			std::cout << std::setw(basis);
//			for (int j = 0; j < basis; ++j) {
//				std::cout << smb;
//			}
//			std::cout << std::endl;
//		} else {
//			std::cout << std::endl; //later add formula
//		}
//	}
};

void printArrow(const char s, const int& size)
{
	int head = size / 3;

	for (int i = 0; i < head; ++i) {
	//	if (i == 0) {
	//		std::cout << std::setw(size / 2)
	//			      << s << std::endl; 
	//	} else {
			for (int j = i; j < head - i; ++j) {
				std::cout << std::setw(j + head)
					  << s << std::endl;
			}
	//	}
	}
//	std::cout << std::setw(size / 2) << s;
	
};

void printRombus(const char symbol, const int& size)
{
	float m = ceil( (float) size / 2 );

	for (int i = 0; i < size; ++i) {
		if (i < m) {
			std::cout << std::setw(m - i) << symbol << std::endl;
		} else {
			std::cout << std::setw(i - m + 2) << symbol << std::endl;
		}
	}
};
