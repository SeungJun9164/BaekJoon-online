#include<iostream>

//2739번
int main() {
	int n;
	std::cin >> n;
	for (int i = 1; i < 10; i++)
		std::cout << n << " * " << i << " = " << n * i << std::endl;
}

//10950번
int main() {
	int n, a, b;
	std::cin >> n;
	int* sum = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		sum[i] = a + b;
	}
	for (int i = 0; i < n; i++)
		std::cout << sum[i] << std::endl;
	delete[] sum;
}

//8393번
int main() {
	int n, sum = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		sum += i + 1;
	}
	std::cout << sum;
}

//15552번
int main() {
	int t, a, b;

	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);

	std::cin >> t;
	int* temp = new int[t];
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		temp[i] = a + b;
	}
	for (int i = 0; i < t; i++)
		std::cout << temp[i] << '\n';
	delete[] temp;
}

//2741번
int main() {
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cout << i << '\n';
	}
}

//2742번
int main() {
	int n;
	std::cin >> n;
	for (int i = n; i > 0; i--) {
		std::cout << i << '\n';
	}
}

//11021번
int main() {
	int t, a, b;

	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);

	std::cin >> t;
	int* temp = new int[t];
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		temp[i] = a + b;
	}
	for (int i = 0; i < t; i++)
		std::cout << "Case #" << i + 1 << ": " << temp[i] << '\n';
	delete[] temp;
}

//11022번
int main() {
	int t, a, b;

	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);

	std::cin >> t;
	int* temp = new int[t];
	int* a_temp = new int[t];
	int* b_temp = new int[t];
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		temp[i] = a + b;
		a_temp[i] = a;
		b_temp[i] = b;
	}
	for (int i = 0; i < t; i++)
		std::cout << "Case #" << i + 1 << ": " <<
		a_temp[i] << " + " << b_temp[i] << " = " << temp[i] << '\n';
	delete[] temp, a_temp, b_temp;
}

//2438번
int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = -1; j < i; j++)
			std::cout << '*';
		std::cout << '\n';
	}
}

//2439번
int main() {
	int n;
	std::cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (j == (i - 1)) {
				for(int k=j;k<n;k++)
					std::cout << '*';
			}
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}
}

//10871번
int main() {
	int n, x;
	std::cin >> n >> x;

	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);

	int a;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		if (a < x) {
			std::cout << a << " ";
		}
	}
}
