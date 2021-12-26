#include <ctime>
#include <sstream>
#include <iomanip>

std::string str_std_shl(const std::tm& r)
{
	return (std::ostringstream()
		<< std::setfill('0')
		<< std::setw(4) << r.tm_year + 1900 << '/'
		<< std::setw(2) << r.tm_mon  +    1 << '/'
		<< std::setw(2) << r.tm_mday        << ' '
		<< std::setw(2) << r.tm_hour        << ':'
		<< std::setw(2) << r.tm_min         << ':'
		<< std::setw(2) << r.tm_sec        
		).str();
}
