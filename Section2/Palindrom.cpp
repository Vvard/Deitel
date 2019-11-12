#include <iostream>
#include <vector>

typedef std::vector<int> vecType;
typedef int sType;

void InputNumber(vecType& arr, sType& c)
{
	int elm;
	std::cout << "Please enter the count of numbers: " << std::endl;
	std::cin >> c;

	for (int i = 0; i < c; ++i) {
		std::cout << "Enter the number: " << std::endl;
		std::cin >> elm;
		arr.push_back(elm);
	}
	
};

void IsPalindrome(vecType& arr)
{
	int s = arr.size();	
	int digit, n, num, rev = 0;

	for (int i = 0; i < s; i++) {
		num = arr[i];
		n = num;
		digit = 0;
		rev = 0;
		do {
			digit = num % 10;
			rev = (rev * 10) + digit;
			num /= 10;
		} while ( num != 0);

		if (n == rev) {
			std::cout << "The " << n 
				<< " number is palindrome."
				<< std::endl;
		} else {
			std::cout << "The " << n
				<< " number is not palindrome."
				<< std::endl;
		}
	}
}


int main()
{
    vecType arr;
	sType size;

	InputNumber(arr, size);
	IsPalindrome(arr);

	return 0;
}
