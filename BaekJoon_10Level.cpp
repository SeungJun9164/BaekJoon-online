#include<iostream>

// 1978번
int main() {
	int n, cnt = 0;
	std::cin >> n;
	int* arr = new int[n];
	bool chk[1001] = { false };
	chk[0] = true;
	chk[1] = true;
	for (int i = 2; i < 1001; i++) {
		for (int j = 2; i * j < 1001; j++) {
			if (chk[i * j] == false)
				chk[i * j] = true;
			else
				continue;
		}
	}
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
		if (chk[arr[i]] == false)
			cnt++;
	}
	std::cout << cnt;
	delete[] arr;
}

// 2581번
int main() {
	bool chk[10001] = { false };
	chk[0] = true;
	chk[1] = true;
	for (int i = 2; i < 10001; i++) {
		for (int j = 2; i * j < 10001; j++) {
			if (chk[i * j] == false)
				chk[i * j] = true;
			else
				continue;
		}
	}
	int m, n, sum = 0, min;
	std::cin >> m >> n;
	min = n;
	for (int i = m; i <= n; i++) {
		if (chk[i] == false) {
			if (min > i)
				min = i;
			sum += i;
		}
	}
	if (sum == 0)
		std::cout << -1;
	else
		std::cout << sum << '\n' << min;
}

// 1929번
int main() {
	bool chk[1000001] = { false };
	chk[0] = true;
	chk[1] = true;
	for (int i = 2; i < 1000001; i++) {
		for (int j = 2; i * j < 1000001; j++) {
			if (chk[i * j] == false)
				chk[i * j] = true;
			else
				continue;
		}
	}
	int m, n;
	std::cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (chk[i] == false)
			std::cout << i << '\n';
	}
}

// 4948번
int main() {
	bool chk[246913] = { false };
	chk[0] = true;
	chk[1] = true;
	for (int i = 2; i < 246913; i++) {
		for (int j = 2; i * j < 246913; j++) {
			if (chk[i * j] == false)
				chk[i * j] = true;
			else
				continue;
		}
	}
	while (1) {		
		int n, cnt = 0;
		std::cin >> n;
		if (n == 0)
			break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (chk[i] == false)
				cnt++;
		}
		std::cout << cnt << '\n';
	}
}

// 9020번
int main() {
	bool chk[10001] = { false };
	chk[0] = true;
	chk[1] = true;
	for (int i = 2; i < 10001; i++) {
		for (int j = 2; i * j < 10001; j++) {
			if (chk[i * j] == false)
				chk[i * j] = true;
			else
				continue;
		}
	}
	int t, n, down, up;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		down = n / 2;
		up = n / 2;
		while (1) {
			if (chk[down] == false && chk[up] == false) {
				std::cout << down << ' ' << up << '\n';
				break;
			}
			else {
				down--;
				up++;
			}
		}
	}
}
