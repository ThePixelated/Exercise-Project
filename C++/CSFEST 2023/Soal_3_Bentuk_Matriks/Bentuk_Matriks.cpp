#include <iostream>

void print(int** matriks, int m, int n, bool condt = false) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << matriks[i][j] << " ";
		} condt ? std::cout << "- " << i+1 << std::endl : std::cout << "\n";
	}
}

int** matriks(int k, int m, int n) {
	int** arr = new int*[m];
	
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++) {
			if (k > 0) {
				std::cin >> arr[i][j];
				k--;
				continue;
			}
			
			arr[i][j] = 0;
		}
	}
	
	return arr;
}


int main() {
	int k, m, n;
	
	std::cin >> k;
	std::cin >> m;
	std::cin >> n;
	
	// function print dapat ditambah nilai true pada akhir argument, untuk mengeprint barisan berkorelasi cth* print(int** arr, int m, int n, true). bila tidak mau ada nilai baris maka tidak perlu di beri nilai true / kosongkan argument terakhir.
	// contoh penggunaan -> print(matriks(k, m, n), m, n, true); 
	print(matriks(k, m, n), m, n);
	
	return 0;
}
//
