#include "Remind.h"
#include <iostream>

Remind::Remind() {
	
}

Remind::Remind(std::string date, std::string text) : Event(date, text)
{
}

void Remind::print() const {
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
}



Event* Remind::newEvent() {
	std::string date, text;

	std::cout << "\nDate: ";
	std::cin >> date;

	std::cout << "Text: ";
	std::getline(std::cin, text);

	return new Remind(date, text);
}