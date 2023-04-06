#include <iostream>
#include "Event.h"
#include "Birthday.h"
#include "Remind.h"
#include "EventStore.h"

int main()
{
    Birthday* event = new Birthday("12.11.2023", "Someone birthday", 1998);
    //event->print();
    Remind* remind = new Remind("01.04.2023", "Something");
    
    
    addToEvents(event);
    addToEvents(remind);
    
    printEvents();

    delete event;
    delete remind;
}
