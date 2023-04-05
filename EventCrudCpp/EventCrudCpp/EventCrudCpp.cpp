#include <iostream>
#include "Event.h"
#include "Birthday.h"

int main()
{
    Event* event = new Birthday("12.11.2023", "Someone birthday", 1998);
    event->print();
    delete event;

}
