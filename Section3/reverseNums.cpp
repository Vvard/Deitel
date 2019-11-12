#include <iostream>

int ReverseNumber(const int&);

int main()
{
	int num = 1258;
	std::cout << "The number is: " << num
		      << std::endl;
	std::cout << "The reversed number is: "
		      << ReverseNumber(num) << std::endl;
	
	return 0;
}

int ReverseNumber(const int& num)
{
	int tempNum = num;
	int reverse = 0;
	int reminder;

	while(tempNum != 0) {
		reminder = tempNum % 10;
		reverse = reverse * 10 + reminder;
		tempNum /= 10;
	}

	return reverse;
};
