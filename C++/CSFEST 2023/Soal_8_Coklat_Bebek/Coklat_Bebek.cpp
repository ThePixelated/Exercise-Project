#include <iostream>

int count(int banyak_coklat) {
	int counter = 1;
	
	while(!(counter > banyak_coklat)) {
		banyak_coklat -= counter; counter++;
	}

	return counter;
}


int main() {
	int coklat;
	std::cin >> coklat;
	
	std::cout << count(coklat) << std::endl;
	
	return 0;
}
//
