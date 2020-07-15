#include <iostream>
 //2557번
/*int main() {
	std::cout << "Hello World!";
}*/

//10718번
/*int main() {
	std::cout << "강한친구 대한육군\n" << "강한친구 대한육군";
}*/

//10171번
/*int main() {
	std::cout << "\\    /\\" << std::endl;
	std::cout << " )  ( ')" << std::endl;
	std::cout << "(  /  )" << std::endl;
	std::cout << " \\(__)|" << std::endl;
}*/

//10172번
int main() {
	std::cout << "|\\_/|" << std::endl;
	std::cout << "|q p|   /}" << std::endl;
	std::cout << "( 0 )\"\"\"\\" << std::endl;
	std::cout << "|\"^\"`    |" << std::endl;
	std::cout << "||_/=\\\\__|" << std::endl;
}

//1000번
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b;
}

//1001번
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a - b;
}

//10998번
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a * b;
}

//1008번
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout.precision(10); //소수점 10자리까지 표시하겠다!
	std::cout << a /(double) b;
}

//10869번
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b << std::endl << a - b << std::endl << a * b
		<< std::endl << a / b << std::endl << a % b;
}

//10430번
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a + b) % c << std::endl << ((a % c) + (b % c)) % c 
		<< std::endl << (a * b) % c << std::endl << ((a % c) * (b % c)) % c;
}

//2558번
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a * (b % 10) << std::endl;
	std::cout << (a * (b % 100 - (b % 10)) / 10) << std::endl;
	std::cout << (a * (b / 100))  << std::endl;
	std::cout << a * b << std::endl;
}
