#include "Practice.h"

#include <string>
#include <iostream>
#include <vector>

//splits vectors values into two queues and allocates to a queue when free
long queueTime(std::vector<int> customers, int n) {
	long max = 0;
	long count = 0;
	int vsize = n;
	std::vector<int> free = {};
	if (customers.size() == 0) { return 0; }
	else if (n == 1) {
		long total = 0;
		for (int i = 0; i < customers.size(); i++) {
			total += customers[i];
		}
		return total;
	}
	else {
		for (int t = 0;t < n;t++) {
			free.push_back(0);
			vsize--;
		}
		while (customers.size() != 0) {
			for (int q = 0; q < free.size(); q++) {
				if (free[q] == 0) {
					free[q] = customers[0];
					customers.erase(customers.begin());
				}
				free[q]--;
			}
			count++;
		}
		if (customers.size() == 0) {
			for (int q = 0; q < free.size(); q++) {
				if (free[q] == 0) {}
				else { max = free[q]; }
			}
		}
		count += max;
	}
	return count;
}

//returns the number as a string times by the number but recursively 
std::string pattern(int n) {
	if (n < 1) {
		return "";
	}
	else {
		std::string tmp;
		for (int i = 0; i < n; i++) {
			tmp += std::to_string(n);
		}
		return pattern(n - 1) + tmp + "\n";
	}
}

int RecursiveSum(int number, int sum) {
	if (number == 0) {
		return sum;
	}
	else {
		sum += number;
		std::cout << sum << "\n";
		return RecursiveSum(number - 1, sum);
	}
}

//might want to split up into maths, etc
int sumTriangularNumbers(int n) {
	if (n <= 0) {return 0;}
	else {
		return sumTriangularNumbers(n - 1) + (n * (n + 1)) / 2;
	}
}