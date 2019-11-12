#include <iostream>

void InputData(char carr[])
{
	std::cout << "Enter the count of sequence, than numbers of sequence: "
		      << std::endl;
	std::cin >> carr;
};

void convert(char c[], int arr[], int& s)
{
	int i = 0;
	s = c[0];

	for (int i = 0; i < s; i++) {
		std::cout << c[i];
	//	arr[i] = c[i];
	}
	std::cout << s << std::endl;
};

void print(int arr[], int& s)
{
	for (int i = 0; i < s; i++) {
		std::cout << arr[i] << std::endl;
	}
};

int main()
{
	int size;
	int arr[size];
	char seq[100];

	InputData(seq);
	convert(seq, arr, size);
	//print(arr, size);

	return 0;
}
