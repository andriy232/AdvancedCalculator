#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Xml;

ref class History
{
private:
	String^ action;
	double arg1;
	double arg2;
public:
	History() 
	{
		action = Convert::ToString("str");
		arg1 = 0;
		arg2 = 0;
		/*ifstream infile("input.txt");
		char buffer[100];
		while (!infile.eof())
		{
			infile.getline(buffer, 100);
			cout << buffer << endl;
		}*/

	}
	void create(double n1, string str, double n2)
	{
		ofstream file("history.txt", std::ios_base::app);
		file << 0 << n1 << " " << str << " " << n2 << "\n";
		file.close();
	}
	void create(string str, double n1)
	{
		ofstream file("history.txt", std::ios_base::app);
		file << 1 << str << "(" << n1 << ")\n";
		file.close();
	}
	void load(string* arr)
	{
		ifstream file("history.txt");
		int i = 0;
		while (!file.eof())
		{
			std::getline(file, arr[i]);
			i++;
		}
		
		//float arg1(0), arg2(0);
		//string str, type;
		//story st[100];
		//int i = 0;
		//while (!file.eof())
		//{
		//	file >> st[i].type;
		//	if (st[i].type == 0) {
		//		file >> st[i].func >> st[i].arg1 >> "\n";
		//	}
		//	else {
		//		file >> st[i].arg1 >> st[i].func >> st[i].arg2 >> "\n";
		//	}
		//}
		//
		//file.close();

	}
};
//struct story
//{
//	bool type;
//	float arg1;
//	float arg2;
//	String func;
//};
