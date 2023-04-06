#include <iostream>
#include "Menu.h"

int main()
{
    short c;
    while (true) {
        
        std::cout << std::endl;
        std::cout << "1. Create event" << std::endl;
        std::cout << "2. Show event" << std::endl;
        std::cout << "3. Show all events" << std::endl;
        std::cout << "4. Delete event" << std::endl;
        std::cout << "5. Delete all events" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << " -> ";
        std::cin >> c;

        switch (c)
        {
        case 1:
            system("cls");
            std::cout << "1. Create event" << std::endl;
            createEvent();
            break;
        case 2:
            std::cout << "2. Show event" << std::endl;
            break;
        case 3:
            std::cout << "3. Show all events" << std::endl;
            break;
        case 4:
            std::cout << "4. Delete event" << std::endl;
            break;
        case 5:
            std::cout << "5. Delete all events" << std::endl;
            break;
        case 6:
            std::cout << "\nExiting..." << std::endl;
            return 0; 
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 6." << std::endl;
            break;
        }
    }
    Birthday* event = new Birthday("12.11.2023", "Someone birthday", 1998);
    event->print();
    Remind* remind = new Remind("01.04.2023", "Something");
    
    
    addToEvents(event);
    addToEvents(remind);
    
    printEvents();

    delete event;
    delete remind;
}
