// Demonstration of Non-Inclusive code
#include<boost/algorithm/string.hpp>
#include<iostream>
#include<string>
#include <bits/stdc++.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
	std::string date;
	std::vector< std::string > dateArr;
	//Assuming DD-MM-YYYY date format
	std::cout << "Enter date of purchase: (separated by \"-\")";
	std::cin >> date;

	boost::split( dateArr, date, boost::is_any_of( "-" ) );
	int month = atoi( dateArr[1].c_str() );
	std::cout << "Thanks for the purchase" << std::endl;
	switch( month ) {
    	case 1:  std::cout << "Happy New Year!"; break;
    	case 10: std::cout << "Happy Halloween"; break;
    	case 11: std::cout << "Happy Thanksgiving"; break;
    	case 12: std::cout << "Happy Christmas"; break;
    	default: std::cout << "Good day!\n"; return 1;
	}

	return 0;
}
