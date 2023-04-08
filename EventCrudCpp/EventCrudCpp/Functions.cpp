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

int getYearOfBirth(const std::string& str) {
	std::string prefix = "Year of birth: ";
	auto pos = str.find(prefix);
	if (pos == std::string::npos) {
		return -1;
	}
	int year = std::stoi(str.substr(pos + prefix.length()));
	return year;
}

std::string getDate(const std::string& str) {
	std::string prefix = "Date: ";
	auto pos = str.find(prefix);
	
	std::string date = str.substr(pos + prefix.length());
	return date;
}
std::string getText(const std::string& str) {
	std::string prefix = "Text: ";
	auto pos = str.find(prefix);

	std::string text = str.substr(pos + prefix.length());
	return text;
}

