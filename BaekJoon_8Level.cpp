#include<iostream>
#include<string>

//// 11654번
//int main() {
//	char n;
//	std::cin >> n;
//	if (n >= 'a' && n <= 'z') {
//		std::cout << (int)n;
//	}
//	else if (n >= 'A' && n <= 'Z') {
//		std::cout << (int)n;
//	}
//	else if (n >= '0' && n <= '9') {
//		std::cout << (int)n;
//	}
//}

////11720번
//int main() {
//	int n, sum = 0;
//	std::string str;
//	std::cin >> n;
//	std::cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		sum += str[i] - '0';
//	}
//	std::cout << sum;
//}

////10809번
//int main() {
//	std::string str;
//	int arr[26];
//	for (int i = 0; i < 26; i++)
//		arr[i] = -1;
//	std::cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		if(arr[str[i] - 'a'] == -1)
//			arr[str[i] - 'a'] = i;
//	}
//	for (int i = 0; i < 26; i++) {
//		std::cout << arr[i] << ' ';
//	}
//}

////2675번
//int main() {
//	int t, r;
//	std::string s;
//	std::string temp;
//	std::cin >> t;
//	for (int i = 0; i < t; i++) {
//		temp = {};
//		std::cin >> r >> s;
//
//		for (int j = 0; j < s.length(); j++) {
//			for (int k = 0; k < r; k++) {
//				temp += s[j];
//			}
//		}
//		for (int j = 0; j < temp.length(); j++)
//			std::cout << temp[j];
//		std::cout << '\n';
//	}
//}

//1157번
int main() {
	std::string str;
	std::cin >> str;
	int arr[26] = { 0 };
	int max = 0;
	bool chk;
	char c_max;

	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
		arr[str[i] - 'a'] += 1;
	}

	for (int i = 0; i <26; i++) {
		if (max < arr[i]) {
			max = arr[i];
			c_max = 'a' + i;
			chk = false;
		}
		else if (max == arr[i])
			chk = true;
	}
	if (chk)
		std::cout << '?';
	else
		std::cout << (char)toupper(c_max);
}