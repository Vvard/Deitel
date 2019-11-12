#include <iostream>
#include <iomanip>

class Auto
{
	public:
		Auto() { };
		void setTime(float t) { time = t; }
		float getTime() { return time; }

	private:
		float time;
};

void InitHour(const int&, float []);
void Payment(Auto&, float&);
void PrintResult(const int, float [], float []);

int main()
{
	Auto a,
		 b,
		 c;
	
	int size = 3;
	float h[size];
	float p[size];

	float p_a = 0,
		  p_b = 0,
		  p_c = 0;

	InitHour(size, h);

	a.setTime(h[0]);
	b.setTime(h[1]);
	c.setTime(h[2]);
	
	Payment(a, p[0]);
	Payment(b, p[1]);
	Payment(c, p[2]);

	PrintResult(size, h, p);

	return 0;
}

void InitHour(const int& s, float t[])
{
	for (int i = 0; i < s; i++) {
		std::cout << "Enter the time of " << i + 1
			      << " auto parking." << std::endl;
		std::cin >> t[i];
	}
};

void Payment(Auto& m, float& p)
{
	
	float t = m.getTime();

	if(t < 24) {
		if(t < 3) {
			p = 2;
		} else {
			p = 2;
			for (int i = 3; i < (int)t; i++) {
				p += 0.5;
			}
		}
	} else {
		p = 10;
	}
};

void PrintResult(int qty, float tm[], float pym[])
{
	std::cout << std::setw(10) << "Auto" 
		      << std::setw(10) << "Hour" 
  			  << std::setw(10) << "Payment"
			  << std::endl;

	for (int i = 0; i < qty; i++) {
		std::cout << std::setw(10) << i + 1 
			      << std::setw(10) << tm[i] 
				  << std::setw(10) << pym[i] 
				  << std::endl;
	}
};
