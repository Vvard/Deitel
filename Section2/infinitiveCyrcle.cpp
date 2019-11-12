#include <iostream> // for example
                                          // infinitive circle
int Square(int* );

int main()
{
	int num = 2;
	int * b=&num;
	int k=0;
	while (++k<11) {
		std::cout << Square(b) << std::endl;
	}
	return 0;
}

int Square(int*  a)
{
	return (*a = (*a)*( *a));
};
