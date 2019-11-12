#include <iostream>

void InputData(int& aNum, float& sB, float& exp, float& inf, float& lCrd)
{
	std::cout << "Enter the account number or -1 for breaking operation "
		      << std::endl;
	std::cin >> aNum;

	if (aNum != -1) {
		std::cout << "Enter the initial balance:" << std::endl;
		std::cin >> sB;
		std::cout << "Eenter the amount of expense:" << std::endl;
		std::cin >> exp;
		std::cout << "Eenter the amount of receip:" << std::endl;
		std::cin >> inf;
		std::cout << "Enter the credit limit:" << std::endl;
		std::cin >> lCrd;
		std::cout << std::endl;
	}
};

class Client
{
	public:
		Client(int aNum, float sBlc, float exp, float inf, float lCrd) :
			accNumber(aNum), sBalanc(sBlc), expend(exp), inflow(inf),
			limitCredit(lCrd) {	};

		int getAccNumber() { return accNumber; }
		float getlimitCredit() { return limitCredit; }

		float getNewBalance() {
			exBalance = sBalanc;
			sBalanc += expend - inflow;
			return sBalanc;
		}

		bool checkBalanc() {
			if (sBalanc > exBalance) {
				std::cout << "The limit of credit is exceeded!"
					      << std::endl;
			}
		};

	private:
		int accNumber;
		float sBalanc;
		float exBalance;
		float expend;
		float inflow;
		float limitCredit;

};

void printResult(Client& obj)
{
	std::cout << "Account number:  "
		      << obj.getAccNumber() << std::endl;
	std::cout << "Limit Credit: "
		      << obj.getlimitCredit() << std::endl;
	std::cout << "New Balanc: "
		      << obj.getNewBalance() << std::endl;

	obj.checkBalanc();
};

int main()
{
	int accNum;
	float sBlc;
	float exp;
	float inf;
	float lCredit;
	
	InputData(accNum, sBlc, exp, inf, lCredit);
	Client p1(accNum, sBlc, exp, inf, lCredit);
	printResult(p1);

	InputData(accNum, sBlc, exp, inf, lCredit);
	Client p2(accNum, sBlc, exp, inf, lCredit);
	printResult(p2);

	return 0;
}
