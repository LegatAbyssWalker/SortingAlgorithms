#pragma once

#include <iostream>
#include <array>
#include <cmath>
#include <vector>


class SelectionAlgorithm {
	public:
		SelectionAlgorithm(std::vector<int>& num) : numbers(num) { };

		void sort();

		std::vector<int> getNumbers() const { return numbers; }


	private:
		std::vector<int> numbers;
};

