#define _CRT_SECURE_NO_WARNINGS

#include "Queue.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	try
	{
		Queue <int> temp(200);


		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		temp.push(timeinfo->tm_year+1900);
		temp.push(timeinfo->tm_mon+1);
		temp.push(timeinfo->tm_mday);
		temp.push(timeinfo->tm_hour);
		temp.push(timeinfo->tm_min);
		temp.push(timeinfo->tm_sec);

		for (;;)
			cout << temp.pop()<<":";

	}
	catch (int & e)
	{
		cout << endl << "error number: " << e << endl;
	}
	cin.get();
	return 0;
}


