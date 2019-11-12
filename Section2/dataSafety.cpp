#include <iostream> //continue tommorow

void genNum(int [], int&);
void encEachDigit(int&);
void replace(int [], int&);
void printData(int [], const int&);
void decoder(int [], int&);
void decEachDig(int&);
void swap(int&, int&);

int main()
{
	int size;
	int array[size];

	genNum(array, size);	
	replace(array, size);
	printData(array, size);

	return 0;
}

void genNum(int arr[], int& s)
{
	std::cout << "Enter the count of number:" << std::endl;
	std::cin >> s;

	for (int i = 0; i < s; ++i) {
		std::cout << "Enter the " << i + 1 << " digit" << std::endl;
		std::cin >> arr[i];
	}
};

void encEachDigit(int& dig)
{
	dig += 7;
	dig %= 10;
//	if (dig > 10) {
//		dig %= 10;
//	} else {
//		dig = 0;
//	}
};

void printData(int arr[], const int& s)
{
	for (int i = 0; i < s; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
};

void replace(int arr[], int& s)
{
	for (int i = 0; i < s; ++i) {
		encEachDigit(arr[i]);
	}

	for (int i = 0; i < s / 2; ++i) {
		swap(arr[i], arr[s - 1 - i]);
	}
};

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
};

void decoder(int arr[], int s)
{
	for (int i = 0; i < s / 2; ++i) {
		swap(arr[i], arr[s - 1 - i]);
	}
	
};

void decEachDig(int& d)
{
	d *= 10;
	d -= 7;
};
