/*
 *  classimp.cpp
 *  testingground
 *
 *  Created by akhan on 5/22/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>

#include "classimp.h"

using namespace std;


void xClass :: print() const

{
	cout << u;
	cout << w;
}

xClass :: xClass ()
{
	u=0;
	w=0;
	
}

xClass :: xClass (int a, double b)
{
	u=a;
	w=b;
	
}

