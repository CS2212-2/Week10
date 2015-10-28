/*
 * Class1.cpp
 *
 *  Created on: Oct 28, 2015
 *      Author: root
 */
#include <iostream>
#include <stdio.h>
#include "Class1.h"

using namespace std;

Class1::Class1(){}
	void Class1::method1(){
		int ages[6];
			int* cursor;
			cursor=ages;
			int* off_board;
			off_board=ages+6;
		    int counter=1;
			for(cursor = ages; cursor<off_board; ++cursor){
			cout << "please enter int value number ..." << counter << endl;
			scanf( "%i", cursor);
			counter++;
			cout << "value of cursor is..." << *cursor << "... address of cursor..." << &cursor << endl;
			}
	}
	void Class1::method2(){
		 int numbers[5];
				  int * p; // value of p;
				  cout << "...." << p << "value pointed by P is.." << *p << "address of p is:" << &p << endl;
				  cout << "...." << numbers << "value pointed by number is.." << *numbers << "address of number is:" << &numbers << endl;
				  p = numbers;
				  cout << "...." << p << "value pointed by P is.." << *p << "address of p is:" << &p << endl;
				  cout << "...." << numbers << "value pointed by number is.." << *numbers << "address of number is:" << &numbers << endl;
				  cout << "...." << p << "value pointed by P is.." << *p << "address of p is:" << &p << endl;
				  cout << "...." << numbers << "value pointed by number is.." << *numbers << "address of number is:" << &numbers << endl;
				  *p = 10; // change the value of p from 124 to 10
				  cout << "...." << p << "value pointed by P is.." << *p << "address of p is:" << &p << endl;
				  cout << "...." << numbers << "value pointed by number is.." << *numbers << "address of number is:" << &numbers << endl;
				  p++; // increment the address of p
				  *p = 20; // change the value of p from 10 to 20
				  p = &numbers[2];  *p = 30;// increment p or move to next address and change value
				  p = numbers + 3;  *p = 40;
				  p = numbers;  *(p+4) = 50;
				  for (int n=0; n<5; n++)
				    cout << numbers[n] << ", ";

	}


