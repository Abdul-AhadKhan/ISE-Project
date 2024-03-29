#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;
void CopyTillComma(char* destination, string source, int& i)
{
	int index = 0;
	for (index = 0; source[i] != ','; i++)
	{
		destination[index] = source[i];
		index++;
	}
	destination[index] = '\0';
}
void StringCopy(char* destination, string source, int& i)
{
	int index = 0;
	for (index = 0; source[i] != '\0'; i++)
	{
		destination[index] = source[i];
		index++;
	}
	destination[index] = '\0';
}
void StringCopy(char* destination, char* source)
{
	int i = 0;
	for (i = 0; source[i] != '\0'; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
}
int CharacterToInteger(int* destination, string source, int& i)
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

class Bill {
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
	Bill()
	{
		string bill;
		ifstream fin;
		fin.open("BillingInfo.txt");
		while (!fin.eof())
		{
			getline(fin, bill);
			totalBills++;
		}
		totalBills--;
		cout << totalBills << endl;
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
	void showtotalbills()
	{
		cout << "\t\t\tBills report\n\t\t\tTotal unpaid bills: " << unpaidbill;
		cout << "\n\t\t\tTotal Unpaid amount :  " << unpaid_bill << endl;
		cout << "\t\t\tTotal paid bills: " << paidbill;
		cout << "\n\t\t\tTotal Paid amount :  " << paid_bill << endl;
	}
};


class Customer {
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
		string customer;
		ifstream fin;
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
	bool ReviewBill()
	{
		char Id[5];
		char CNIC[14];
		char metertype[2];
		bool check = false;
		int CurrentCustomer = 0;
		int CurrentBill = 0;
		Bill B1;
		cout << "\n\t\t\tEnter the Customer Id: ";
		cin.getline(Id, 5);
		cout << "\n\t\t\tEnter your CNIC: ";
		cin.getline(CNIC, 14);
		cout << "\n\t\t\tEnter the Meter Type: ";
		cin.getline(metertype, 2);
		for (int i = 0; i < totalCustomers; i++)
		{
			if (strcmp(CustomerId[i], Id) == 0)
			{
				if (strcmp(MeterType[i], metertype) == 0)
				{
					CurrentCustomer = i;
					check = true;
				}

			}
		}
		if (!check)
		{
			return false;
		}
		for (int i = 0; i < B1.totalBills; i++)
		{
			if (strcmp(B1.CustomerId[i], CustomerId[CurrentCustomer]) == 0)
			{
				CurrentBill = i;
			}
		}
		cout << "\n\n\n";
		cout << " Name: " << CustomerName[CurrentCustomer] << "\n CNIC: " << CustomerCNIC[CurrentCustomer] << " \n Id: " << CustomerId[CurrentCustomer] << "\n Addres: " << address[CurrentCustomer];
		cout << "\n Phone Number: " << CustomerPhoneNo[CurrentCustomer] << "\n Regular Reading: " << B1.RegualrUnits[CurrentBill] << "\n Peak Units: " << B1.PeakUnits[CurrentBill] << "\n Total Bill: " << B1.TotalBIllingAmount[CurrentBill];
		cout << "\n Sales Tax: " << B1.SalesTax[CurrentBill] << "\n Status: " << B1.Status[CurrentBill] << "\n Due Date: " << B1.DueDate[CurrentBill] << endl;
		return true;
	}
	bool CheckForCustomer(char* Id, char* CNIC)
	{
		for (int i = 0; i < totalCustomers; i++)
		{
			if (strcmp(Id, CustomerId[i]) == 0)
			{
				if (strcmp(CustomerCNIC[i], CNIC) == 0)
				{
					return true;
				}
			}
		}
		return false;
	}
};



class TarrifTax {
public:
	int* MeterType = 0;
	int* RegularUnitPrice = 0;
	int* PeakUnitPrice = 0;
	int* TaxPerecent = 0;
	int* FixedCharges = 0;
	TarrifTax()
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
		ifstream fin;
		fin.open("TarrifTaxInfo.txt");
		int number = 0;
		string Tarrif;
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
	bool UpdateTarrif()
	{
		char customertype;
		int Meter = 0;
		cout << "\n\t\t\tSingle Phase(1)";
		cout << "\n\t\t\tThree Phse Meter(3)";
		cout << "\n\t\t\tPress number for the corresponding Meter Connection: ";
		cin >> Meter;
		while (Meter != 1 && Meter != 3)
		{
			if (Meter != 1 && Meter != 3)
			{
				cout << "\t\t\tInvalid " << endl;
			}
			cout << "For Single Phase Meter Press 1 \n For Three Phase Meter Press 3 \n";
			cin >> Meter;
		}
		if (Meter == 1)
		{
			cout << "\n\t\t\tPress \"C\" for Commercial: ";
			cout << "\n\t\t\tPress\"D\" for Domestic: ";
			cout << "\n\t\t\t ";
			cin >> customertype;
			while (customertype != 'D' && customertype != 'd' && customertype != 'C' && customertype != 'c')
			{
				if (customertype != 'D' && customertype != 'd' && customertype != 'C' && customertype != 'c')
				{
					cout << "\t\t\tInvalid " << endl;
				}
				cout << "\n\t\t\tPress \"C\" for Commercial: ";
				cout << "\n\t\t\tPress\"D\" for Domestic: ";
				cout << "\n\t\t\t ";
				cin >> customertype;
			}
			if (customertype == 'C' || customertype == 'c')
			{
				cout << "\n\t\t\tEnter the Regular Uit Price: ";
				cin >> RegularUnitPrice[1];
				cout << "\n\t\t\tEnter the Fixed Charges: ";
				cin >> FixedCharges[1];
				cout << "\n\t\t\tEnter the Sales Tax: ";
				cin >> TaxPerecent[1];
			}
			else if (customertype == 'D' || customertype == 'd')
			{
				cout << "\n\t\t\tEnter the Regular Uit Price: ";
				cin >> RegularUnitPrice[0];
				cout << "\n\t\t\tEnter the Fixed Charges: ";
				cin >> FixedCharges[0];
				cout << "\n\t\t\tEnter the Sales Tax: ";
				cin >> TaxPerecent[0];
			}
		}
		else if (Meter == 3)
		{
			cout << "\n\t\t\tPress \"C\" for Commercial: ";
			cout << "\n\t\t\tPress\"D\" for Domestic: ";
			cout << "\n\t\t\t ";
			cin >> customertype;
			while (customertype != 'D' && customertype != 'd' && customertype != 'C' && customertype != 'c')
			{
				if (customertype != 'D' && customertype != 'd' && customertype != 'C' && customertype != 'c')
				{
					cout << "\t\t\tInvalid " << endl;
				}
				cout << "\n\t\t\tPress \"C\" for Commercial: ";
				cout << "\n\t\t\tPress\"D\" for Domestic: ";
				cout << "\n\t\t\t ";
				cin >> customertype;
			}
			if (customertype == 'C' || customertype == 'c')
			{
				cout << "\n\t\t\tEnter the Regular Uit Price: ";
				cin >> RegularUnitPrice[3];
				cout << "\n\t\t\tEnter the Peak Unit Price: ";
				cin >> PeakUnitPrice[3];
				cout << "\n\t\t\tEnter the Fixed Charges: ";
				cin >> FixedCharges[3];
				cout << "\n\t\t\tEnter the Sales Tax: ";
				cin >> TaxPerecent[3];
			}
			else if (customertype == 'D' || customertype == 'd')
			{
				cout << "\n\t\t\tEnter the Regular Uit Price: ";
				cin >> RegularUnitPrice[2];
				cout << "\n\t\t\tEnter the Peak Unit Price: ";
				cin >> PeakUnitPrice[2];
				cout << "\n\t\t\tEnter the Fixed Charges: ";
				cin >> FixedCharges[2];
				cout << "\n\t\t\tEnter the Sales Tax: ";
				cin >> TaxPerecent[2];
			}
		}
		ofstream fout;
		fout.open("TarrifTaxInfo.txt");
		for (int i = 0; i < 4; i++)
		{
			fout << MeterType[i] << ", " << RegularUnitPrice[i] << ", " << PeakUnitPrice[i] << ", " << TaxPerecent[i] << ", " << FixedCharges[i] << endl;
		}
		fout.close();
		return true;
	}
};



class Employee {
	char** Password = 0;
	char** Username = 0;
	char** PhoneNumber = 0;
	int totalEmployees = 0;
public:
	Employee()
	{
		int count = 0;
		ifstream fin;
		fin.open("Employee.txt");
		string employee;
		while (!fin.eof())
		{
			getline(fin, employee);
			count++;
		}
		count--;
		totalEmployees = count;
		Password = new char* [count];
		Username = new char* [count];
		PhoneNumber = new char* [count];
		for (int i = 0; i < count; i++)
		{
			Password[i] = new char[11];
		}
		for (int i = 0; i < count; i++)
		{
			Username[i] = new char[25];
		}
		for (int i = 0; i < count; i++)
		{
			PhoneNumber[i] = new char[13];
		}
		fin.close();
		int number = 0, i = 0;
		fin.open("Employee.txt");
		while (number < totalEmployees)
		{
			i = 0;
			getline(fin, employee);
			CopyTillComma(Username[number], employee, i);
			i += 2;
			CopyTillComma(Password[number], employee, i);
			i += 2;
			StringCopy(PhoneNumber[number], employee, i);
			number++;
		}
		fin.close();
	}
	bool checkEmployee(char* name, char* password)
	{
		bool check = false;
		for (int i = 0; i < totalEmployees; i++)
		{
			if (strcmp(name, Username[i]) == 0)
			{
				if (strcmp(password, Password[i]) == 0)
				{
					check = true;
					return check;
				}
				else
				{
					cout << "Incorrect Password " << endl;
					check = false;
					return check;
				}
			}
		}
		return check;
	}
	bool ChangePassword(char* name, char* password, char* newpassword)
	{
		bool check = false;
		for (int i = 0; i < totalEmployees; i++)
		{
			if (strcmp(name, Username[i]) == 0)
			{
				if (strcmp(password, Password[i]) == 0)
				{
					check = true;
					int k = 0;
					for (k = 0; newpassword[k] != '\0'; k++)
					{
						Password[i][k] = newpassword[k];
					}
					Password[i][k] = '\0';
					ofstream fout;
					fout.open("Employee.txt");
					for (k = 0; k < totalEmployees; k++)
					{
						fout << Username[k] << ", " << Password[k] << ", " << PhoneNumber[k] << endl;
					}
					fout.close();
					return true;
				}
				else
				{
					check = false;
				}
			}
		}
		if (!check)
		{
			return false;
		}
	}
	bool UpdateBillInfo()
	{
		Customer C1;
		Bill B1;
		TarrifTax T1;
		ofstream fout;

		char Id[5];
		int ReadingRegular = 0;
		int ReadingPeak = 0;
		int day = 0;
		int month = 0;
		int year = 0;
		int due_day = 0;
		int due_month = 0;
		int due_year = 0;
		char status[] = "Unpaid";
		bool check = false;

		cout << "Enter the Customer Id: ";
		cin.getline(Id, 5);
		int currentCustomer = 0;
		int CurrentBill = 0;
		for (int i = 0; i < C1.totalCustomers; i++)
		{
			if (strcmp(C1.CustomerId[i], Id) == 0)
			{
				check = true;
				currentCustomer = i;
			}
		}
		if (check)
		{
			for (int i = 0; i < B1.totalBills; i++)
			{
				if (strcmp(B1.CustomerId[i], C1.CustomerId[currentCustomer]) == 0)
				{
					CurrentBill = i;
				}
			}
		}
		if (!check)
		{
			cout << "\n\t\t\tNo customer with this Id exists " << endl;
			return false;
		}
		if (C1.MeterType[currentCustomer][0] == '1')
		{
			cout << "\n\t\t\tEnter the current reading ";
			cin >> ReadingRegular;
			cin.ignore();
			B1.RegualrUnits[CurrentBill] = ReadingRegular;
			if (C1.CustomerType[currentCustomer][0] == 'D' || C1.CustomerType[currentCustomer][0] == 'd')
			{
				B1.CostofElectricity[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[0]);
				B1.TotalBIllingAmount[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[0]) + T1.FixedCharges[0];
				B1.SalesTax[CurrentBill] = (T1.TaxPerecent[0] * B1.TotalBIllingAmount[CurrentBill]) / 100;
				B1.TotalBIllingAmount[CurrentBill] = B1.TotalBIllingAmount[CurrentBill] + ((T1.TaxPerecent[0] * B1.TotalBIllingAmount[CurrentBill]) / 100);
				B1.fixedCHarges[CurrentBill] = T1.FixedCharges[0];
			}
			else
			{
				B1.CostofElectricity[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[1]);
				B1.TotalBIllingAmount[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[1]) + T1.FixedCharges[1];
				B1.SalesTax[CurrentBill] = (T1.TaxPerecent[1] * B1.TotalBIllingAmount[CurrentBill]) / 100;
				B1.TotalBIllingAmount[CurrentBill] = B1.TotalBIllingAmount[CurrentBill] + ((T1.TaxPerecent[1] * B1.TotalBIllingAmount[CurrentBill]) / 100);
				B1.fixedCHarges[CurrentBill] = T1.FixedCharges[1];
			}
		}
		else
		{
			cout << "\n\t\t\tEnter the current reading ";
			cin >> ReadingRegular;
			cin.ignore();
			B1.RegualrUnits[CurrentBill] = ReadingRegular;
			cout << "\n\t\t\tEnter the Peak Reading ";
			cin >> ReadingPeak;
			cin.ignore();
			B1.PeakUnits[CurrentBill] = ReadingPeak;
			if (C1.CustomerType[currentCustomer][0] == 'd' || C1.CustomerType[currentCustomer][0] == 'D')
			{
				B1.CostofElectricity[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[2]) + ((B1.PeakUnits[CurrentBill] - C1.PeakUnits[currentCustomer]) * T1.PeakUnitPrice[2]);
				B1.TotalBIllingAmount[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[2]) + ((B1.PeakUnits[CurrentBill] - C1.PeakUnits[currentCustomer]) * T1.PeakUnitPrice[2]) + T1.FixedCharges[2];
				B1.SalesTax[CurrentBill] = ((T1.TaxPerecent[2] * B1.TotalBIllingAmount[CurrentBill]) / 100);
				B1.TotalBIllingAmount[CurrentBill] = B1.TotalBIllingAmount[CurrentBill] + ((T1.TaxPerecent[2] * B1.TotalBIllingAmount[CurrentBill]) / 100);
				B1.fixedCHarges[CurrentBill] = T1.FixedCharges[2];
			}
			else
			{
				B1.CostofElectricity[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[3]) + ((B1.PeakUnits[currentCustomer] - C1.PeakUnits[CurrentBill]) * T1.PeakUnitPrice[3]);
				B1.TotalBIllingAmount[CurrentBill] = ((B1.RegualrUnits[CurrentBill] - C1.RegularUnits[currentCustomer]) * T1.RegularUnitPrice[3]) + ((B1.PeakUnits[CurrentBill] - C1.PeakUnits[currentCustomer]) * T1.PeakUnitPrice[3]) + T1.FixedCharges[3];
				B1.SalesTax[CurrentBill] = ((T1.TaxPerecent[3] * B1.TotalBIllingAmount[CurrentBill]) / 100);
				B1.TotalBIllingAmount[CurrentBill] = B1.TotalBIllingAmount[CurrentBill] + ((T1.TaxPerecent[3] * B1.TotalBIllingAmount[CurrentBill]) / 100);
				B1.fixedCHarges[CurrentBill] = T1.FixedCharges[3];
			}
		}
		cout << "\n\t\t\tEnter the reading day: ";
		cin >> day;
		cin.ignore();
		cout << "\n\t\t\tEnter the month: ";
		cin >> month;
		cin.ignore();
		cout << "\n\t\t\tEnter the year: ";
		cin >> year;
		cin.ignore();
		due_day = day;
		due_month = month;
		due_year = year;
		due_day += 7;
		if (due_day > 30)
		{
			due_day = ((due_day + 7) - 30);
			due_month += 1;
			if (due_month > 12)
			{
				due_year++;
			}
		}
		StringCopy(B1.Status[CurrentBill], status);
		fout.open("BillingInfo.txt", ios::app);
		fout << B1.CustomerId[CurrentBill] << ", " << month << ", " << ReadingRegular << ", " << ReadingPeak << ", " << day << "/" << month << "/" << year << ", ";
		fout << B1.CostofElectricity[CurrentBill] << ", " << B1.SalesTax[CurrentBill] << ", " << B1.fixedCHarges[CurrentBill] << ", " << B1.TotalBIllingAmount[CurrentBill] << ", ";
		fout << due_day << "/" << due_month << "/" << due_year << ", " << B1.Status[CurrentBill] << ", 00/00/0000" << endl;
		cout << B1.TotalBIllingAmount[CurrentBill];
		return true;
	}
	bool ReceiveBill()
	{
		ofstream fout;
		Customer C1;
		Bill B1;

		char Id[5];
		bool check = false;
		int CurrentCustomer = 0;
		int CurrentBill = 0;
		char status[] = "Paid";
		char date[11];
		cout << "Enter the Id of the customer ";
		cin.getline(Id, 5);
		for (int i = 0; i < C1.totalCustomers; i++)
		{
			if (strcmp(C1.CustomerId[i], Id) == 0)
			{
				CurrentCustomer = i;
				check = true;
				break;
			}
		}
		if (!check)
		{

			return false;
		}
		for (int i = 0; i < B1.totalBills; i++)
		{
			if (strcmp(B1.CustomerId[i], C1.CustomerId[CurrentCustomer]) == 0)
			{
				CurrentBill = i;
			}
		}
		cout << "If you have received payment press 1";
		cin >> check;
		cin.ignore();
		if (check)
		{
			C1.RegularUnits[CurrentCustomer] = B1.RegualrUnits[CurrentBill];
			C1.PeakUnits[CurrentCustomer] = B1.PeakUnits[CurrentBill];
			StringCopy(B1.Status[CurrentBill], status);
			StringCopy(C1.Status[CurrentCustomer], status);
			cout << "Enter the current date(dd/mm/yyyy)";
			cin.getline(date, 11);
			StringCopy(B1.PaymentDate[CurrentBill], date);
			fout.open("CustomerInfo.txt");
			for (int i = 0; i < C1.totalCustomers; i++)
			{
				fout << C1.CustomerId[i] << ", " << C1.CustomerCNIC[i] << ", " << C1.CustomerName[i] << ", " << C1.address[i] << ", " << C1.CustomerPhoneNo[i] << ", "
					<< C1.CustomerType[i] << ", " << C1.MeterType[i] << ", " << C1.ConnectionDate[i] << ", " << C1.RegularUnits[i]
					<< ", " << C1.PeakUnits[i] << ", " << C1.Status[i] << endl;
			}
			fout.close();
			fout.open("BillingInfo.txt");
			for (int i = 0; i < B1.totalBills; i++)
			{
				fout << B1.CustomerId[i] << ", " << B1.Month[i] << ", " << B1.RegualrUnits[i] << ", " << B1.PeakUnits[i] << ", " << B1.ReadingDate[i] << ", ";
				fout << B1.CostofElectricity[i] << ", " << B1.SalesTax[i] << ", " << B1.fixedCHarges[i] << ", " << B1.TotalBIllingAmount[i] << ", ";
				fout << B1.DueDate[i] << ", " << B1.Status[i] << ", " << B1.PaymentDate[i] << endl;
			}
			fout.close();
			return true;
		}
	}
	bool AddCustomer()
	{
		Customer C1;
		char name[30];
		ifstream fin;
		ofstream fout;
		srand(time(0));
		int id = (rand() % 10000) + 1000;
		char cnic[14];
		char address[40];
		char phonenumber[12];
		char customer[11];
		char metertype;
		char connectiondate[11];
		cout << "\n\t\t\tEnter Coustmer cnic : ";
		cin.getline(cnic, 14);
		cout << "\n\t\t\tEnter Coustmer Name : ";
		cin.getline(name, 30);
		cout << "\n\t\t\tEnter Coustmer Address : ";
		cin.getline(address, 30);
		cout << "\n\t\t\tEnter Coustmer Phone No : ";
		cin.getline(phonenumber, 12);
		char customertype;
		int Meter = 0;
		cout << "\n\t\t\tSingle Phase Meter(1)";
		cout << "\n\t\t\tThree Phase Meter(3)";
		cout << "\n\t\t\tPress the number for the correspoding Meter Connection : ";
		cin >> Meter;
		cin.ignore();
		while (Meter != 1 && Meter != 3)
		{
			if (Meter != 1 && Meter != 3)
			{
				cout << "\n\t\t\tInvalid " << endl;
			}
			cout << "\n\t\t\tPress the number for the correspoding Meter Connection : ";
			cin >> Meter;
			cin.ignore();
		}
		cout << "\n\t\t\tPress \"C\" for Commercial";
		cout << "\n\t\t\tPress \"D\" for Domestic";
		cout << "\n\t\t\t ";
		cin >> customertype;
		cin.ignore();
		while (customertype != 'D' && customertype != 'd' && customertype != 'C' && customertype != 'c')
		{
			if (customertype != 'D' && customertype != 'd' && customertype != 'C' && customertype != 'c')
			{
				cout << "\t\t\tInvalid " << endl;
			}
			cout << "\n\t\t\tPress \"C\" for Commercial";
			cout << "\n\t\t\tPress \"D\" for Domestic";
			cout << "\n\t\t\t ";
			cin >> customertype;
			cin.ignore();
		}
		if (customertype == 'c' || customertype == 'C')
		{
			strcpy_s(customer, "Commercial");
		}
		else
		{
			strcpy_s(customer, "Domestic");
		}
		int day, month, year;
		cout << "\n\t\t\tEnter day: ";
		cin >> day;
		cout << "\n\t\t\tEnter Month: ";
		cin >> month;
		cout << "\n\t\t\tEnter year: ";
		cin >> year;
		int connections = 0;
		for (int i = 0; i < C1.totalCustomers; i++)
		{
			if (strcmp(cnic, C1.CustomerCNIC[i]) == 0)
			{
				connections++;
			}
		}
		if (connections > 3)
		{
			return false;
		}
		else
		{
			fout.open("CustomerInfo.txt", ios::app);
			fout << id << ", " << cnic << ", " << name << ", " << address << ", " << phonenumber << ", " << customer << ", " << Meter << ", " << day << "/" << month << "/" << year << ", " << "0" << ", " << "0" << ", Paid" << endl;
			fout.close();
			return true;
		}
	}
};

void menu()
{
	system("cls");
	cout << " \t\t\t\t\tLogin successful..... ";
	cout << "\n\t\t\tPress Corrosponding number to enter into desired field \n";
	cout << "\t\t\t 1) Add New Costumer ";
	cout << "\n\t\t\t 2) Add Monthly Bill ";
	cout << "\n\t\t\t 3) Update Terrif Information ";
	cout << "\n\t\t\t 4) Update Bill Paid Status  ";
	cout << "\n\t\t\t 5) Change Password ";
	cout << "\n\t\t\t 6) View Bills Report ";
	cout << "\n\t\t\t 7) Exit ";
	cout << "\n\t\t\t ";
}

int main()
{
	Customer C1;
	Employee E1;
	TarrifTax T1;
	int controlcheck = 0;
	int function = 0;
	cout << "If you are an Employee press 1. If you are a Customer press 2 ";
	cin >> controlcheck;
	cin.ignore();
	bool login = false;
	bool PasswordChange = false;
	bool BillStatus = false;
	bool CustomerLogin = false;
	bool BillView = false;
	bool UpdateTarrif = false;
	bool newconnection = false;
	char name[25];
	char password[10];
	char newpassword[10];
	char id[5];
	char cnic[14];
	if (controlcheck == 1)
	{
		while (!login)
		{
			cout << "\n\t\t\tEnter Your Name : ";
			cin.getline(name, 25);
			cout << "\n\t\t\tEnter Password : ";
			cin.getline(password, 10);
			login = E1.checkEmployee(name, password);
			if (!login)
			{
				cout << "\n\t\t\tIncorrect password or name \n";
			}
		}
		while (true)
		{
			menu();
			cin >> function;
			cin.ignore();
			if (function == 1)
			{
				system("cls");
				cout << "\n\t\t\tNew Connection" << endl;
				newconnection = E1.AddCustomer();
				if (!newconnection)
				{
					cout << "\n\t\t\tCannot add more than three customers " << endl;
				}
			}
			else if (function == 2)
			{
				system("cls");
				system("cls");
				cout << "\n\t\t\tUddate Bill Info\n";
				E1.UpdateBillInfo();
			}
			else if (function == 3)
			{
				system("cls");
				cout << "\n\t\t\tUpdate Tarrif\n";
				UpdateTarrif = T1.UpdateTarrif();
				cout << "\n\t\t\tOperation successfull" << endl;
			}
			else if (function == 4)
			{
				system("cls");
				cout << "\n\t\t\tUpdate Bill Status\n";
				while (!BillStatus)
				{
					BillStatus = E1.ReceiveBill();
					if (BillStatus)
					{
						cout << "\n\t\t\tStatus Updated successfully " << endl;
					}
					else
					{
						system("cls");
						cout << "\n\t\t\tNo customer with this Id exixts " << endl;
					}
				}

			}
			else if (function == 5)
			{
				system("cls");
				while (!PasswordChange)
				{
					cout << "\n\t\t\t Password Change \n";
					cout << "\n\t\t\tEnter Your Name : ";
					cin.getline(name, 25);
					cout << "\n\t\t\tEnter Password : ";
					cin.getline(password, 10);
					cout << "\n\t\t\tEnter new password (Maximum length 10) : ";
					cin.getline(newpassword, 10);
					PasswordChange = E1.ChangePassword(name, password, newpassword);
					if (PasswordChange)
					{
						cout << "\n\t\t\tPassword changed successfully " << endl;
					}
					else
					{
						system("cls");
						cout << "\n\t\t\tIncorrect Password or name " << endl;
					}
				}
			}
			else if (function == 6) {
				system("cls");
				Bill b2;
				b2.showtotalbills();


			}
			else if (function == 7)
			{
				system("pause");
				return 0;
			}
			cout << "\t\t\t";
			system("pause");
		}
	}
	else if (controlcheck == 2)
	{
		while (!CustomerLogin)
		{
			cout << "\n\t\t\tEnter the customer ID ";
			cin.getline(id, 5);
			cout << "\n\t\t\tEnter Your CNIC ";
			cin.getline(cnic, 14);
			CustomerLogin = C1.CheckForCustomer(id, cnic);
			if (!CustomerLogin)
			{
				system("cls");
				cout << "\n\t\t\tIncorrect ID or CNIC " << endl;
			}
		}
		system("cls");
		cout << " \t\t\t\t\tLogin successful..... ";
		cout << "\n\t\t\t  View Bill ";
		while (!BillView)
		{
			BillView = C1.ReviewBill();
			if (BillView)
			{
				cout << "\n\t\t\tOperation successfull" << endl;
			}
			else
			{
				system("cls");
				cout << "\n\t\t\tIncorrect Id/CNIC/Meter Type " << endl;
			}
		}

	}
	system("pause");
	return 0;
}
