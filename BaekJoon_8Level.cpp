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

////1157번
//int main() {
//	std::string str;
//	std::cin >> str;
//	int arr[26] = { 0 };
//	int max = 0;
//	bool chk;
//	char c_max;
//
//	for (int i = 0; i < str.length(); i++) {
//		str[i] = tolower(str[i]);
//		arr[str[i] - 'a'] += 1;
//	}
//
//	for (int i = 0; i <26; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//			c_max = 'a' + i;
//			chk = false;
//		}
//		else if (max == arr[i])
//			chk = true;
//	}
//	if (chk)
//		std::cout << '?';
//	else
//		std::cout << (char)toupper(c_max);
//}

////1152번
//int main() {
//	std::string str;
//	int cnt = 0;
//	std::getline(std::cin, str);
//	for (int i = 1; i < str.length(); i++) {
//		if (str[i] == ' ')
//			cnt++;	
//	}
//	if (str[str.length() - 1] == ' ')
//		std::cout << cnt;
//	else
//		std::cout << cnt + 1;
//}

////2908번
//int main() {
//	int a, b;
//	std::cin >> a >> b;
//	int a_temp[3], b_temp[3];
//	for (int i = 0; i < 3; i++) {
//		a_temp[i] = a % 10;
//		a = a / 10;
//		b_temp[i] = b % 10;
//		b = b / 10;
//	}
//	a = a_temp[0] * 100 + a_temp[1] * 10 + a_temp[2];
//	b = b_temp[0] * 100 + b_temp[1] * 10 + b_temp[2];
//
//	if (a > b)
//		std::cout << a;
//	else
//		std::cout << b;
//}

////5622번
//int main() {
//	std::string str;
//	int time = 0;
//	std::cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
//			time += 3;
//		else if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
//			time += 4;
//		else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
//			time += 5;
//		if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
//			time += 6;
//		if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
//			time += 7;
//		if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
//			time += 8;
//		if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
//			time += 9;
//		if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
//			time += 10;
//	}
//	std::cout << time;
//}
////5622번 다른방법
//int main() {
//	std::string str;
//	int time = 0;
//	std::cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		time += (str[i] - 'A') / 3 + 3;
//		if (str[i] == 'S' || str[i] == 'V' || str[i] == 'Y' || str[i] == 'Z')
//			time -= 1;
//	}
//	std::cout << time;
//}

////2941번
//int main() {
//	int cnt = 0;
//	std::string str;
//	std::cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		if (str.substr(i, 3) != "dz=") {
//			if (str.substr(i, 2) == "c=" || str.substr(i, 2) == "c-" ||
//				str.substr(i, 2) == "d-" || str.substr(i, 2) == "lj" ||
//				str.substr(i, 2) == "nj" || str.substr(i, 2) == "s=" ||
//				str.substr(i, 2) == "z=") {
//				cnt++;
//				i++;
//			}
//			else {
//				cnt++;
//			}
//		}
//		else if (str.substr(i, 3) == "dz=") {
//			cnt++;
//			i += 2;
//		}
//	}
//	std::cout << cnt;
//}

//1316번
int main()
{
	std::string str;
	int n;
	bool chk[26] = { false };
	std::cin >> n;
	int cnt = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 26; j++)
			chk[j] = false;

		std::cin >> str;
		chk[str[0] - 'a'] = true;
		for (int j = 1; j < str.size(); j++)
		{
			if (str[j - 1] == str[j])
				continue;
			else if (chk[str[j] - 'a'] == true)
			{
				cnt--;
				break;
			}
			chk[str[j] - 'a'] = true;
		}
	}
	std::cout << cnt;
	return 0;
}