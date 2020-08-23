#include<iostream>

// 15649번
int n, m;
int arr[9] = { 0 };
bool chk[9] = { false };
void dfs(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) 
			std::cout << arr[i] << ' ';
		std::cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (chk[i] == false) {
			arr[cnt] = i;
			chk[i] = true;
			dfs(cnt + 1);
			chk[i] = false;

		}
	}
}
int main() {	
	std::cin >> n >> m;	
	dfs(0);
}

//15650번
int n, m;
int arr[9] = { 0 };
bool chk[9] = { false };
void dfs(int idx, int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
		return;
	}
	for (int i = idx; i <= n; i++) {
		if (chk[i] == false) {
			arr[cnt] = i;
			chk[i] = true;
			dfs(i + 1, cnt + 1);
			chk[i] = false;

		}
	}
}
int main() {
	std::cin >> n >> m;
	dfs(1, 0);
}

//15651번
int n, m;
int arr[9] = { 0 };
bool chk[9] = { false };
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) 
			std::cout << arr[i] << ' ';
		std::cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		arr[cnt] = i;
		chk[i] = true;
		dfs(cnt + 1);
		chk[i] = false;
	}
}
int main() {	
	std::cin >> n >> m;	
	dfs(0);
}

//15652번
int n, m;
int arr[9] = { 0 };
bool chk[9] = { false };
void dfs(int idx, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) 
			std::cout << arr[i] << ' ';
		std::cout << '\n';
		return;
	}
	for (int i = idx; i <= n; i++) {
		arr[cnt] = i;
		chk[i] = true;
		dfs(i, cnt + 1);
		chk[i] = false;
	}
}
int main() {	
	std::cin >> n >> m;	
	dfs(1, 0);
}