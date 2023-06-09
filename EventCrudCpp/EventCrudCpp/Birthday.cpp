#include "Birthday.h"
#include "Functions.h"

Birthday::Birthday() : e_yearOfBirth(0) {
	e_type = "Birthday";
}

Birthday::Birthday(std::string date, std::string text, int yearOfBirth = 0) 
	: Event(date, text), e_yearOfBirth(yearOfBirth)
{
	e_type = "Birthday";
}

void Birthday::print() const {
	std::cout << "Type: " << e_type << std::endl;
	std::cout << "Date: " << e_date << std::endl;
	std::cout << "Text: " << e_text << std::endl;
	std::cout << "Age: " << getYearFromString(e_date) - e_yearOfBirth << std::endl;
}


std::string Birthday::toString() const {
	std::ostringstream oss;
	oss << "Type: " << e_type << std::endl;
	oss << "Date: " << e_date << std::endl;
	oss << "Text: " << e_text << std::endl;
	oss << "Year of birth: " << e_yearOfBirth << std::endl;

	return oss.str();
}

Event* Birthday::newEvent() {
	std::string date, text;
	int year;

	std::cout << "\nDate: ";
	std::cin >> date;

	std::cout << "Text: ";
	std::cin.ignore();
	std::getline(std::cin, text);

	std::cout << "Year of birth: ";
	std::cin >> year;

	return new Birthday(date, text, year);
}