#include "gamma.h"


size_t __cdecl gstrlen(const char* _Str)
{
	int _Count = 0;
	while (_Str[_Count] != '\0')
		_Count++;
	return _Count;
}

char* gstrcpy(char* _Destination, const char* _Source)
{
	int id = 0;
	while (_Source[id] != '\0')
	{
		_Destination[id] = _Source[id];
		id++;
	}
	_Destination[id] = _Source[id];
	return _Destination;
}
char* gstrcat(char* _Destination, const char* _Source)
{
	int dID = 0;
	int sID = 0;
	while (_Destination[dID] != '\0')
		dID++;
	while (_Source[sID] != '\0')
	{
		_Destination[dID] = _Source[sID];
		dID++;
		sID++;
	}
	_Destination[dID] = _Source[sID];
	return _Destination;
}

int gstrcmp(char const* _Str1, char const* _Str2)
{
	int i = 0;
	while (_Str1[i] != '\0' && _Str2[i] != '\0' && _Str1[i] == _Str2[i]) i++;
	int k = _Str1[i] - _Str2[i];
	if (k == 0) return  0;
	if (k < 0)  return -1;
	if (k > 0)  return  1;
}


char* gstrchr(const char* _String, int _Ch)
{
	int id = 0;
	while (_String[id] != '\0')
	{
		if (_String[id] == _Ch)
			return &(((char*)_String)[id]);
		id++;
	}
	return NULL;
}

char* gstrstr(char* _String, const char* _SubString)
{
	int id = 0;
	int id2 = 0;
	int countStr2 = strlen(_SubString);
	char* ptr = nullptr;
	while (_String[id] != '\0' && _SubString[id2] != '\0')
	{
		if (_SubString[id2] != _String[id])
			id2 = 0;
		if (id2 == 0)
			ptr = &(_String[id]);
		if (_SubString[id2] == _String[id])
			id2++;
		id++;
	}
	if (countStr2 == id2)
		return ptr;
	else
		return nullptr;
}

const char* gstrstr(const char* _String, const char* _SubString)
{
	int id = 0;
	int id2 = 0;
	int countStr2 = strlen(_SubString);
	const char* ptr = nullptr;
	while (_String[id] != '\0' && _SubString[id2] != '\0')
	{
		if (_SubString[id2] != _String[id])
			id2 = 0;
		if (id2 == 0)
			ptr = &(_String[id]);
		if (_SubString[id2] == _String[id])
			id2++;
		id++;
	}
	if (countStr2 == id2)
		return ptr;
	else
		return nullptr;
}
