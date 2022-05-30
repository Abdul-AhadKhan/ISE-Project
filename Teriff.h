#pragma once
#include<cstring>
#include<string>
#include<fstream>

ref class Teriff
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
	int* MeterType = 0;
	int* RegularUnitPrice = 0;
	int* PeakUnitPrice = 0;
	int* TaxPerecent = 0;
	int* FixedCharges = 0;
	Teriff()
	{
		MeterType = new int[4];
		for (int i = 0; i < 4; i++)
		{
			MeterType[i] = 0;
		}
		RegularUnitPrice = new int[4];
		for (int i = 0; i < 4; i++)
		{
			RegularUnitPrice[i] = 0;
		}
		PeakUnitPrice = new int[4];
		for (int i = 0; i < 4; i++)
		{
			PeakUnitPrice[i] = 0;
		}
		TaxPerecent = new int[4];
		for (int i = 0; i < 4; i++)
		{
			TaxPerecent[i] = 0;
		}
		FixedCharges = new int[4];
		for (int i = 0; i < 4; i++)
		{
			FixedCharges[i] = 0;
		}
		std::ifstream fin;
		fin.open("TarrifTaxInfo.txt");
		int number = 0;
		std::string Tarrif;
		int i = 0;
		while (number < 4)
		{
			i = 0;
			getline(fin, Tarrif);
			MeterType[number] = CharacterToInteger(&MeterType[number], Tarrif, i);
			i += 2;
			RegularUnitPrice[number] = CharacterToInteger(&RegularUnitPrice[number], Tarrif, i);
			i += 2;
			PeakUnitPrice[number] = CharacterToInteger(&PeakUnitPrice[number], Tarrif, i);
			i += 2;
			TaxPerecent[number] = CharacterToInteger(&TaxPerecent[number], Tarrif, i);
			i += 2;
			FixedCharges[number] = CharacterToInteger(&FixedCharges[number], Tarrif, i);
			number++;
		}
		fin.close();
	}
};

