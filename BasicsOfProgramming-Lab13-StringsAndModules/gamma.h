#pragma once
#include <string.h>

// Returns string lenght of _Str    
size_t __cdecl gstrlen(const char* _Str); 

// Copy a string from _Source to _Destination
char* gstrcpy(char* _Destination, const char* _Source);

// Set _Source to the end of _Destination
char* gstrcat(char* _Destination, const char* _Source);

// Compare _Str1 and _Str2
int strcpm(char const* _Str1, char const* _Str2);

// Finds a first occurence of str2 in str1
char* gstrchr(const char* _String, int _Ch);

// Finds a first occurence of str2 in str1
char* gstrstr(char* _String, const char* _SubString); 

// Finds a first occurence of str2 in str1
const char* gstrstr(const char* _String, const char* _SubString); 