#include <iostream>
#include <conio.h> // conio.h hanya digunakan untuk ngambil getch();

void print_arr(int arr[][2], bool condt = false) {
	for (int i = 0; i < 26; i++) {
		if (arr[i][1] != 0) 
		std::cout << char(arr[i][0]) << " " << arr[i][1] << "\n\n";
	}
	
	if(condt) std::cout << "Space " << arr[26][1] << std::endl;
}

std::string con_joined(char str[], int size) {
	std::string char_to_str;
	
	for (int i = 0; i < size; i++) {
		char_to_str += " ";
		char_to_str[i] = str[i];
	}
	
	return char_to_str;
}

std::string input() {
	std::string text;
	char str[10000];
	int counter = 0;
	
	while(1) {
		int usr_input = getch();

		if (usr_input == 13) {
			std::cout << std::endl;
			text = con_joined(str, counter);
			return text;
		}
		
		if (usr_input == 8 && counter > 0) {
			std::cout << "\b ";
			counter--;
			std::cout << char(usr_input);
			continue;
		}
		
		std::cout << char(usr_input);
		
		if (usr_input > 64 && usr_input < 91) usr_input += 32;
		
		str[counter] = usr_input;
		counter++;
	}
	
	return "False";
}

void gen_arr(std::string text, bool condt = false) {
	int arr[27][2];
	
	for (int i = 0; i < (condt ? 27 : 26); i++) {
		arr[i][0] = i+97;
		arr[i][1] = 0;
	}
	
	for (int i = 0; i < text.size(); i++) {
		for (int j = 0; j < (condt ? 27 : 26); j++) {
			if (!(text[i] > 96 && text[i] < 124) && !(text[i] == 32)) continue;
			
			if (condt && text[i] == char(32)) {
				arr[26][1] += 1; break;	
			}
			if (text[i] == arr[j][0]) {
				arr[j][1] += 1; break;
			}
		}
	}
	
	print_arr(arr, condt);
}


int main() {
	
	// function gen_arr dapat ditambah nilai true pada akhir argument, untuk menghitung banyaknya spasi di setiap kata dan untuk meng-enable function print_arr agar mengeprint banyaknya spasi
	// contoh penggunaan -> gen_arr(string, true);
	gen_arr(input());
	
	return 0;
}
//
