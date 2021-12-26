#include <ctime>
#include <format>

std::string str_std_format(const std::tm& r)
{
	return std::format
	( "{:04}/{:02}/{:02} {:02}:{:02}:{:02}"
	, r.tm_year + 1900
	, r.tm_mon  +    1
	, r.tm_mday       
	, r.tm_hour       
	, r.tm_min        
	, r.tm_sec        
	);
}
