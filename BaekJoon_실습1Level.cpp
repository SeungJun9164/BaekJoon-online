#include <iostream>

// 10039번
int main() {
	int n, sum = 0;
	for (int i = 0; i < 5; i++) {
		std::cin >> n;
		if (n < 40)
			n = 40;
		sum += n;
	}
	std::cout << sum / 5;
}

// 5543번
int main() {
	int a[5];
	for (int i = 0; i < 5; i++)
		std::cin >> a[i];
	int min = a[0] + a[3] - 50;
	for (int i = 0; i < 3; i++) {
		for (int j = 3; j < 5; j++) {
			if (min > (a[i] + a[j] - 50))
				min = a[i] + a[j] - 50;
		}
	}
	std::cout << min;
}

//10817번
int main() {
	int a, b, c, mid = 0;
	std::cin >> a >> b >> c;
	if (a > b) {
		if (a > c) {
			if (b > c)
				mid = b;
			else
				mid = c;
		}
		else
			mid = a;
	}
	else {
		if (b > c) {
			if (a > c)
				mid = a;
			else
				mid = c;
		}
		else
			mid = b;
	}
	std::cout << mid;
}

//2523번
int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = -1; j < i; j++)
			std::cout << '*';
		std::cout << '\n';
	}
	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--)
			std::cout << '*';
		std::cout << '\n';
	}
}

//2446번
int main() {
	int n, blank = 1;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
			std::cout << ' ';
		for (int j = 0; j < 2 * (n-i) - 1; j++)
			std::cout << '*';
		std::cout << '\n';
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n-i; j++)
			std::cout << ' ';
		for (int j = 0; j < 2 * i + 1; j++)
			std::cout << '*';
		std::cout << '\n';
	}
}

//10996번
int main() {
	int n, even, odd;
	std::cin >> n;
	
	even = n / 2;
	odd = n - n / 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < odd; j++)
			std::cout << "* ";
		std::cout << '\n';
		for (int j = 0; j < even; j++)
			std::cout << " *";
		std::cout << '\n';
	}
}
