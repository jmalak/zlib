#if defined(__WATCOMC__) && defined(__WINDOWS__)

#include <windows.h>

int WINAPI LibMain( HINSTANCE hmod, WORD dataseg, WORD heap, LPSTR cmdline )
{
    (void)hmod;
    (void)dataseg;
    (void)heap;
    (void)cmdline;
    return( 1 );
}

int WINAPI WEP( int res )
{
    (void)res;
    return( 1 );
}

#endif
