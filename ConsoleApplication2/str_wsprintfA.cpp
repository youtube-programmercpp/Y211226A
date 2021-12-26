#define	_CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <string>
#include <Windows.h>

std::string str_wsprintfA(const std::tm& r)
{
	char buf[sizeof "yyyy/mm/dd HH:MM:SS"];
	return { buf, static_cast<size_t>(::wsprintfA
	( buf
	, "%04d/%02d/%02d %02d:%02d:%02d"
	, r.tm_year + 1900
	, r.tm_mon  +    1
	, r.tm_mday
	, r.tm_hour
	, r.tm_min
	, r.tm_sec
	)) };
}
