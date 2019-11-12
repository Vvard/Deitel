#include <iostream>

int Time(const int&, const int&, const int&); 

int main()
{
	std::cout << Time(13, 20, 20) << std::endl;
	return 0;
}

int Time(const int& h, const int& m, const int& s)
{
	int hour;
	int elapsedTime;

	if (h < 25) {
 		hour = h % 12;
		elapsedTime = hour * 60 + m;
	} else {
		elapsedTime = 0;
	}

	return elapsedTime;
}; 
