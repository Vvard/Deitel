#include <iostream>
#include <ctime>
#include <cstdlib>

void genNums(int&, int&);
void Select(char&);
void exercise(const char, int&, int&, float&);
bool isCorrect(float&, float&);
void Dialog(const char, int&, int&, float&);

int main()
{
	char sel;
	float userResult;
	int a;
	int b;
	float c;

	for (int i = 0; i < 3; i++) {
		Select(sel);
		genNums(a, b);
		exercise(sel, a, b, c);
		Dialog(sel, a, b, userResult);
		isCorrect(userResult, c);
	}

	return 0;
}

void genNums(int& n1, int& n2)
{
	srand(time(0));

	n1 = rand() % 10 + 1;
	n2 = rand() % 10 + 1;
};

void Select(char& ch)
{
	std::cout << std::endl;
	std::cout << "Enter the '*' for multiplication.\n"
			  << "Enter the '/' for devide.\n"
			  << "Enter the '+' for add.\n"
			  << "Enter the '-' for subtrack.\n"
		      << std::endl;
	std::cin >> ch;
};

void exercise(const char sel, int& n1, int& n2, float& res)
{
	switch (sel)
	{
		case '*':
			res = n1 * n2;
			break;
		case '/':
			res = (float)n1 / n2;
			break;
		case '+':
			res = n1 + n2;
			break;
		case '-':
			res = n1 - n2;
			break;
		default:
			std::cout << "You select incorrect operation!";
				break;
	}

};

bool isCorrect(float& userNum, float& result)
{
	if (userNum == result) {
		std::cout << "You're right!";
	} else {
		std::cout << "You're wrong!";
	}

};

void Dialog(const char select, int& a, int& b, float& usRes)
{
	switch (select) 
	{
		case '*':
			std::cout << "How much will be: " << a
				      << " * " << b << std::endl;
			std::cin >> usRes;
			break;
		default:
			break;
	}
};
