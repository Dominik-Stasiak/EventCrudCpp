#include "Event.h"

Event::Event() : e_date(""), e_text("") {

}

Event::Event(std::string date, std::string text) : e_date(date), e_text(text)
{
}

void Event::print() const {
	std::cout << "Date = " << e_date << std::endl;
	std::cout << "Text = " << e_text << std::endl;
}

Event* Event::newEvent()
{
    std::string date, text;
    std::cout << "Enter date: ";
    std::cin >> date;
    std::cout << "Enter text: ";
    std::cin >> text;
    return new Event(date, text);
}
