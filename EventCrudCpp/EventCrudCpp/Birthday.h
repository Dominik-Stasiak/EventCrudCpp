#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include "Event.h"

class Birthday : public Event
{
public:
	Birthday(std::string date, std::string text, int e_yearOfBirth);
	void print() const override;

private:
	int e_yearOfBirth;
	int e_age;

};

#endif
