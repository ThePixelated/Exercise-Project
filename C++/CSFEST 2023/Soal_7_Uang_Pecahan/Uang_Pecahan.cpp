#include <iostream>

void print_arr(short arr[][2], int N) {
	for (int i = 0; i < N; ++i) {
        std::cout << arr[i][1] << " ";
    } std::cout << std::endl;
}

void counting(unsigned short input_P, short pecahan[][2]) {
	short counter = 0;
	while(input_P > 0) {
		if (pecahan[counter][0]*1000 > input_P*1000) {
			counter++; continue;
		}
		
		input_P -= pecahan[counter][0];
		pecahan[counter][1]++;
	}
		
	print_arr(pecahan, 6);
}

int main() {
	short pecahan[6][2] = {{100, 0}, {50, 0}, {10, 0}, {5, 0}, {2, 0}, {1, 0}};
	
	unsigned short P;
	std::cin >> P;
	
	counting(P, pecahan);
	
	return 0;
}
//
