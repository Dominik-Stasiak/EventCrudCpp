#include "Menu.h"
#include "EventStore.h"

int main()
{
    short c;
    while (true) {

        std::cout << std::endl;
        std::cout << "1. Create event" << std::endl;
        std::cout << "2. Update event" << std::endl;
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
            system("cls");
            std::cout << "2. Update event" << std::endl;
            updateEvent();
            break;
        case 3:
            system("cls");
            std::cout << "3. Show all events" << std::endl;
            printEvents();
            break;
        case 4:
            system("cls");
            std::cout << "4. Delete event" << std::endl;
            deleteEvent();
            break;
        case 5:
            system("cls");
            std::cout << "5. Delete all events" << std::endl;
            deleteAllEvents();
            break;
        case 6:
            system("cls");
            std::cout << "\nExiting..." << std::endl;
            return 0; 
        default:
            system("cls");
            std::cout << "Invalid choice. Please enter a number between 1 and 6." << std::endl;
            break;
        }
    }
}
