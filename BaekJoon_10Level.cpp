#include<iostream>
#define _USE_MATH_DEFINES
#include <math.h>



//// 1978번
//int main() {
//	int n, cnt = 0;
//	std::cin >> n;
//	int* arr = new int[n];
//	bool chk[1001] = { false };
//	chk[0] = true;
//	chk[1] = true;
//	for (int i = 2; i < 1001; i++) {
//		for (int j = 2; i * j < 1001; j++) {
//			if (chk[i * j] == false)
//				chk[i * j] = true;
//			else
//				continue;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		std::cin >> arr[i];
//		if (chk[arr[i]] == false)
//			cnt++;
//	}
//	std::cout << cnt;
//	delete[] arr;
//}
//
//// 2581번
//int main() {
//	bool chk[10001] = { false };
//	chk[0] = true;
//	chk[1] = true;
//	for (int i = 2; i < 10001; i++) {
//		for (int j = 2; i * j < 10001; j++) {
//			if (chk[i * j] == false)
//				chk[i * j] = true;
//			else
//				continue;
//		}
//	}
//	int m, n, sum = 0, min;
//	std::cin >> m >> n;
//	min = n;
//	for (int i = m; i <= n; i++) {
//		if (chk[i] == false) {
//			if (min > i)
//				min = i;
//			sum += i;
//		}
//	}
//	if (sum == 0)
//		std::cout << -1;
//	else
//		std::cout << sum << '\n' << min;
//}
//
//// 1929번
//int main() {
//	bool chk[1000001] = { false };
//	chk[0] = true;
//	chk[1] = true;
//	for (int i = 2; i < 1000001; i++) {
//		for (int j = 2; i * j < 1000001; j++) {
//			if (chk[i * j] == false)
//				chk[i * j] = true;
//			else
//				continue;
//		}
//	}
//	int m, n;
//	std::cin >> m >> n;
//	for (int i = m; i <= n; i++) {
//		if (chk[i] == false)
//			std::cout << i << '\n';
//	}
//}
//
//// 4948번
//int main() {
//	bool chk[246913] = { false };
//	chk[0] = true;
//	chk[1] = true;
//	for (int i = 2; i < 246913; i++) {
//		for (int j = 2; i * j < 246913; j++) {
//			if (chk[i * j] == false)
//				chk[i * j] = true;
//			else
//				continue;
//		}
//	}
//	while (1) {		
//		int n, cnt = 0;
//		std::cin >> n;
//		if (n == 0)
//			break;
//		for (int i = n + 1; i <= 2 * n; i++) {
//			if (chk[i] == false)
//				cnt++;
//		}
//		std::cout << cnt << '\n';
//	}
//}
//
//// 9020번
//int main() {
//	bool chk[10001] = { false };
//	chk[0] = true;
//	chk[1] = true;
//	for (int i = 2; i < 10001; i++) {
//		for (int j = 2; i * j < 10001; j++) {
//			if (chk[i * j] == false)
//				chk[i * j] = true;
//			else
//				continue;
//		}
//	}
//	int t, n, down, up;
//	std::cin >> t;
//	for (int i = 0; i < t; i++) {
//		std::cin >> n;
//		down = n / 2;
//		up = n / 2;
//		while (1) {
//			if (chk[down] == false && chk[up] == false) {
//				std::cout << down << ' ' << up << '\n';
//				break;
//			}
//			else {
//				down--;
//				up++;
//			}
//		}
//	}
//}

//// 1085번
//int main() {
//	int x, y, w, h, min1, min2;
//	std::cin >> x >> y >> w >> h;
//	h - y > y ? min1 = y : min1 = h - y;
//	w - x > x ? min2 = x : min2 = w - x;
//	min1 > min2 ? std::cout << min2 : std::cout << min1;
//}

//// 3009번
//int main() {
//	int x1, x2, x3, x4, y1, y2, y3, y4;
//	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	if (x1 == x2) 
//		x4 = x3;
//	else if (x1==x3)
//		x4 = x2;
//	else
//		x4 = x1;
//
//	if (y1 == y2)
//		y4 = y3;
//	else if (y1 == y3)
//		y4 = y2;
//	else
//		y4 = y1;
//
//	std::cout << x4 << ' ' << y4;
//}

//// 4153번
//int main() {
//	while (1) {
//		int a, b, c;
//		std::cin >> a >> b >> c;
//		if (a == 0 && b == 0 && c == 0)
//			break;
//		if ((pow(a, 2) == pow(b, 2) + pow(c, 2) || (pow(b, 2) == pow(a, 2) + pow(c, 2))
//			|| (pow(c, 2) == pow(b, 2) + pow(a, 2))))
//			std::cout << "right" << '\n';
//		else
//			std::cout << "wrong" << '\n';
//	}
//		
//}

//// 3053번
//int main()
//{
//	double r;
//	std::cin >> r;
//
//	std::cout.fixed;
//	std::cout.precision(7);  
//
//	std::cout << pow(r, 2) * M_PI << '\n';
//	printf("%.6lf", pow(r, 2) * 2);
//
//	return 0;
//}
////백준에서 계속 틀렸다고 나와서 아래코드로 변경해서 제출
//int main() {
//    double R, S1, S2;
//    scanf("%lf", &R);
//    S1 = M_PI * R * R;
//    S2 = R * R * 2;
//
//    printf("%.6f\n", S1);
//    printf("%.6f\n", S2);
//    return 0;
//}

// 1002번
int main(void) {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int x1, x2, y1, y2, r1, r2, ret;
        std::cin >> x1 >> y1 >> r1;
        std::cin >> x2 >> y2 >> r2;

        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        int minus = abs(r1 - r2);
        int plus = r1 + r2;

        if (d == 0.0) {
            if (r1 == r2)
                ret = -1;
            else
                ret = 0;
        }
        else {
            if (minus < d && plus > d)
                ret = 2;
            else if (plus == d || minus == d)
                ret = 1;
            else
                ret = 0;
        }
        std::cout << ret << std::endl;
    }
    return 0;
}
