#include "Remind.h"
#include <iostream>

Remind::Remind(std::string date, std::string text) : Event(date, text)
{
}

void Remind::print() const {
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
}