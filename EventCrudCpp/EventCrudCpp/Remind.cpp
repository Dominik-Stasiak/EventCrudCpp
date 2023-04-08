#include "Remind.h"
#include <iostream>

Remind::Remind() {
	e_type = "Remind";
}

Remind::Remind(std::string date, std::string text) : Event(date, text)
{
	e_type = "Remind";
}

void Remind::print() const {
	std::cout << "Type: " << e_type << std::endl;
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
}

std::string Remind::toString() const {
	std::ostringstream oss;
	oss << "Type: " << e_type << std::endl;
	oss << "Date: " << e_date << std::endl;
	oss << "Text: " << e_text << std::endl;

	return oss.str();
}

Event* Remind::newEvent() {
	std::string date, text;

	std::cout << "\nDate: ";
	std::cin >> date;

	std::cout << "Text: ";
	std::cin.ignore();
	std::getline(std::cin, text);

	return new Remind(date, text);
}