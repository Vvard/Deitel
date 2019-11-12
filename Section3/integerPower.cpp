#include <iostream>
#include <cmath>
#include <vector>

int integerPower(const int&, const int&);
double Hypotenuse(const double&, const double&);
void printRec(const int&, const char);
void printSepNum(const unsigned int&);

int main()
{
	std::cout << integerPower(2, 5) << std::endl;
	std::cout << Hypotenuse(3, 4) << std::endl;
	std::cout << std::endl;
	printRec(4, '#');
	std::cout << std::endl;
	printSepNum(28745);
	std::cout << std::endl;

	return 0;
}

int integerPower(const int& base, const int& exp)
{
	int result = 1;

	if(exp > 0 && exp != 0) {
		for (int i = 0; i < exp; i++) {
			result *= base;
		}
	}

	return result;
};

double Hypotenuse(const double& a, const double& b)
{
	double c = sqrt(a * a + b * b);
	return c;
};

void printRec(const int& side, const char ch)
{
	for (int i = 0; i < side; i++) {
		for (int j = 0; j < side; j++) {
			std::cout << ch << " ";
		}
		std::cout << std::endl;
	}
};

void printSepNum(const unsigned int& num)
{
	int tempnum;
	tempnum = num;
	int count = 0;
	std::vector<int> arr;

	while (tempnum > 0) {
		arr.push_back(tempnum % 10);
		tempnum /= 10;
		count++;
	}

	for (auto it = arr.end() - 1; it != arr.begin() - 1; --it) {
		std::cout << " " << *it;
	}
	std::cout << std::endl;
};
