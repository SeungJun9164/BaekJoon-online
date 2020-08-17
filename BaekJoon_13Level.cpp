#include <iostream>
#include<string>
#include <algorithm>

// 2798번
int main() {
    int n, m;
    std::cin >> n >> m;
    int* card = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> card[i];
    int sum = 0, ans = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (card[i] + card[j] + card[k] <= m) {
                    sum = card[i] + card[j] + card[k];
                    if (sum > ans)
                        ans = sum;
                }
            }
        }
    }
    std::cout << ans;
    delete[] card;
}

// 2231번
int main() {
	int n, sum = 0, temp = 0;
    std::cin >> n;
	for (int i = 1; i < n; i++) {
		sum = i;
		temp = i;

		while (temp) {
			sum += temp % 10;
			temp /= 10;
		}

		if (n == sum) {
			std::cout << i;
			return 0;
		}
	}
	std::cout << 0;
}

// 7568번
int main() {
	int n;
	std::cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	int* rank = new int[n];
	for (int i = 0; i < n; i++) {
		rank[i] = n;
		std::cin >> x[i] >> y[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (x[i] > x[j] && y[i] > y[j])
				rank[i]--;
			else if (x[i] < x[j] && y[i] < y[j])
				rank[j]--;
			else {
				rank[i]--;
				rank[j]--;
			}
		}
	}
	for (int i = 0; i < n; i++)
		std::cout << rank[i] << ' ';
	delete[] x, y, rank;
}

// 1018번
std::string a[50];
std::string w[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
std::string b[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
int w_cnt(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (a[x + i][y + j] != w[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}
int b_cnt(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (a[x + i][y + j] != b[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int result = 65;
    for (int i = 0; i + 8 <= n; i++) {
        for (int j = 0; j + 8 <= m; j++) {
            result = std::min(result, std::min(w_cnt(i, j), b_cnt(i, j)));
        }
    }
    std::cout << result;
    return 0;
}

// 1436번
int main() {
	int n;
	int str = 666;
	std::cin >> n;
	for (int i = 0;; i++) {
		if (std::to_string(i).find("666") != -1) {
			n--;
			if (n == 0) {
				std::cout << i;
				break;
			}
		}
	}
}