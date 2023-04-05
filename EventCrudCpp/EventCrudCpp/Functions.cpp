#include <iostream>
#include <regex>
#include "Functions.h"

int getYearFromString(const std::string& date) {
	const std::regex dateRegex("\\b(\\d{2})\\.(\\d{2})\\.(\\d{4})\\b");

	if (std::regex_match(date, dateRegex))
	{
		std::smatch match;
		std::regex_search(date, match, dateRegex);

		int year = std::stoi(match[3].str());
		return year;
	}
	else {
		std::cerr << "Invalid date -> " << date << std::endl;
		return -1;
	}
}
