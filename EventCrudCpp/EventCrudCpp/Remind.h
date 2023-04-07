#ifndef REMIND_H
#define REMIND_H

#include "Event.h"

class Remind : public Event
{

public:
	Remind();
	Remind(std::string date, std::string text);

	void print() const override;

	Event* newEvent() override;
};

#endif