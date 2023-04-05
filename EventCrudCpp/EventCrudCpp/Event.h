#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event
{
protected:
	std::string e_date;
	std::string e_text;

public:
	Event(std::string date, std::string text);

	virtual void print() const;

	std::string getDate() { return e_date; }
	std::string getText() { return e_text; }
};



#endif