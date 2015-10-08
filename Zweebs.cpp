//
// Author:					Prof. James Long
// Date Created:			09/20/2005
// Last Modification Date:	09/20/2015
// Purpose:					Week 1 Example
// Filename:				cZweeb.h
//

// Zweebs.cpp : Defines the entry point for the console application.
//
// Purpose:
//		This driver program excercises the cZweb data type.
//
// Input:
//		None
//
// Output:
//		The console will reflect the results of the different cZweb method
//		calls.
//

#include <stdio.h>
#include <tchar.h>

#include <iostream>

#include "cZweb.h"

void zFunc(void* zThing)
{
	std::cout << "called from zWeb" << std::endl;

	cZweb* testZweb = (cZweb*)(zThing);

	std::cout << "z: " << testZweb->getZ() << std::endl;
	std::cout << "w: " << testZweb->getW() << std::endl;
	std::cout << "e: " << testZweb->getE() << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{

	cZweb* zw1 = new cZweb();

	zw1->setZ(1);
	zw1->setE('f');
	zw1->setW(10.0);
	zw1->setB(&zFunc);

	(zw1->exec());

	return 0;
}

