#ifndef EVENTSTORE_H
#define EVENTSTORE_H

#include "Event.h"
#include "Remind.h"
#include "Birthday.h"



void addToEvents(Event* e);
void printEvents();
void saveToFile();
void deleteSelected(int n);
void deleteAll();

#endif

