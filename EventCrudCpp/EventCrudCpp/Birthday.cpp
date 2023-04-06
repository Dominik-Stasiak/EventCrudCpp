#include "Birthday.h"
#include "Functions.h"

Birthday::Birthday() {
	
}

Birthday::Birthday(std::string date, std::string text, int yearOfBirth) 
	: Event(date, text), e_yearOfBirth(yearOfBirth)
{
}

void Birthday::print() const {
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
	std::cout << "Age = " << getYearFromString(e_date) - e_yearOfBirth << std::endl;
}

Event* Birthday::newEvent() {
	std::string date;
	std::string text;
	int year;

	std::cout << "Date: ";
	std::cin >> date;

	std::cout << "\nText: ";
	std::cin >> text;

	std::cout << "\nYear of birth: ";
	std::cin >> year;

	return new Birthday(date, text, year);
}