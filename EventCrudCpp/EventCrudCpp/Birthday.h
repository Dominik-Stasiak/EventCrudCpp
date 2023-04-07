#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include "Event.h"

class Birthday : public Event
{

public:
	Birthday();
	Birthday(std::string date, std::string text, int e_yearOfBirth);

	void print() const override;

	Event* newEvent() override;

private:
	int e_yearOfBirth;
};

#endif
