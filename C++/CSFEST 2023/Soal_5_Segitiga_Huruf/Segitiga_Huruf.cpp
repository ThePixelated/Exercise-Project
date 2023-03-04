#include <iostream>

void print(int n, std::string huruf) {
	for (int i = 0; i < n-1; i++) {
		std::cout << huruf[0];
		
		for(int space = 2; space < i+1; space++) {
			std::cout << " ";
		}
		
		if (i > 0) std::cout << huruf[2];
		std::cout << std::endl;
	}
	
	for (int i = 0; i < n; i++) {
		if (i > n-2) {
			std::cout << huruf[2] << std::endl;
			continue;
		}
		
		std::cout << huruf[1];
	}
}


int main() {
	unsigned short n;
	std::string huruf;
	
	std::cin >> n;
	std::cin >> huruf;
	
	print(n, huruf);
	
	return 0;
}
//
