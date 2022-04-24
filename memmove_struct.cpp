#include <cstring>
#include <iostream>

#define FREE(s) free(s); s = NULL;

using namespace std;

struct MyStruct {
	int integer;
	char character;
	char astring[6];
};


int main()
{
	MyStruct *src=(MyStruct*)malloc(sizeof(MyStruct));
	src->integer=6;
	src->character='H';
	strcpy(src->astring, "hello");

	
	MyStruct *dest=(MyStruct*)malloc(sizeof(MyStruct));
	
	memmove(dest, src, sizeof(MyStruct));
	
	cout << "dest integer = " << dest->integer << endl;
	cout << "dest character= " << dest->character << endl;
	cout << "dest string= " << dest->astring << endl;

	FREE(src);
	FREE(dest);
	return 0;
}

