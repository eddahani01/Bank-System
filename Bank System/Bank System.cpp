// Bank System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsBankClient.h"

int main()
{
	clsBankClient Client1 = clsBankClient::Find("A101");
	Client1.Print();

	clsBankClient Client2 = clsBankClient::Find("A101","1234");
	Client2.Print();

	clsBankClient Client3 = clsBankClient::Find("A101","12345");
	Client3.Print();

	cout << clsBankClient::IsClientExist("A101");
	
	system("pause>0");
	return 0;
}