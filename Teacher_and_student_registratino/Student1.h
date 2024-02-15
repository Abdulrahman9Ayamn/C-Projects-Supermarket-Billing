#pragma once
#include <iostream>
#include <fstream>
#include "HomePage.h"
using namespace std;
void HomePage1();
class Student
{
private:
	string _name;
	int _id = 0;
	int _age = 0;
	int _level = 0;
	float _gpa = 0;
	int _salary = 0;
	int _choose3 = 0;
	string n;
	int d = 0;
	float a = 0;
	float l = 0;
	int g = 0;
	float s = 0;
	int c = 0;
	int token = 0;
	string Material;
public:
	void Students_screen() {
		q:
		fstream data;

		cout << "\n\n=====================================================================================================================\n\n" << endl;
		cout << "\n\n\t\t\t\t\tName : ";
		cin >> _name;
		cout << "\n\n\t\t\t\t\tID : ";
		cin >> _id;
		cout << "\n\n\t\t\t\t\tAge : ";
		cin >> _age;
		cout << "\n\n\t\t\t\t\tLevel : ";
		cin >> _level;
		cout << "\n\n\t\t\t\t\tGPA : ";
		cin >> _gpa;
		cout << "\n\n\t\t\t\t\tSalary : ";
		cin >> _salary;
		data.open("student.txt", ios::in);
		if (!data) {
			data.open("student.txt", ios::app | ios::out);
			data << " " << _name << " " << _id << " " << _age << " " << _level << " " << _gpa << " " << _salary<<"\n";
			data.close();
		}
		else {
			data >> n >> d >> a >> l >> g >> s >> c;
			while (!data.eof()) {
				if (n == _name) {
					token++;
				}
				data >> n >> d >> a >> l >> g >> s >> c;

			}
			data.close();

		}
		if (token == 1)
			goto q;
		else {
			data.open("student.txt", ios::app | ios::out);
			data << " " << _name << " " << _id << " " << _age << " " << _level << " " << _gpa << " " << _salary << "\n";
			data.close();
		}
		cout << "\n\n\n\t\t\t\tDo you want to exit or return to the home page?" << endl;
		cout << "\t\t\t\t1 _ Back" << endl;
		cout << "\t\t\t\t2 _ Exit" << endl;
		cin >> _choose3;

		if (_choose3 == 1) {
			HomePage1();
	
		}
		else if (_choose3 == 2) {
			

		}
		else {
			cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";

		}
	}
	void Teacher() {
		q:
		fstream data;

		cout << "\n\n=====================================================================================================================\n\n" << endl;

		cout << "\n\n\t\t\t\t\tName : ";
		cin >> _name;
		cout << "\n\n\t\t\t\t\tID : ";
		cin >> _id;
		cout << "\n\n\t\t\t\t\tAge : ";
		cin >> _age;
		cout << "\n\n\t\t\t\t\tSalary : ";
		cin >> _salary;
		cout << "\n\n\t\t\t\t\tMaterial : ";
		cin >> Material;
		data.open("Teacher.txt", ios::in);
		if (!data) {
			data.open("Teacher.txt", ios::app | ios::out);
			data << " " << _name << " " << _id << " " << _age << " "<< _salary << " " << Material << "\n";
		}
		else {
			data >> n >> d >> a >> l >> g;
			while (!data.eof()) {
				if (n == _name) {
					token++;
				}
				data >> n >> d >> a >> l >> g;

			}
			data.close();

		}
		if (token == 1)
			goto q;
		else {
			data.open("Teacher.txt", ios::app | ios::out);
			data << " " << _name << " " << _id << " " << _age << " "<< _salary <<" " << Material << "\n";
			data.close();
		}

		cout << "\n\n\n\t\t\t\tDo you want to exit or return to the home page?" << endl;
		cout << "\t\t\t\t1 _ Back" << endl;
		cout << "\t\t\t\t2 _ Exit" << endl;
		cin >> _choose3;

		if (_choose3 == 1) {
			HomePage1();

		}
		else if (_choose3 == 2) {

		}
		else {
			cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";

		}

	}
	void list_student(){
		fstream data;
		data.open("student.txt", ios::in);
		cout << "\n|______________________________________________________________________________________________|" << endl;
		cout << "                                                                                                " << endl;
		cout << "Name\t\tID\t\tAGE\t\tLevel\t\tGPA\t\tSalary" << endl;
		cout << "                                                                                                " << endl;
		cout << "\n|______________________________________________________________________________________________|" << endl;
		data >> _name >> _id >> _age >> _level >> _gpa >> _salary;
		while (!data.eof())
		{
			cout << _name << "\t\t" << _id << "\t\t" << _age << "\t\t" << _level << "\t\t" << _gpa << "\t\t" << _salary << "\n";
			data >> _name >> _id >>  _age >> _level >>  _gpa >>  _salary;
			
		}
		data.close();
		cout << "\n|______________________________________________________________________________________________|" << endl;

	w:
		cout << "\n\n\n\n\n\n";
		cout << "\t\t\t\t|----------------------------|" << endl;;
		cout << "\t\t\t\t|                            |" << endl;;
		cout << "\t\t\t\t\t1 _ Back" << endl;
		cout << "\t\t\t\t\t2 _ Exit" << endl;
		cout << "\t\t\t\t|                            |" << endl;;
		cout << "\t\t\t\t|----------------------------|" << endl;;
		cin >> _choose3;
		if (_choose3 == 1) {
			HomePage1();
		}
		else if(_choose3==2 ){
			
		}
		else {
			cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";
			cout << "\n\t\t\t\t\tTry again" << endl;
			goto w;
		}
	}
	void list_Teacher() {
		fstream data;
		data.open("Teacher.txt", ios::in);
		cout << "\n|______________________________________________________________________________________________|" << endl;
		cout << "                                                                                                " << endl;
		cout << "Name\t\tID\t\tAGE\t\tSalary\t\tMaterial" << endl;
		cout << "                                                                                                " << endl;
		cout << "\n|______________________________________________________________________________________________|" << endl;
		data >> _name >> _id >> _age >> _salary >> Material;
		while (!data.eof())
		{
			cout << _name << "\t\t" << _id << "\t\t" << _age << "\t\t" << _salary << "\t\t" << Material << "\n";
			data >> _name >> _id >> _age >> _salary >> Material;

		}
		data.close();
		cout << "\n|______________________________________________________________________________________________|" << endl;

	w:
		cout << "\n\n\n\n\n\n";
		cout << "\t\t\t\t|----------------------------|" << endl;;
		cout << "\t\t\t\t|                            |" << endl;;
		cout << "\t\t\t\t\t1 _ Back" << endl;
		cout << "\t\t\t\t\t2 _ Exit" << endl;
		cout << "\t\t\t\t|                            |" << endl;;
		cout << "\t\t\t\t|----------------------------|" << endl;;
		cin >> _choose3;
		if (_choose3 == 1) {
			HomePage1();
		}
		else if (_choose3 == 2) {

		}
		else {
			cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";
			cout << "\n\t\t\t\t\tTry again" << endl;
			goto w;
		}
	}

};
