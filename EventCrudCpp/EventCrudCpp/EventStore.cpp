#include "EventStore.h"

std::vector<Event*> events;

void addToEvents(Event* e) {
	events.push_back(e);
}

void printEvents() {
	for (const Event* i : events)
	{
		i->print();
	}
}