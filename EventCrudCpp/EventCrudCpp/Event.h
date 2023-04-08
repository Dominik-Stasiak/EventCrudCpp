#ifndef EVENT_H
#define EVENT_H



#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <vector>
#include <regex>
#include <ctime>
#include <iomanip>

class Event
{
protected:
	std::string e_date;
	std::string e_text;
	std::string e_type;

public:
	Event();
	Event(std::string date, std::string text);
	virtual ~Event() {}

	virtual void print() const;
	virtual Event* newEvent();
	virtual std::string toString() const;

	std::string getDate() { return e_date; }
	std::string getText() { return e_text; }
};



#endif