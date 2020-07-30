#include<iostream>

//1712번
int main() {
	int a, b, c, price, son;
	std::cin >> a >> b >> c;
	for (int i = 1;;i++) {
		if (b >= c) {
			std::cout << -1;
			break;
		}
		price = a + b * i;
		if (price < (c * i)) {
			std::cout << i;
			break;
		}
	}
}
//1712번이 시간초과가 계속 발생하여 아래 코드로 변경
int main()
{
	int a, b, c, cnt = 0;
	std::cin >> a >> b >> c;

	if (b >= c)
	{
		std::cout << -1;
		return 0;
	}
	cnt = a / (c - b) + 1;
	std::cout << cnt;
	return 0;
}