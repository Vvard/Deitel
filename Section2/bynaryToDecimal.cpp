#include <iostream> //continue
#include <vector>
#include <cmath>
#include <string>

typedef std::vector<int> vType;
typedef int sType;

void InputNum(vType& arr)
{
	int elm;

	std::cout << "Enter the binary number, please." << std::endl;

	do {
		std::cin >> elm;
		arr.push_back(elm);
	} while(elm == EOF);
	
	int s = arr.size();
	std::cout << s << std::endl;
	for (int i = 0; i < s; ++i) {
		std::cout << arr[i] << " ";
	}
};

void bynaryToDecimal(vType& bNum, int& dNum) 
{
	sType s = bNum.size();
	dNum = 0;

	for (int i = 0; i < s; ++i) {
	dNum += bNum[s - i - 1] * std::pow(2, i);
	}
};

int main()
{
	vType vec; //= { 1, 0, 1, 1 };
	int decNum = 0;

	InputNum(vec);

	//bynaryToDecimal(vec, decNum); 

//	std::cout << decNum << std::endl;

	return 0;
}
