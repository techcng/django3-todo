// a basic searching technicque in c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 87;

	int list[4] = {20, 50, 80, 87};
	for(int i = 0; i<4;i++){
		if (list[i] == num)
			printf("value find at index : %d  \n ", i);}
}
