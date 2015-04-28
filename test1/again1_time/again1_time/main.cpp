#include "time.h"
#include <iostream>
using namespace std;
int main(){
	Time wakeUp(6,45,0);
	const Time noon(12,0,0);
	wakeUp.setHour(18);
	//noon.setHour(12);
	wakeUp.getHour();
	int m = noon.getMinute();
	cout << m << endl;
	noon.printUniversal();
	//noon.printStandard();
}