#include "Exercise.h"

int multiply(std::string input, std::string delim) {
	if (input == "") return 0;
	int val;
	int total = 1;
	std::string token;
	std::string delimiter = delim;
	size_t pos;
	while ((pos = input.find(delimiter)) != std::string::npos) {
		token = input.substr(0, pos);
		input.erase(0, pos + delimiter.length());
		val = std::stoi(token);
		total = total * val;
		//std::cerr << "Total: " << total << "Val: " << val << std::endl;
	}
	val = std::stoi(input);
	total = total * val;
	return total;
}
