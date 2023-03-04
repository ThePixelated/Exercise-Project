#include <iostream>

void print_arr(unsigned short** arr, int N) {
	for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << arr[i][j] << " ";
        } std::cout << std::endl;
    }
}

unsigned short** loyak_grid(unsigned short N) {
	unsigned short** loyak = new unsigned short*[N];
	
	for (int i = 0; i < N; i++) {
		loyak[i] = new unsigned short[N];
		for (int j = 0; j < N; j++) {
			loyak[i][j] = 0;
		}
	}
	
	return loyak;
}

void flipping(unsigned short** loyak, int N, int x, int y, int M) {
	if (x >= N) x -= (x - N);
	if (y >= N) y -= (y - N);
	
	for (int i = x; i-x < M; i++) {
		if (i >= N) break;
		
		for (int j = y; j-y < M; j++) {
			if (j >= N) break;
			
			if(loyak[i][j]) loyak[i][j] = 0;
			else loyak[i][j] = 1;
		}
	}
}


int main() {
	unsigned short N;
	std::cin >> N;
	
	unsigned short** loyak = loyak_grid(N);
	
	int x = true, y = true, M = true;
	
	while(!(x == 0 && y == 0 && M == 0)) {
		std::cin >> x;
		std::cin >> y;
		std::cin >> M;
		
		flipping(loyak, N, x, y, M);
	}
	
	print_arr(loyak, N);
	
	return 0;
}
//
