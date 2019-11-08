#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

typedef float cType;

class Circle
{
	public:
		Circle(cType radius) : r(radius) { };
		~Circle(){};
		cType Diameter() { return 2 * r; };
		cType Square() { return M_PI * r * r; };
		cType Lenght() {return 2 * M_PI * r;	};

	private:
		cType r;
};

int main()
{
	cType rad = 5.7;
	Circle c1(rad);

	std::cout << "The radius of circle is: " << rad << std::endl;
	std::cout << "The diameter of circle is: " << c1.Diameter() << std::endl;
	std::cout << "The square of circle is: " << c1.Square() << std::endl;
	std::cout << "The lenght of circle is: " << c1.Lenght() << std::endl;

	return 0;
}
