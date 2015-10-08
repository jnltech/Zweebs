#pragma once
//
// Author:					Prof. James Long
// Date Created:			09/20/2005
// Last Modification Date:	09/20/2015
// Purpose:					Week 1 Example
// Filename:				cZweeb.h
//

//
// Class Name: cZweeb
//
// Overview:
//	This class is an example of a new type called cZweeb. This type can contain
//  a char, an int, a float, or a pointer to an operator function.
//

class cZweb
{
public:
	cZweb ( void );	
	virtual ~cZweb( void );

	// Mutators
	void setZ( int );
	void setW( float );
	void setE( char );
	void setB( void (void*) );

	int getZ( void );
	float getW( void );
	char getE( void );

	//
	// The Exec function executes the function that has been set in the
	// b member.
	void exec(void);

private:
	int		z;				// Contained int value
	float	w;				// Contained float value
	char	e;				// Contained char value
	void	(*b)(void*);	// Contained void function pointer value
};
