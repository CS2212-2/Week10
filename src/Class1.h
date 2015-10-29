#ifndef CLASS1_H
#define CLASS1_H

#include <iostream>
#include <string>
#include <math.h>
//#include "datapack.h"

using namespace std;

class Class1
{
	private:



	public:

		Class1();

		void method1();
		void method1_1();
		void method2();
		void method3();
		void method4();
		void method5();
		void method6();
		void method7();
		double log_2( double x ) ;
		int menu( char* title, int n, const char* menu[] );
		};
		//void setup( DataPack* sortp ); // Data-pack constructor.
		//void getData( DataPack* sortp, stream instream ); // Fill data array.
		//void printData( DataPack sort, stream outstream ); // Output array data.
		//void sortData ( DataPack sort );

#endif /*CLASS1_H_*/
