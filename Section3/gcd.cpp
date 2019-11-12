#include <iostream>

int gcd(int, int);

int main()
{
	int a = 40;
	int b = 50;

	std::cout << "The gcd of " << a
          	  << " and " << b
			  << " is: " << gcd(a, b);
	return 0;
}

int gcd(int a, int b)
{
	if(b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
};
