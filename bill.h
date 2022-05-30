#pragma once
#include<cstring>
#include<string>
#include<fstream>

ref class bill
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
	int totalBills = 0;
	char** CustomerId = 0;
	char** Month = 0;
	int* RegualrUnits = 0;
	int* PeakUnits = 0;
	char** ReadingDate = 0;
	int* CostofElectricity = 0;
	int* SalesTax = 0;
	int* fixedCHarges = 0;
	int* TotalBIllingAmount = 0;
	char** DueDate = 0;
	char** Status = 0;
	char** PaymentDate = 0;
	int paid_bill = 0;
	int unpaid_bill = 0;
	int paidbill = 0;
	int unpaidbill = 0;
	bill()
	{
		std::string bill;
		std::ifstream fin;
		fin.open("BillingInfo.txt");
		while (!fin.eof())
		{
			getline(fin, bill);
			totalBills++;
		}
		totalBills--;
		
		fin.close();
		CustomerId = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			CustomerId[i] = new char[5];
		}
		Month = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			Month[i] = new char[3];
		}
		RegualrUnits = new int[totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			RegualrUnits[i] = 0;
		}
		PeakUnits = new int[totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			PeakUnits[i] = 0;
		}
		ReadingDate = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			ReadingDate[i] = new char[11];
		}
		CostofElectricity = new int[totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			CostofElectricity[i] = 0;
		}
		SalesTax = new int[totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			SalesTax[i] = 0;
		}
		fixedCHarges = new int[totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			fixedCHarges[i] = 0;
		}
		TotalBIllingAmount = new int[totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			TotalBIllingAmount[i] = 0;
		}
		DueDate = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			DueDate[i] = new char[11];
		}
		Status = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			Status[i] = new char[7];
		}

		PaymentDate = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			PaymentDate[i] = new char[11];
		}
		fin.close();
		fin.open("BillingInfo.txt");
		int i = 0;
		int number = 0;
		int AlternateOfi = 0;
		int digitPlace = 1;
		while (number < totalBills)
		{
			i = 0;
			getline(fin, bill);
			CopyTillComma(CustomerId[number], bill, i);
			i += 2;
			CopyTillComma(Month[number], bill, i);
			i += 2;
			RegualrUnits[number] = CharacterToInteger(&RegualrUnits[number], bill, i);
			i += 2;
			PeakUnits[number] = CharacterToInteger(&PeakUnits[number], bill, i);
			i += 2;
			CopyTillComma(ReadingDate[number], bill, i);
			i += 2;
			CostofElectricity[number] = CharacterToInteger(&CostofElectricity[number], bill, i);
			i += 2;
			SalesTax[number] = CharacterToInteger(&SalesTax[number], bill, i);
			i += 2;
			fixedCHarges[number] = CharacterToInteger(&fixedCHarges[number], bill, i);
			i += 2;
			TotalBIllingAmount[number] = CharacterToInteger(&TotalBIllingAmount[number], bill, i);
			i += 2;
			CopyTillComma(DueDate[number], bill, i);
			i += 2;
			CopyTillComma(Status[number], bill, i);
			i += 2;
			if (strcmp(Status[number], "Unpaid") == 0)
			{
				unpaid_bill = unpaid_bill + TotalBIllingAmount[number];
				unpaidbill++;
			}
			else
			{
				paid_bill = paid_bill + TotalBIllingAmount[number];
				paidbill++;
			}
			StringCopy(PaymentDate[number], bill, i);
			number++;
		}
	}


};

