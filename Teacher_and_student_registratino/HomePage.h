#pragma once
#include <iostream>
#include "Student1.h"
using namespace std;

	void HomePage1() {
		int _choose = 0;
		int _choose1 = 0;
		int _choose2 = 0;
		Student  m;
		g:
		cout << "\t\t\t\t\t__________________________________________________" << endl;
		cout << "\t\t\t\t\t|\t\tWelcome to the user\t\t  |" << endl;
		cout << "\t\t\t\t\t|_________________________________________________|" << endl;

		cout << "\n\n\n\n\t\t\t\t_______________________________________" << endl;
		cout << "\t\t\t\t|                                     |" << endl;
		cout << "\t\t\t\t\tWhat do you want" << endl;
		cout << "\t\t\t\t|                                     |" << endl;
		cout << "\t\t\t\t_______________________________________" << endl;

		cout << "\n\n\n\n\t\t\t\t\t1 _ Student registration\n" << endl;
		cout << "\t\t\t\t\t2 _ Teacher registration\n" << endl;
		cout << "\t\t\t\t\t3 _ Information\n" << endl;
		cout << "\t\t\t\t\t4 _ Exit\n" << endl;


		cout << "\t\t\t\t\t:";
		cin >> _choose;
		switch (_choose)
		{ 
		case 1:
		{
		m:
			cout << "\n\t\t\t\t\tDo you want to add a student, press 1, or go back, press 2 :";
			cout << "\t\t\t\t\t:";
			cin >> _choose1;
			if (_choose1 == 1) {
				m.Students_screen();
			}
			else if (_choose1 == 2) {
				HomePage1();
			}
			else {
				cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";
				cout << "\n\t\t\t\t\tTry again" << endl;
				goto m;
			}
			

		}
		case 2:
		{
		a:
			cout << "\n\t\t\t\t\tDo you want to add a Teacher, press 1, or go back, press 2  :";
			cout << "\t\t\t\t\t:";
			cin >> _choose1;
			if (_choose1 == 1) {
				m.Teacher();
			}
			else if (_choose1 == 2) {
				HomePage1();
			}
			else {
				cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";
				cout << "\n\t\t\t\t\tTry again" << endl;
				goto a;
			}
			

		}
		case 3:
		{
			cout << "\n\t\t\t\t\tYou want information about a student or teacher" << endl;
			cout << "\n\t\t\t\t\t1 _ Student" << endl;
			cout << "\n\t\t\t\t\t2 _ Teacher " << endl;
			cout << "\n\t\t\t\t\t3 _ Back" << endl;
			cout << "\t\t\t\t\t:";
			cin >> _choose2;
			if (_choose2 == 1) {
			
				m.list_student();
			}
			else if (_choose2 == 2) {
				m.list_Teacher();
			}
			else if (_choose2 == 3) {
				HomePage1();
			}
			

		}
		case 4:
			break;

		default:
			cout << "\n\t\t\t\t\tYou entered an invalid value :::\n\n";
			cout << "\n\t\t\t\t\tTry again" << endl;
			goto g;
			
		}
		

	}

