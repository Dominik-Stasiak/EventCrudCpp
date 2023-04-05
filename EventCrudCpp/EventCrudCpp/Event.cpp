#include "Event.h"
#include <iostream>

Event::Event(std::string date, std::string text) : e_date(date), e_text(text)
{
}

void Event::print() const {
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
}