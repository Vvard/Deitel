#include <iostream>

template <class T>
void InputData(T&, T&, T&);

template <class T>
T AddNums(const T&, const T&, const T&);

template <class T>
T MeanNums(const T&, const T&, const T&);

template <class T>
T MulNums(const T&, const T&, const T&);

template <class T>
T Greater(const T&, const T&, const T&);

template <class T>
T Lesser(const T&, const T&, const T&);

int main()
{
	float a, b, c;

	InputData<float>(a, b, c);

	std::cout << "Sum of the numbers is equal: "
		      << AddNums<float>(a, b, c) << std::endl;

	std::cout << "Maltiplication of numbers is equal: "
		      << MulNums<float>(a, b, c) << std::endl;
	
	std::cout << "Mean of the numbers is equal: "
		      << MeanNums<float>(a, b, c) << std::endl;

	std::cout << "The greater of given numbers is: "
		      << Greater<float>(a, b, c) << std::endl;

	std::cout << "The lesser of given numbers is: "
		      << Lesser<float>(a, b, c) << std::endl;

	return 0;
}

template <class T>
void InputData(T& n1, T& n2, T& n3)
{
	std::cout << "Enter the 3 different numbers: " << std::endl;
	std::cin >> n1 >> n2 >> n3;
};

template <class T>
T AddNums(const T& a, const T& b, const T& c)
{
	return a + b + c;
};

template <class T>
T MeanNums(const T& a, const T& b, const T& c)
{
	return (a + b + c) / 3; 
};

template <class T>
T MulNums(const T& a, const T& b, const T& c)
{
	return a * b * c;
};

template <class T>
T Greater(const T& a, const T& b, const T& c)
{
	if (a > b && a > c) { return a;	}
	if (b > a && b > c) { return b; }
	if (c > a && c > b) { return c;	}
};

template <class T>
T Lesser(const T& a, const T& b, const T& c)
{
	if (a < b && a < c) { return a;	}
	if (b < a && b < c) { return b; }
	if (c < a && c < b) { return c;	}

};
