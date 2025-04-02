#pragma once
#include <iostream>
#include <string>
#include "clsPerson.h"
#include "clsString.h"
#include <vector>
#include <fstream>

using namespace std;

class clsBankClient : public clsPerson
{
private:

	enum enMode { EmptyMode = 0, UpdateMode = 1 };
	enMode _Mode;

	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;

public:

	clsBankClient(enMode Mode, string FirstName, string LastName, string Email, string Phone, string AccountNumber,
		string PinCode, float AccountBalance) :
		clsPerson(FirstName, LastName, Email, Phone)
	{
		_Mode = Mode;
		_AccountNumber = AccountNumber;
		_PinCode = PinCode;
		_AccountBalance = AccountBalance;
	}

	bool IsEmpty()
	{
		return (_Mode == enMode::EmptyMode);
	}

	//ReadOnly Property
	string AccountNumber()
	{
		return _AccountNumber;
	}

	//Property Set
	void SetPinCode(string PinCode)
	{
		_PinCode = Email;
	}

	//Property Get
	string GetPinCode()
	{
		return _PinCode;
	}

	__declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode;

	//Property Set
	void SetAccountBalance(float AccountBalance)
	{
		_AccountBalance = AccountBalance;
	}

	//Property Get
	float GetAccountBalance()
	{
		return _AccountBalance;
	}

	__declspec(property(get = GetAccountBalance, put = SetAccountBalance)) string AccountBalance;

	void Print()
	{
		cout << "\nClient Card:";
		cout << "\n___________________";
		cout << "\nFirstName   : " << FirstName;
		cout << "\nLastName    : " << LastName;
		cout << "\nFull Name   : " << FullName();
		cout << "\nEmail       : " << Email;
		cout << "\nPhone       : " << Phone;
		cout << "\nAcc. Number : " << _AccountNumber;
		cout << "\nPassword    : " << _PinCode;
		cout << "\nBalance     : " << _AccountBalance;
		cout << "\n___________________\n";

	}
};
