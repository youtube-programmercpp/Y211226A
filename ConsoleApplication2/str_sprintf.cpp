#define	_CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <cstdio>
#include <string>

std::string str_sprintf(const std::tm& r)
{
	char buf[sizeof "yyyy/mm/dd HH:MM:SS"];
	return { buf, static_cast<size_t>(std::sprintf
	( buf
	, "%04d/%02d/%02d %02d:%02d:%02d"
	, r.tm_year + 1900
	, r.tm_mon  +    1
	, r.tm_mday
	, r.tm_hour
	, r.tm_min 
	, r.tm_sec 
	))};
}
