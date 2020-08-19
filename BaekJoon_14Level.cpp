#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

//// 2750��
//int main() {
//	int n;
//	std::cin >> n;
//	int* num = new int[n];
//	for (int i = 0; i < n; i++)
//		std::cin >> num[i];
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j < n - i; j++) {
//			if (num[j - 1] > num[j]) {
//				int temp = num[j - 1];
//				num[j - 1] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//		std::cout << num[i] << '\n';
//  delete[] num;
//}

//// 2751��
//int main() {
//	int n;
//	std::cin >> n;
//	int* num = new int[n];
//	for (int i = 0; i < n; i++)
//		std::cin >> num[i];
//	std::sort(num, num+n);
//	for (int i = 0; i < n; i++)
//		std::cout << num[i] << '\n';
//	delete[] num;
//}

//// 10989��
//int main() {
//	
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//
//	int n, idx, num[10001] = { 0 };
//	std::cin >> n;
//	for (int i = 0; i < n; i++) {
//		std::cin >> idx;
//		num[idx]++;
//	}
//	for (int i = 0; i < 10001; i++) {
//		if (num[idx] != 0) {
//			for (int j = 0; j < num[i]; j++) {
//				std::cout << i << '\n';
//			}
//		}
//	}
//}

//// 2108��
//int main(){
//	int n, temp, mode = 0, _min = 4000, _max = -4000;
//    double _sum = 0;
//	bool chk = false;
//	std::cin >> n;
//
//	std::vector<int> v(n);
//    std::vector<int> cnt(8001);
//    std::fill(cnt.begin(), cnt.end(), 0);
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> v[i];
//        _sum += v[i];
//        _max = std::max(_max, v[i]);
//        _min = std::min(_min, v[i]);
//    }
//
//	std::cout << (int)std::round(_sum / double(n)) << '\n';
//
//    int idx = 0;
//    int maxidx = 0;
//    for (int i = 0; i < n; i++) {
//        idx = v[i] + 4000;
//        cnt[idx]++;
//        maxidx = std::max(maxidx, cnt[idx]);
//    }
//    int count = 0;
//    int secondMany = 0;
//    for (int i = 0; i < cnt.size(); i++) {
//        if (cnt[i] == maxidx) {
//            count++;
//            secondMany = i - 4000;
//        }
//        if (count == 2) {
//            secondMany = i - 4000;
//            break;
//        }
//    }
//    std::sort(v.begin(), v.end());
//
//    std::cout << v[n / 2] << '\n';
//    std::cout << secondMany << '\n';
//    std::cout << _max - _min << '\n';
//}

//// 1427��
//int main() {
//	int n, idx = 0, num[10];
//	std::cin >> n;
//	while (n != 0) {
//		num[idx] = n % 10;
//		n /= 10;
//		idx++;
//	}
//	for (int i = 0; i < idx; i++) {
//		for (int j = 1; j < idx - i; j++) {
//			if (num[j - 1] < num[j]) {
//				int temp = num[j - 1];
//				num[j - 1] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < idx; i++)
//		std::cout << num[i];
//}

//// 11650��
//int main() {
//	int n, x, y;
//	std::cin >> n;
//	std::vector<std::pair<int, int>> pv(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> pv[i].first >> pv[i].second;
//	}
//	sort(pv.begin(), pv.end());
//	for (int i = 0; i < n; i++) {
//		std::cout << pv[i].first << ' ' << pv[i].second << '\n';
//	}
//}

//// 11651��
//int main() {
//	int n, x, y;
//	std::cin >> n;
//	std::vector<std::pair<int, int>> pv(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> pv[i].second >> pv[i].first;
//	}
//	sort(pv.begin(), pv.end());
//	for (int i = 0; i < n; i++) {
//		std::cout << pv[i].second << ' ' << pv[i].first << '\n';
//	}
//}

////1181��
//int main() {
//	int n;
//	std::string str;
//	std::cin >> n;
//	std::vector<std::pair<int, std::string>> pv(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> str;
//		pv[i].first = str.length();
//		pv[i].second = str;
//	}
//	std::sort(pv.begin(), pv.end());
//	for (int i = 0; i < n; i++) {
//		if (i != 0 && pv[i - 1] == pv[i]) {
//			pv[i - 1].second.erase();
//			i--;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if(pv[i].second != "")
//			std::cout << pv[i].second << '\n';
//	}
//}

// 10814��
bool cmp(std::pair<int, std::string> a, std::pair<int, std::string> b) {
	return a.first < b.first;
}
int main() {
	int n;
	std::cin >> n;
	std::vector<std::pair<int, std::string>> pv(n);
	for (int i = 0; i < n; i++) {
		std::cin >> pv[i].first >> pv[i].second;
	}
	std::stable_sort(pv.begin(), pv.end(), cmp);

	for (int i = 0; i < n; i++) {
		std::cout << pv[i].first << ' ' << pv[i].second << '\n';
	}
}