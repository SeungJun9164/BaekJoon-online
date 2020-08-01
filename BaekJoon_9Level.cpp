#include<iostream>

////1712번
//int main() {
//	int a, b, c, price, son;
//	std::cin >> a >> b >> c;
//	for (int i = 1;;i++) {
//		if (b >= c) {
//			std::cout << -1;
//			break;
//		}
//		price = a + b * i;
//		if (price < (c * i)) {
//			std::cout << i;
//			break;
//		}
//	}
//}
////1712번이 시간초과가 계속 발생하여 아래 코드로 변경
//int main()
//{
//	int a, b, c, cnt = 0;
//	std::cin >> a >> b >> c;
//
//	if (b >= c)
//	{
//		std::cout << -1;
//		return 0;
//	}
//	cnt = a / (c - b) + 1;
//	std::cout << cnt;
//	return 0;
//}

////2839번
//int main() {
//	int n, temp;
//	std::cin >> n;
//	if (n % 5 == 0)
//		std::cout << n / 5;
//	else {
//		temp = n / 5;
//		while (temp >= 0) {
//			if ((n - (temp * 5)) % 3 == 0) {
//				std::cout << temp + (n - (temp * 5)) / 3;
//				break;
//			}
//			else
//				temp--;
//		}
//		if (temp == -1)
//			std::cout << -1;
//	}
//}

////2292번
//int main() {
//	int n, sum = 1, cnt = 1;
//	std::cin >> n;
//	while (sum < n) {
//		sum += cnt * 6;
//		cnt++;
//	}
//	std::cout << cnt;
//}

////1193번
//int main() {
//	int x, cnt = 0, group = 0;
//	std::cin >> x;
//	while (cnt < x) {
//		group++;    
//		cnt += group; 
//	}
//
//	if (group % 2)
//		std::cout << ((cnt - x) + 1) << '/' << (group - (cnt - x));
//	else
//		std::cout << (group - (cnt - x)) << '/' << ((cnt - x) + 1);
//}

////2869번
//int main() {
//	int v, a, b, day = 1, sum = 0;
//	std::cin >> a >> b >> v;
//	while (1) {
//		sum += a;
//		if (sum >= v) {
//			std::cout << day;
//			break;
//		}
//		else {
//			sum -= b;
//			day++;
//		}
//	}
//}
////시간초과 발생
//int main() {
//	int v, a, b, day = 0;
//	std::cin >> a >> b >> v;
//	if ((v - b) % (a - b) == 0)
//		std::cout << (v - b) / (a - b);
//	else
//		std::cout << ((v - b) / (a - b)) + 1;
//}

//10250번
int main() {
	int t, h, w, n, ho=1, cheung = 1;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> h >> w >> n;
		if (n <= h)
			std::cout << n << "01";
		else {

		}
	}
}