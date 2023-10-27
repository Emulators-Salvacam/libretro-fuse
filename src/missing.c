#if defined( __PS3__ ) || defined( SF2000 )

#include <stddef.h>

char* getcwd( char* buf, size_t size )
{
  if ( buf != NULL && size >= 2 )
  {
    buf[ 0 ] = '.';
    buf[ 1 ] = 0;
    return buf;
  }

  return NULL;
}

int chdir( const char* path)
{
  return 0;
}

int isatty(int fd)
{
  (void)fd;
  return 1;
}

#endif
