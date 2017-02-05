#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Xml;
//class for operating with history records and file history.txt
ref class History
{
private:
	String^ action;
	double arg1;
	double arg2;
public:
	History() {}
	void create(double n1, string str, double n2, double res);
	void create(string str, double n1, double res);
	void load(string* arr);
};

void History::create(double n1, string str, double n2, double res)
{
	//open file for writing and put the binary operation
	ofstream file("history.txt", std::ios_base::app);
	file << "binary " << n1 << " " << str << " " << n2 << " = " << res << "\n";
	file.close();
}

void History::create(string str, double n1, double res)
{
	//open file for writing and put the unary operation
	ofstream file("history.txt", std::ios_base::app);
	file << "unary " << str << "(" << n1 << ") = " << res << "\n";
	file.close();
}

void History::load(string* arr)
{
a:ifstream file("history.txt");
	if (!file) {
		//if program cant open or find a file
		System::Windows::Forms::MessageBox::Show(Convert::ToString("Cant open file!"));
	}
	else
	{
		//if program have a file
		int i = 0;
		int file_size = 0;
		int history_size = 15;

		while (!file.eof())
		{
			std::getline(file, arr[i]);
			i++;
		}
		file_size = i;
		file.close();

		//if file have more than 15 record than clear all and put only last 15 records
		if (file_size > history_size)
		{
			//open file and delete content
			ofstream fileClean("history.txt", std::ofstream::out | std::ofstream::trunc);
			fileClean.close();

			//open file for writing
			ofstream fileReWrite("history.txt", std::ios_base::app);
			for (int i = file_size - history_size; i < file_size - 2; i++)
			{
				fileReWrite << arr[i] << "\n";
			}
			fileReWrite.close();
			//we should go to start of this function because we already clean and rewrite file
			//we must re-read array of strings to return them
			goto a;
		}
	}
}
