#pragma once
#include<cstring>
#include<string>
#include<fstream>

ref class Customer
{
public:	static void CopyTillComma(char* destination, std::string source, int& i)
{
	int index = 0;
	for (index = 0; source[i] != ','; i++)
	{
		destination[index] = source[i];
		index++;
	}
	destination[index] = '\0';
}
public:	static void StringCopy(char* destination, std::string source, int& i)
{
	int index = 0;
	for (index = 0; source[i] != '\0'; i++)
	{
		destination[index] = source[i];
		index++;
	}
	destination[index] = '\0';
}
public:	static void StringCopy(char* destination, char* source)
{
	int i = 0;
	for (i = 0; source[i] != '\0'; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
}
public:static int CharacterToInteger(int* destination, std::string source, int& i)
{
	int AlternateOfi = i;
	int digitPlace = 1;
	int result = 0;
	for (; source[i] != ',' && source[i] != '\0'; i++)
	{

	}
	for (int k = i - 1; k >= AlternateOfi; k--)
	{
		result = result + ((static_cast<int>(source[k]) - 48) * digitPlace);
		digitPlace = digitPlace * 10;
	}
	return result;
}
public:
	int totalCustomers = 0;
	char** CustomerId = 0;
	char** CustomerCNIC = 0;
	char** CustomerName = 0;
	char** address = 0;
	char** CustomerPhoneNo = 0;
	char** CustomerType = 0;
	char** MeterType = 0;
	char** ConnectionDate = 0;
	int* RegularUnits = 0;
	int* PeakUnits = 0;
	char** Status = 0;
	Customer()
	{
		std::string customer;
		std:: ifstream fin;
		fin.open("CustomerInfo.txt");
		while (!fin.eof())
		{
			getline(fin, customer);
			totalCustomers++;
		}
		fin.close();
		totalCustomers--;
		CustomerId = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			CustomerId[i] = new char[5];
		}
		CustomerCNIC = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			CustomerCNIC[i] = new char[14];
		}
		CustomerName = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			CustomerName[i] = new char[25];
		}
		address = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			address[i] = new char[35];
		}
		CustomerPhoneNo = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			CustomerPhoneNo[i] = new char[13];
		}
		CustomerType = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			CustomerType[i] = new char[12];
		}
		MeterType = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			MeterType[i] = new char[2];
		}
		ConnectionDate = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			ConnectionDate[i] = new char[11];
		}
		RegularUnits = new int[totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			RegularUnits[i] = 0;
		}
		PeakUnits = new int[totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			PeakUnits[i] = 0;
		}
		Status = new char* [totalCustomers];
		for (int i = 0; i < totalCustomers; i++)
		{
			Status[i] = new char[7];
		}
		fin.open("CustomerInfo.txt");

		int i = 0;
		int index = 0;
		int number = 0;
		while (number < totalCustomers)
		{
			getline(fin, customer);
			i = 0;
			CopyTillComma(CustomerId[number], customer, i);
			i += 2;
			CopyTillComma(CustomerCNIC[number], customer, i);
			i += 2;
			CopyTillComma(CustomerName[number], customer, i);
			i += 2;
			CopyTillComma(address[number], customer, i);
			i += 2;
			CopyTillComma(CustomerPhoneNo[number], customer, i);
			i += 2;
			CopyTillComma(CustomerType[number], customer, i);
			i += 2;
			CopyTillComma(MeterType[number], customer, i);
			i += 2;
			CopyTillComma(ConnectionDate[number], customer, i);
			i += 2;
			RegularUnits[number] = CharacterToInteger(&RegularUnits[number], customer, i);
			i += 2;
			PeakUnits[number] = CharacterToInteger(&PeakUnits[number], customer, i);
			i += 2;
			StringCopy(Status[number], customer, i);
			number++;
		}
		fin.close();
	}

};




