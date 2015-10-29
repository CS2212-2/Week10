/*
 * Class1.cpp
 *
 *  Created on: Oct 28, 2015
 *      Author: root
 */
#include <iostream>
#include <stdio.h>
#include "Class1.h"
#include <math.h>
#include <stdlib.h>
#include "datapack.h"

using namespace std;

Class1::Class1(){}
	void Class1::method1(){
		int ages[6]= {52,51,29,24,22,16};;
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
	void Class1::method1_1(){
		cout << "method1_1.... " << endl; //
			int ages[6]= {52,51,29,24,22,16};
				int* cursor;
				//cursor=ages;
				//int N=0;
				int* off_board;
				off_board=ages+6;
				int counter=1;
			    int* on_board = ages + 6 - 1;
			    //printf( "%hi ");
			    for (cursor = ages; cursor <= on_board; ++cursor) {
			   // printf( "%hi ", *cursor );
			    cout << "cursor...." << *cursor << endl;
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

	void Class1::method3(){
		int k;
		cout << "please enter size or array..." << endl;
		cin >> k;
		int* ages = new int[k];
	int* cursor;
	cursor=ages;
	int* off_board;
	off_board=ages+k;
  int counter=1;
	for(cursor = ages; cursor<off_board; ++cursor){
	cout << "please enter int value number ..." << counter << endl;
	printf( "%4i", *cursor);
	counter++;
	}

	}

	void Class1::method4(){
	typedef struct { float payrate, hours, pay; } WorkerT;
	float k;
			cout << "please enter size or array..." << endl;
			cin >> k;
			WorkerT* payroll = new WorkerT;
	//WorkerT* payroll = malloc( 4 * sizeof{ WorkerT ) );
	WorkerT* scan=payroll;
	WorkerT* end = payroll + 4;

	for (scan = payroll; scan<end; ++scan) {
	scanf("%g %g", &scan->payrate, &scan->hours);
	scan->pay = scan->payrate * scan->hours;
	printf("%5.2f hours @ %6.2f per hour = $%8.2f\n",
	scan->hours, scan->payrate, scan->pay );
	}

	}

	void Class1::method5(){
	short int ages[6] = {52,51,29,24,22,16};
	short int* ip1 = ages;
	short int* ip2 = ages + 3;
	short int* ipend = ages + 6;
	if (ip1 == ip2) {
		// false
	}
	if (ip1 > ip2)
	{
			// false
		}
	if (ip2 < ipend) {
		// true
	}
	}
	//double // Base 2 logarithm
	double Class1::log_2( double x ) { return log( x ) / log( 2 ); }
	int Class1::menu( char* title, int n, const char* menu[] )
	{
	int ok, choice;
	printf("\n%s\n", title);
	for(;;) {
	for( int k=0; k<n; ++k ) printf("\t %d. %s \n", k, menu[k]);
	printf("\nEnter number of desired item: ");
	ok = scanf("%d", &choice);
	if (ok==1 && 0 <= choice && choice < n) break;
	while (getchar() != '\n'); // Clean garbage out of input buffer.
	puts("Illegal choice or input error; try again.");
	}
	return choice;
	}
	void Class1::method6(){
		typedef double (*funcptr)( double );
		int choice; // user’s function selection index
		double x, fx; // data input, calculated function value
		funcptr fp; // function chosen by user
		#define CHOICES 7
		char* greeting = " Select a function:";
		const char* names[CHOICES] = { "quit", "sine", "cosine", "tangent",
		"natural log", "base 2 log", "e to the x" };
		funcptr function[CHOICES] = { NULL, sin, cos, tan, log, exp };
		puts( " A Menu of Functions" );
		for (;;) {
		choice = Class1::menu( greeting, CHOICES, names );
		if (choice == 0) break;
		printf( " Enter x: " );
		scanf( "%lg", &x );
		fp = function[choice];
		fx = fp( x );
		printf( "\n %s(%g) = %g \n", names[choice], x, fx );
		}

	}
/*
	void Class1::method7()
	{
		DataPack sort;
		sort.sortData(Class1::DataPack1 data);

		cout << "Reading data from stdin." << stderr <<  endl ;
		//getData( &sort, stdin );
		//fputs( stderr,"%i data items read.", sort.n );
		//printData( sort, stderr );
		//fputs( stderr,"Beginning to sort." );
		//sortData( sort );
		//fputs( stderr,"Data sorted; writing to output stream." );
		//printData( sort, stdout );


	}
*/
