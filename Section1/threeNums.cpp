#include <iostream>

typedef int mType;

void InputData(mType&, mType&, mType&);
mType AddNums(const mType&, const mType&, const mType&);
mType MeanNums(const mType&, const mType&, const mType&);
mType MulNums(const mType&, const mType&, const mType&);
mType Greater(const mType&, const mType&, const mType&);
mType Lesser(const mType&, const mType&, const mType&);

mType main()
{
	mType a, b, c;

	InputData(a, b, c);

	std::cout << "Sum of the numbers is equal: "
		      << AddNums(a, b, c) << std::endl;

	std::cout << "Maltiplication of numbers is equal: "
		      << MulNums(a, b, c) << std::endl;
	
	std::cout << "Mean of the numbers is equal: "
		      << MeanNums(a, b, c) << std::endl;

	std::cout << "The greater of given numbers is: "
		      << Greater(a, b, c) << std::endl;

	std::cout << "The lesser of given numbers is: "
		      << Lesser(a, b, c) << std::endl;

	return 0;
}

void InputData(mType& n1, mType& n2, mType& n3)
{
	std::cout << "Enter the 3 different numbers: " << std::endl;
	std::cin >> n1 >> n2 >> n3;
};

mType AddNums(const mType& a, const mType& b, const mType& c)
{
	return a + b + c;
};

mType MeanNums(const mType& a, const mType& b, const mType& c)
{
	return (a + b + c) / 3; 
};

mType MulNums(const mType& a, const mType& b, const mType& c)
{
	return a * b * c;
};

mType Greater(const mType& a, const mType& b, const mType& c)
{
	if (a > b && a > c) { return a;	}
	if (b > a && b > c) { return b; }
	if (c > a && c > b) { return c;	}
};

mType Lesser(const mType& a, const mType& b, const mType& c)
{
	if (a < b && a < c) { return a;	}
	if (b < a && b < c) { return b; }
	if (c < a && c < b) { return c;	}

};
