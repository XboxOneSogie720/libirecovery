/**
 * Since sscanf() is not supported by the CE C SDK, I've opted for this open source
 * version instead. You can find the original post here:
 * https://41j.com/blog/2015/01/standalone-sscanf-implementation-esp8266/
 */

#ifndef NSSCANF_H
#define NSSCANF_H

int nsscanf( const char *s, const char *format, ... );

#endif