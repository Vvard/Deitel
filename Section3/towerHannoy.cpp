#include <iostream> // continue

void towerHanoi(int, int, int, int);

int main()
{
	int n = 4;
	towerHanoi(n, 1, 2, 3);

	return 0;
}

void towerHanoi(int n, int a_rod, int temp_rod, int b_rod)
{
	if (n == 1) {
		std::cout << a_rod << " -> " << b_rod << std::endl;
		return;
	}
	towerHanoi(n - 1, b_rod, temp_rod, a_rod);
	std::cout << b_rod << " -> " << a_rod << std::endl;
	towerHanoi(n - 1, temp_rod, a_rod, b_rod);

};
