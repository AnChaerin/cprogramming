#include <stdio.h>

enum days{SUN,MON,TUE,WED,THU,FRI,SAT};


const char *days_names[]={"sunday","monday","tuesday","wednesday","thusday","friday","saturday"};

int main(void) {

	enum days d;
	d = WED;
	printf("%d��° ������ %s�Դϴ�\n", d, days_names[d]);

	return 0;
}


