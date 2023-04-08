#include "Menu.h"


short c;

void createEvent() {
	std::cout << "\nSelect type of event :" << std::endl;
	std::cout << "\n1. Remind" << std::endl;
	std::cout << "2. Birthday" << std::endl;
	std::cout << " -> ";
	std::cin >> c;

    system("cls");
    if (c == 1) {
        std::cout << "\nRemind selected :" << std::endl;
        
        Remind* r = new Remind();
        addToEvents(r->newEvent());
        delete r;
    }
    else if (c == 2) {
        std::cout << "\nBirthday selected :" << std::endl;

        Birthday* b = new Birthday();
        addToEvents(b->newEvent());
        delete b;

    }
    else {
        std::cout << "\nInvalid option selected." << std::endl;
    }

    saveToFile();
}

void showEvent() {

}

void showAllEvents() {
    printEvents();
}

void deleteEvent() {
    int n;
    printEvents();
    std::cout << "Select event to remove: " << std::endl;
    std::cout << " -> ";
    std::cin >> n;
    deleteSelected(n);
}

void deleteAllEvents() {
    deleteAll();
}
