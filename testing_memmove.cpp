#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	int src[] = {1, 2, 3, 4};
	int *dest=(int*)malloc(sizeof(src));
	memset(dest, '\0', 5);
	memmove(dest, src, sizeof(src));
	cout << "sizeof src = " << sizeof(src) << " | sizeof dest = " << sizeof(dest) << " | sizeof int = " << sizeof(int) << endl;
	for (int i = 0; i < (sizeof(src)/sizeof(int)); i++){
		cout << "dest[" <<i <<"] = "<< dest[i] << endl;
	}
	free(dest);
	dest = NULL;	
	return 0;
}

