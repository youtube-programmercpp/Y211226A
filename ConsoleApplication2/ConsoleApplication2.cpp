#define	_CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iostream>

std::string str_sprintf   (const std::tm& r);
std::string str_std_format(const std::tm& r);
std::string str_std_shl   (const std::tm& r);
std::string str_wsprintfA (const std::tm& r);

template<class T>float test(const std::tm& r, const T& fn)
{
	const auto t0 = std::clock();
	for (int i = 0; i < 10000; ++i)
		(void)fn(r);
	return (std::clock() - t0) / static_cast<float>(CLOCKS_PER_SEC);
}
int main()
{
	const auto now = std::time(nullptr);
	if (const auto p = std::localtime(&now)) {
		std::cout << str_sprintf   (*p) << '\n';
		std::cout << str_std_format(*p) << '\n';
		std::cout << str_std_shl   (*p) << '\n';
		std::cout << str_wsprintfA (*p) << '\n';
		const auto time_sprintf    = test(*p, str_sprintf   );
		const auto time_std_format = test(*p, str_std_format);
		const auto time_std_shl    = test(*p, str_std_shl   );
		const auto time_wsprintfA  = test(*p, str_wsprintfA );

		std::cout
			<< "sprintf    : sprintf の " << time_sprintf    / time_sprintf << " 倍" << '\n'
			<< "std::format: sprintf の " << time_std_format / time_sprintf << " 倍" << '\n'
			<< "operator<< : sprintf の " << time_std_shl    / time_sprintf << " 倍" << '\n'
			<< "wsprintfA  : sprintf の " << time_wsprintfA  / time_sprintf << " 倍" << '\n'
			;
	}
}
