#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "CircleWithConstantMemberFunctions.h"
#include "Complex.h"

using namespace std;


int main()
{
	//EX06_01

	ofstream fout;
	fout.open("Exercise13_1.txt", ios::out| ios::app);   // It keeps adding 100 numbers to the file without erasing the previous numbers.
	
	if (fout.fail())
	{
		cout << "Can't open file." << endl;
		return 0;
	}
	srand((unsigned)time(NULL));
	int r;
	for (int i = 0; i < 100; i++)
	{
		r = rand() % 100;
		fout << r << " ";
	}

	//EX0^_02

	fstream fin;
	string file;
	cout << "Please enter the name of the file: ";
	cin >> file;

	fin.open(file);
	int count = 0;
	while (!fin.eof())
	{
		fin.get();
		count++;
	}
	count--;
	fin.close();
	cout << "Number of characters is " << count << endl;
		

	fout.close();

	//EX06_03

	int y,s1,s2;
	char g;
	string name, nameb, nameg;
	
	cout << "Please enter the year: ";
	cin >> y;

	switch (y)
	{
	case 2001: file = "babynameranking2001.txt";
		break;
	case 2002: file = "babynameranking2002.txt";
		break;
	case 2003: file = "babynameranking2003.txt";
		break;
	case 2004: file = "babynameranking2004.txt";
		break;
	case 2005: file = "babynameranking2005.txt";
		break;
	case 2006: file = "babynameranking2006.txt";
		break;
	case 2007: file = "babynameranking2007.txt";
		break;
	case 2008: file = "babynameranking2008.txt";
		break;
	case 2009: file = "babynameranking2009.txt";
		break;
	case 2010: file = "babynameranking2010.txt";
		break;
	default: "Invalid.";
		break;
	}

	cout << "Please enter gender: ";
	cin >> g;
	cout << "Enter name: ";
	cin >> name;


	fin.open(file);
	if (fout.fail())
	{
		cout << "Can't open file." << endl;
		return 0;
	}

	
		if (!fin.eof())
		{
			fin >> r >> nameb >> s1 >> nameg >> s2;
			if (g == 'M' || g == 'm')
			{
				if (name == nameb)
				{
					cout << name << " is ranked number " << r << " in year " << y<< endl;
					
				}
			}
			else if (g == 'F' || g == 'f')
			{
				if (name == nameg)
				{
					cout << name << " is ranked number " << r << " in year " << y << endl;
					
				}
			}
		}
	

		//EX06_04

		Circle c1(1);
		Circle c2(2);
		cout << "c1 < c2 ?" << ((c1 < c2) ? "true" : "false")<< endl;
		cout << "c1 <= c2 ?" << ((c1 <= c2) ? "true" : "false") << endl;
		cout << "c1 == c2 ?" << ((c1 == c2) ? "true" : "false") << endl;
		cout << "c1 != c2 ?" << ((c1 != c2) ? "true" : "false") << endl;
		cout << "c1 >= c2 ?" << ((c1 >= c2) ? "true" : "false") << endl;
		cout << "c1 > c2 ?" << ((c1 > c2) ? "true" : "false") << endl;


		//EX06_05


		
			double Re, Im, Re1, Im1;
			cout << "Please enter the first complex number: ";
			cin >> Re >> Im;
			cout << "Please enter the second complex number: ";
			cin >> Re1 >> Im1;

			Complex C1(Re, Im);
			Complex C2(Re1, Im1);

			Complex C3 = C1 + C2;
			cout << "(" << C1.toString() << ")" << " + " << "(" << C2.toString() << ")" << " = " << C3.toString() << endl;

			Complex C4 = C1 - C2;
			cout << "(" << C1.toString() << ")" << " - " << "(" << C2.toString() << ")" << " = " << C4.toString() << endl;

			Complex C5 = C1 * C2;
			cout << "(" << C1.toString() << ")" << " * " << "(" << C2.toString() << ")" << " = " << C5.toString() << endl;

			Complex C6 = C1 / C2;
			cout << "(" << C1.toString() << ")" << " / " << "(" << C2.toString() << ")" << " = " << C6.toString() << endl;

			cout << "|" << C1.toString() << "| = " << C1.abs() << endl;

		

	return 0;
}