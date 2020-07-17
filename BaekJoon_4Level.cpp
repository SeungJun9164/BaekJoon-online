#include <iostream>

////10952¹ø
//int main() {
//	while (1) {
//		int a, b;
//		std::cin >> a >> b;
//		if (a == 0 && b == 0)
//			break;
//		else
//			std::cout << a + b << std::endl;
//	}
//}
//
////10951¹ø
//int main() {
//	int a, b;
//	while (std::cin>>a>>b) 
//		std::cout << a + b << std::endl;
//}

//1110¹ø
int main() {
    int n, sum, x = 0, y, cnt = 0;
    std::cin >> n;
    y = n;
    while (1)
    {
        sum = (y / 10) + (y % 10);
        x = (y % 10) * 10 + (sum % 10);
        cnt++;
        y = x;
        if (y == n)
            break;
    }
    std::cout << cnt;
}