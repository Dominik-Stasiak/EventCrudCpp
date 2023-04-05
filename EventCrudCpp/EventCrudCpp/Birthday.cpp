#include "Birthday.h"
#include <iostream>
#include "Functions.h"

Birthday::Birthday(std::string date, std::string text, int yearOfBirth) 
	: Event(date, text), e_yearOfBirth(yearOfBirth)
{
}

void Birthday::print() const {
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
	std::cout << "Age = " << getYearFromString(e_date) - e_yearOfBirth << std::endl;
}