#include <string>
#include <iostream>

class icecream
	
{
	
private:
	int price;
	int number;
	std::string introduction;
	std::string function;

public:
	void setPrice();
	//prototype of function setPrice
	void setNumber(int);
	//prototype of function setNumber
	void setIntroduction();
	//prototype of function setIntroduction
	void setFunction();
	//prototype of setFunction

	int getPrice();
	//prototype of getPrice
	int getNumber( );
	//prototype of getNumber
	std::string getIntroduction();
	//prototype of getIntroduction
	std::string getFunction();
	//prototype of getFunction

	int TotalPrice();
	//prototype of TotalPrice

};