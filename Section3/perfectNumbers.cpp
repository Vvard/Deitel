#include <iostream>
#include <cstdlib>
#include <ctime>

void genNumbers(int&, int []);
bool isPerfectNum(const int&);
void getMultipliers(const int&, int&);

int main()
{
	int size = 3;
	int Nums[size];

	genNumbers(size, Nums);

	for (int i = 0; i < size; i++) {
		std::cout << Nums[i] << " number is perfect? "
	              << isPerfectNum(Nums[i]) << std::endl;
	}

	return 0;
}

void genNumbers(int& s, int arr[])
{
	srand(time(0));

	for (int i = 0; i < s; i++) {
		arr[i] = rand() % 50 + 1;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
};

void getMultipliers(const int& num, int& sum)
{
	int i = 1;
	sum = 0;

	while (i < num) {
		if (num % i == 0) {
			sum += i;
		}
			i++;
	}
	
};

bool isPerfectNum(const int& num)
{
	int sum;
	getMultipliers(num, sum);

	if (sum == num) {
		return true;
	} else {
		return false;
	}
};
