#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main()
{
	const time_t now = time(NULL);
	const struct tm* const p = localtime(&now);
	if (p) {
		char buf[256];
		sprintf(buf, "%04d/%02d/%02d %02d:%02d:%02d\n"
			, p->tm_year + 1900
			, p->tm_mon  +    1
			, p->tm_mday
			, p->tm_hour
			, p->tm_min
			, p->tm_sec
		);
		OutputDebugStringA(buf);
	}
}
