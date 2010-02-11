/*
 * convert.c
 * part of the bin2txt project
 *  
 * Copyright 2004, 2005, 2006 Zachary Young
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**/

#include "convert.h"

/* convert() 
 * handles conversion of input
**/
int convert() {
	int input;
	input = getchar();
	while( input != EOF ) { /* Loop through input until EOF */
		bin2txt( input );
		input = getchar();
	}
	printf( "\n" );
	return 0; 
}

/* bin2txt( int )
 * performs conversion from a byte into actual bits
**/
int bin2txt( int byte ) {
	int idx;
	int result;
	for( idx = 7; idx >= 0; idx-- ) { /* Find which bits need to be turned */
		result = pow( 2,idx );
		if( byte >= result ) {
			byte -= result;
			printf( "1" );
		}
		else {
			printf( "0" );
		}
	}
	printf( " " );
	return 0;
}
