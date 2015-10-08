
#include "cZweb.h"

//
// Default constructor
cZweb::cZweb(void)
{
	setZ(0);
	setW(0.0);
	setE('a');
	setB(nullptr);
};

//
// Default destructor
cZweb::~cZweb(void)
{
};


// Mutators

void cZweb::setZ( int newZ )
{
	z = newZ;
};

void cZweb::setW( float newW )
{
	w = newW;
};

void cZweb::setE( char newE )
{
	e = newE;
};

void cZweb::setB( void newB(void*) )
{
	b = newB;
};


int cZweb::getZ( void )
{
	return z;
};

float cZweb::getW( void )
{
	return w;
};

char cZweb::getE( void )
{
	return e;
};

void cZweb::exec()
{
	b(this);
};

