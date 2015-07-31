// StudyCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define SAFEDELETE(p) if( p != nullptr ) { delete p; p = nullptr;}

int _tmain(int argc, _TCHAR* argv[])
{
	auto intSize = sizeof(int);
	auto longSize = sizeof(long);
	std::cout<<intSize<<std::endl;
	std::cout<<longSize<<std::endl;
	char* g1 = new char[1 * 1024 * 1024 * 1024];
	char* g2 = new char[1 * 1024 * 1024 * 1024];
	char* g3 = new char[1 * 1024 * 1024 * 1024];
	char* g4 = new char[1 * 1024 * 1024 * 1024];

	/*char* g5 = new char[1 * 1024 * 1024 * 1024];
	char* g6 = new char[1 * 1024 * 1024 * 1024];
	char* g7 = new char[1 * 1024 * 1024 * 1024];
	char* g8 = new char[1 * 1024 * 1024 * 1024];

	char* g9 = new char[1 * 1024 * 1024 * 1024];
	char* g10 = new char[1 * 1024 * 1024 * 1024];
	char* g11= new char[1 * 1024 * 1024 * 1024];
	char* g12 = new char[1 * 1024 * 1024 * 1024];

	char* g13 = new char[1 * 1024 * 1024 * 1024];
	char* g14 = new char[1 * 1024 * 1024 * 1024];*/
	/*char* g15= new char[1 * 1024 * 1024 * 1024];
	char* g16 = new char[1 * 1024 * 1024 * 1024];*/


	SAFEDELETE(g1);
	SAFEDELETE(g2);
	SAFEDELETE(g3);
	SAFEDELETE(g4);
	/*SAFEDELETE(g5);
	SAFEDELETE(g6);
	SAFEDELETE(g7);
	SAFEDELETE(g8);
	SAFEDELETE(g9);
	SAFEDELETE(g10);
	SAFEDELETE(g11);
	SAFEDELETE(g12);
	SAFEDELETE(g13);
	SAFEDELETE(g14);*/

	return 0;
}

