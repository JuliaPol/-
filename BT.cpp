#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <cstdio>
#include "BT.h"
using namespace std ;
namespace binTree_modul
{
//-------------------------------------
	inline binTree Create()
	{	return NULL;
	}
//-------------------------------------
	inline bool isNull(binTree b)
	{	return (b == NULL);
	}
//-------------------------------------
	inline base RootBT (binTree b)			// для непустого бин.дерева
	{	if (b == NULL) { cerr << "Error: RootBT(null) \n"; exit(1); }
		else return b->info;
	}
//-------------------------------------	
	inline binTree Left1 (binTree b)		// для непустого бин.дерева
	{	if (b == NULL) { cerr << "Error: Left(null) \n"; exit(1); }
		else return b ->lt;
	}
//-------------------------------------	
	inline binTree Right1 (binTree b)		// для непустого бин.дерева
	{	if (b == NULL) { cerr << "Error: Right(null) \n"; exit(1); }
		else return b->rt;
	}
//-------------------------------------	
	inline binTree Parent (binTree b)		// для непустого бин.дерева
	{	if (b == NULL) { cerr << "Error: Right(null) \n"; exit(1); }
	else return b->parent;
	}
//-------------------------------------	
	inline void UpTree(binTree b)
	{
		while(b)
		{
			b->weight++;
			b=b->parent;
		}
	}
//-------------------------------------
	inline void destroy (binTree &b)
	{	if (b != NULL)	{
			destroy (b->lt);
			destroy (b->rt);
			delete b;
			b = NULL;
		}
	}
			
} 