#include <iostream>
#include <iomanip>
int main()
{
	std::cout << 123 << '\n';
	std::cout << std::setfill('*') << std::setw(6) << 123 << '\n';
	std::cout << 123 << '\n';//上の行の setw(6) は残っていない
	std::cout << std::setw(6) << 123 << '\n';//setfill('*') は残る
	std::cout << std::setfill(' ');
	std::cout << std::setw(6) << 123 << '\n';
}
