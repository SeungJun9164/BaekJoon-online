#include <iostream>
 //2557��
/*int main() {
	std::cout << "Hello World!";
}*/

//10718��
/*int main() {
	std::cout << "����ģ�� ��������\n" << "����ģ�� ��������";
}*/

//10171��
/*int main() {
	std::cout << "\\    /\\" << std::endl;
	std::cout << " )  ( ')" << std::endl;
	std::cout << "(  /  )" << std::endl;
	std::cout << " \\(__)|" << std::endl;
}*/

//10172��
int main() {
	std::cout << "|\\_/|" << std::endl;
	std::cout << "|q p|   /}" << std::endl;
	std::cout << "( 0 )\"\"\"\\" << std::endl;
	std::cout << "|\"^\"`    |" << std::endl;
	std::cout << "||_/=\\\\__|" << std::endl;
}

//1000��
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b;
}

//1001��
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a - b;
}

//10998��
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a * b;
}

//1008��
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout.precision(10); //�Ҽ��� 10�ڸ����� ǥ���ϰڴ�!
	std::cout << a /(double) b;
}

//10869��
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b << std::endl << a - b << std::endl << a * b
		<< std::endl << a / b << std::endl << a % b;
}

//10430��
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a + b) % c << std::endl << ((a % c) + (b % c)) % c 
		<< std::endl << (a * b) % c << std::endl << ((a % c) * (b % c)) % c;
}

//2558��
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a * (b % 10) << std::endl;
	std::cout << (a * (b % 100 - (b % 10)) / 10) << std::endl;
	std::cout << (a * (b / 100))  << std::endl;
	std::cout << a * b << std::endl;
}