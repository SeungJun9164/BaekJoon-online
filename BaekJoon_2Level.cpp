#include<iostream>

//1330번
int main() {
	int a, b;
	std::cin >> a >> b;
	if (a > b)
		std::cout << '>';
	else if (a < b)
		std::cout << '<';
	else if (a == b)
		std::cout << "==";
}

//9498번
int main() {
	int a;
	std::cin >> a;
	if (a <= 100 && a >= 90)
		std::cout << 'A';
	else if (a <= 89 && a >= 80)
		std::cout << 'B';
	else if (a <= 79 && a >= 70)
		std::cout << 'C';
	else if (a <= 69 && a >= 60)
		std::cout << 'D';
	else
		std::cout << 'F';
}

//2753번
int main() {
	int year;
	std::cin >> year;
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		std::cout << 1;
	else
		std::cout << 0;
}

//14681번
int main() {
	int x, y;
	std::cin >> x >> y;
	if (x > 0 && y > 0)
		std::cout << 1;
	else if (x < 0 && y>0)
		std::cout << 2;
	else if (x < 0 && y < 0)
		std::cout << 3;
	else if (x > 0 && y < 0)
		std::cout << 4;
}

//2884번
int main() {
	int h, m;
	std::cin >> h >> m;
	if (h > 0 && m < 45) {
		h = h - 1;
		m = 60 + m - 45;
	}
	else if (h > 0 && m >= 45) {
		m = m - 45;
	}
	else if (h == 0 && m < 45) {
		h = 23;
		m = 60 + m - 45;
	}
	else if (h == 0 && m >= 45) {
		m = m - 45;
	}
	std::cout << h << ' ' << m;
}