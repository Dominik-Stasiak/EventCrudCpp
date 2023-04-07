#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <iostream>
#include <cstdlib>

class Event
{
protected:
	std::string e_date;
	std::string e_text;

public:
	Event();
	Event(std::string date, std::string text);
	virtual ~Event() {}

	virtual void print() const;
	virtual Event* newEvent();

	std::string getDate() { return e_date; }
	std::string getText() { return e_text; }
};



#endif