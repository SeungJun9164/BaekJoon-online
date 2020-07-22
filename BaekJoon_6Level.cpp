#include<iostream>
#include<string>

////10818번
//int main() {
//	int n;
//	std::cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//		std::cin >> arr[i];
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < n; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//	}
//	std::cout << min << " " << max;
//	delete[] arr;
//}

////2562번
//int main() {
//	int score[9], cnt = 1;
//	for (int i = 0; i < 9; i++)
//		std::cin >> score[i];
//	int max = score[0];
//	for (int i = 0; i < 9; i++) {
//		if (max < score[i]) {
//			max = score[i];
//			cnt = i + 1;
//		}
//	}
//	std::cout << max << '\n' << cnt;
//}

////2577번
//int main() {
//	int a, b, c, cnt[10] = { 0 }, chk = 0;
//	std::cin >> a >> b >> c;
//	std::string mul = (std::to_string)(a * b * c);
//	for (int i = 0; i < mul.length(); i++) {
//		cnt[mul[i] - 48]++;
//	}
//	for (int i = 0; i < 10; i++)
//		std::cout << cnt[i] << '\n';
//}

////3052번
//int main() {
//	int a, rest[10], cnt = 1;
//	bool chk[42] = { false };
//	for (int i = 0; i < 10; i++) {
//		std::cin >> a;
//		rest[i] = a % 42;
//	}
//	for (int i = 1; i < 10; i++)
//		if (rest[0] != rest[i])
//			if (chk[rest[i]] == false) {
//				chk[rest[i]] = true;
//				cnt++;
//			}
//	std::cout << cnt;
//}

//1546번
int main() {
	int n;
	double max = 0, sum = 0, avg = 0;

	std::cin >> n;
	double* arr = new double[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {

		if (max < arr[i]) {
			max = arr[i];
		}

	}
	for (int i = 0; i < n; i++) {
		arr[i] = (arr[i] / max * 100.0);
		sum += arr[i];
	}
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << sum / n << std::endl;
	delete[] arr;
}

