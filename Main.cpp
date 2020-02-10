#include <iostream>
#include <memory>

#include "Random.h"

#include "SelectionAlgorithm.h"


const unsigned int amount = 10;

int main() {
	Random<> random;
	std::vector<int> numbers;

	// Sets the random order
	for (int i = 1; i <= amount; i++) { numbers.emplace_back(i); }
	for (int i = 0; i < numbers.size() - 1; i++) {
		int j = random.getInt(1, numbers.size() - 1);
		std::swap(numbers[i], numbers[j]);
	}


	// Asks user for algorithm type
	int type;
	std::cout << "What Algorithm would you like to use?\n"
		<< "1. Sorting Algorithm\n"
		<< "2. Exit\n"
		<< ">> ";
	std::cin >> type;

	// Gives the pre sort
	for (auto& amt : numbers) { std::cout << "Pre Sort: " << amt << '\n'; }

	// Gives the algorithm the correct information to organize the numbers
	if (type == 1) { 
		SelectionAlgorithm selectiveAlgorithm(numbers);
		selectiveAlgorithm.sort();
		// Gives the sorted order
		for (auto& amt : selectiveAlgorithm.getNumbers()) { std::cout << "Post Sort: " << amt << '\n'; }
	}

	else if (type == 2) { return 0; }


	system("pause");
}