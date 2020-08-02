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
//
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
//
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
//
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
//
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
//
////10250번
//int main() {
//	int t, h, w, n, x, y;
//	std::cin >> t;
//	for (int i = 0; i < t; i++) {
//		std::cin >> h >> w >> n;
//		y = n % h;
//		x = n / h + 1;
//		if (y == 0) {
//			y = h;
//			x--;
//		}		
//		std::cout << y * 100 + x << '\n';
//	}
//}
//
////2775번
//int main() {
//	int t, k, n, sum[15][15] = { 0 }; //k:층, n:호
//	std::cin >> t;
//	for (int i = 0; i < 15; i++) {
//		sum[0][i] = i + 1;
//		sum[i][0] = 1;
//	}
//	for (int i = 1; i < 15; i++) {
//		for (int j = 1; j < 15; j++) {
//			sum[i][j] = sum[i][j - 1] + sum[i - 1][j];
//		}
//	}
//	for (int i = 0; i < t; i++) {
//		std::cin >> k >> n;
//		std::cout << sum[k][n - 1];
//		std::cout << '\n';
//	}
//}

//1011번
int main() {
	int t;
	long long x, y, dist;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> x >> y;
		dist = y - x;
		long long k = 0;
		while (1) {
			k++;
			if (dist - k * k <= 0)
				break;
		}
		if (dist - k * k == 0)
			std::cout << k * 2 - 1 << '\n';
		else {
			k = k - 1;
			if (dist - k * k <= k)
				std::cout << k * 2 << '\n';
			else
				std::cout << k * 2 + 1 << '\n';			
		}
	}
}