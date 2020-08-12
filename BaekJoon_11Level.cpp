#include<iostream>

// 10872번
int factorial(int n) {
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
int main() {
	int n;
	std::cin >> n;
	std::cout << factorial(n);
}

// 10870번
int fibonacci(int n) {
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
	int n;
	std::cin >> n;
	std::cout << fibonacci(n);
}

// 2447번
void star(int i, int j) {
	while (i != 0) {
		if (i % 3 == 1 && j % 3 == 1) {
			std::cout << ' ';
			return;
		}
		i /= 3;
		j /= 3;		
	}
	std::cout << '*';
}
int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			star(i, j);
		}
		std::cout << '\n';
	}
}

// 11729번
void hanoi(int n, int a, int b, int c) {
	if (n == 1)
		std::cout << a << ' ' << c << '\n';
	else {
		hanoi(n - 1, a, c, b);
		std::cout << a << ' ' << c << '\n';
		hanoi(n - 1, b, a, c);
	}
}
int main() {
	int n, sum = 1;
	std::cin >> n;
	for (int i = 0; i < n - 1; i++)
		sum = sum * 2 + 1;
	std::cout << sum << '\n';
	hanoi(n, 1, 2, 3);
}