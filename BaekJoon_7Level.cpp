#include<iostream>
#include<vector>

std::vector<int> sum(std::vector<int> &a) {
	int n, x, plus = 0, std::vector<int> _sum;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> x;
		a.push_back(x);
		plus += a.at(i);
	}
	_sum.push_back(plus);
	return _sum;
};

int main() {
	long sum(std::vector<int> & a);
	std::cout << sum;
}
