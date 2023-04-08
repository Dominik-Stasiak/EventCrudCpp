#include "EventStore.h"
#include "Functions.h"

std::vector<Event*> events;
const std::string fileName = "Events.txt";

void addToEvents(Event* e) {
	events.push_back(e);
}


void printEvents() {
	if (events.empty()) {
		std::ifstream inFile(fileName);

		if (!inFile.is_open()) {
			std::cout << "Error file or doesn't exist" << std::endl;
			return;
		}

		std::string line;

		while (std::getline(inFile, line)) {
			if (line == "Type: Remind") {
				std::string date, text;
				std::getline(inFile, date);
				std::getline(inFile, text);

				Remind* r = new Remind(getDate(date), getText(text));
				addToEvents(r);
			}
			else if (line == "Type: Birthday") {
				std::string date, text, year;

				std::getline(inFile, date);
				std::getline(inFile, text);
				std::getline(inFile, year);

				Birthday* b = new Birthday(getDate(date), getText(text), getYearOfBirth(year));
				addToEvents(b);
			}
		}

		inFile.close();
	}
	std::cout << std::endl;
	int pre = 1;
	for (const Event* i : events) {
		std::cout << pre++<< ".\n";
		i->print();
		std::cout << std::endl;
	}
}

void saveToFile() {
	std::ofstream outFile(fileName);

	if (outFile.is_open()) {
		for (const Event* event : events) {
			outFile << event->toString() << std::endl;
		}
		outFile.close();
	}
	else {
		std::cerr << "Unable to open txt file" << fileName << std::endl;
	}
	events.clear();
}

void deleteSelected(int n) {
	n -= 1;
	if (n >= 0 && n < events.size()) {
		events.erase(events.begin() + n);
	}
	else {
		std::cout << "Invalid number!" << std::endl;
	}
	saveToFile();
}

void deleteAll() {
	std::ofstream outFile(fileName);
	
	if (outFile.is_open()) {
		outFile << "";
		outFile.close();
	}
}