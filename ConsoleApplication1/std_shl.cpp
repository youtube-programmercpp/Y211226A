#include <iostream>
#include <iomanip>
int main()
{
	std::cout << 123 << '\n';
	std::cout << std::setfill('*') << std::setw(6) << 123 << '\n';
	std::cout << 123 << '\n';//��̍s�� setw(6) �͎c���Ă��Ȃ�
	std::cout << std::setw(6) << 123 << '\n';//setfill('*') �͎c��
	std::cout << std::setfill(' ');
	std::cout << std::setw(6) << 123 << '\n';
}
