#include<iostream>

const int size{ 5 };
int arr[size];

int random(int MIN = 0, int MAX = 9) {
	return rand() % (MAX - MIN + 1) + MIN;
}

void fillArr() {
	for (int i{}; i < size; ++i) {
		arr[i] = random();
	}
}

int firstElement() {
	return arr[0];
}

int lastElement() {
	return arr[(sizeof(arr) / sizeof(arr[0])) - 1];
}

int randomElement() {
	return arr[random(0, 4)];
}

void show(int (*show)()) {

	std::cout << show() << std::endl;
}

int main() {

	srand(time(NULL));

	fillArr();

	for (int i{}; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

	show(randomElement);

	return 0;
}