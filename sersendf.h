#ifndef	_SERSENDF_H
#define	_SERSENDF_H

#include "sendf.h"
#include "serial.h"

/**
  Before we had display support, all messages went to the serial link,
  so this destination was hardcoded. This macro avoids changing a whole lot
  of older code.

  Deprecated macro? Convenience macro? Dunno.
*/
#define sersendf_P(...) sendf_P(serial_writechar, __VA_ARGS__)

#ifdef LCD
void lcdsendf(char *format, ...)		__attribute__ ((format (printf, 1, 2)));
void lcdsendf_P(PGM_P format_P, ...)	__attribute__ ((format (printf, 1, 2)));
#endif // LCD
#endif	/* _SERSENDF_H */
