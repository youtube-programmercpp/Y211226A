#define	_CRT_SECURE_NO_WARNINGS
#include <sstream>
#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
int main()
{
	const time_t now = time(NULL);
	const struct tm* const p = localtime(&now);
	if (p) {
		std::ostringstream stm;
		stm << std::setfill('0')
			<< std::setw(4) << p->tm_year + 1900 << '/'
			<< std::setw(2) << p->tm_mon  +    1 << '/'
			<< std::setw(2) << p->tm_mday        << ' '
			<< std::setw(2) << p->tm_hour        << ':'
			<< std::setw(2) << p->tm_min         << ':'
			<< std::setw(2) << p->tm_sec         
			<< '\n';
		OutputDebugStringA(stm.str().c_str());
	}
}
