#include "SelectionAlgorithm.h"


void SelectionAlgorithm::sort() {
	// Selective sorts the vector
	// Sorts through every single element in the vector
	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			if (numbers[i] > numbers[j]) { std::swap(numbers[i], numbers[j]); }
		}
	}
}
