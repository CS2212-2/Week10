#ifndef DATAPACK_H
#define DATAPACK_H
/*  ----------------------------------------------------------------------
//  Header file for all DataPack programs.                          pack.h
//  Created by Alice Fischer on Mon Dec 22 2003.
*/
#include "tools.h"
/* ---------------------------------- Instantiations for generic parts  */
#define IN_FMT "%g"
#define OUT_FMT "%.7g\n"
typedef float BT ;
#define LENGTH 20
class DataPack{
/* -------------------------------------------- Generic type definition  */
public:
	typedef struct {
    int n;           /* The current number of items in the array. */
    int max;         /* Allocation length of the array. */
    BT* store;       /* For a dynamically allocated data array. */
} DataPack1;

/* -------------------------------------------------------- Prototypes  */

DataPack();
void setup( DataPack1* pData );
void printData( DataPack1* pData, stream outstream );
void sortData( DataPack1* pData );
//void readData( DataPack::DataPack1* pData );
void readData( DataPack1* pData );
};

#endif /*DATAPACK_H_*/
