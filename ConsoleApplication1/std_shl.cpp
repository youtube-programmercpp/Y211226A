#include <iostream>
#include <iomanip>
int main()
{
	std::cout << 123 << '\n';
	std::cout << std::setfill('*') << std::setw(6) << 123 << '\n';
	std::cout << 123 << '\n';//ã‚Ìs‚Ì setw(6) ‚ÍŽc‚Á‚Ä‚¢‚È‚¢
	std::cout << std::setw(6) << 123 << '\n';//setfill('*') ‚ÍŽc‚é
	std::cout << std::setfill(' ');
	std::cout << std::setw(6) << 123 << '\n';
}
