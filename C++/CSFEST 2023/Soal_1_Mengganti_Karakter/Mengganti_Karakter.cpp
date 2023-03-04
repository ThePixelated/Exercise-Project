#include <iostream>
#include <conio.h> // conio.h hanya digunakan untuk ngambil getch();

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
		
		str[counter] = usr_input;
		counter++;
		std::cout << char(usr_input);
		
	}
	
	return "False";
}

std::string convert(std::string N, int a, int b) {
	if(short(a) > 64 && short(a) < 91) a += 32;
	if(short(b) > 64 && short(b) < 91) b += 32;
	
	for (int i = 0; i < N.size(); i++) {
		if((int(N[i]) > 64 && int(N[i]) < 91) && N[i] == char(int(a) - 32)) {
			N[i] = char(int(b) - 32);
			continue;
		} 
		
		if(N[i] == a) N[i] = b;
	}
	
	return N;
}


int main() {
	char a, b;
	
	std::cin >> a;
	std::cin >> b;
	
	std::cout << convert(input(), a, b) << std::endl;
		
	return 0;
}
//
