#include <chrono>
#include <ctime>
#include <iostream>

using namespace std;

typedef std::chrono::system_clock Calendar;

int main() {
    auto now = Calendar::now();
    std::time_t now_c = Calendar::to_time_t(now);
    struct tm *parts = std::localtime(&now_c);
    int year        = parts->tm_year + 1900;
    int month       = 1    + parts->tm_mon;
    int daysOfMonth = 31;

	switch(month) {
	    case 4:
	    case 6:
	    case 9:
	    case 11:
	    	daysOfMonth = 30;
	    	break;
	    case 2:
	    	daysOfMonth = 28;
	    	if((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
    			daysOfMonth = 29;
			};
			break;
	};
    printf("This month has %d days.", daysOfMonth);

    return 0;
}
