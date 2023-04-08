#include "Event.h"

Event::Event() : e_date(""), e_text(""), e_type("Event") {

}

Event::Event(std::string date, std::string text) : e_date(date), e_text(text), e_type("Event")
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

std::string Event::toString() const {
    std::ostringstream oss;
    oss << "Type: " << e_type << std::endl;
    oss << "Date: " << e_date << std::endl;
    oss << "Text: " << e_text << std::endl;
    
    return oss.str();
}
