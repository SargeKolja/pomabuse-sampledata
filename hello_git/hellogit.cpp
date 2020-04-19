#include <iostream>

#include "helppage.h"

/* Compilation & linking:
 *
 * execution:
 *      ./hellogit -?
 *      ./hellogit
 *
 * or Compilation & linking with Debug support:
 *
 * debugging:
 *      gdb -ex=l --args ./hellogit -x
 */

int main( int argc, const char *argv[] )
{
	if( argc>1 && (argv[1][0]=='-' || argv[1][0]=='/') )
	{
        int minus=1;
        if( argv[1][1]=='-' )
            minus++;
		switch( argv[1][minus] )
		{
			case 'h' :
			case 'H' :
			case '?' :
				return helppage( argv[1], (argc>2) ? argv[2] : NULL );
            default :
				return helppage( argv[1], "" );
		}
	}
	else
	{
		std::cout << "Hello git users all over the world!" << std::endl;
	}
	return 0;
}
// faked edit in file hello_git/hellogit.cpp: MWUxYzgyZTA1Y2EyNGIwZTFmZWQ1YTZhZDYxOGFjZmIgKi0K, just to simulate a code change
