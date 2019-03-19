#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Buff[5] = {5,15,45,85,6};
	int *p;
	//p = Buff;
	int i;

	for (int i = 0; i < 5; ++i)
	{
		printf("%d",Buff[i]);
		printf("\n");
	}
		for (int i = 0; i < 5; ++i)
	{
		printf("%d",*(Buff + i));
		printf("\n");
	}

	for (int i = 0; i < 5; ++i)
	{
		//direccion del puntero
		printf("%d",*(&Buff + i));
		printf("\n");
	}

	printf("sizeof: %d ",sizeof(Buff));

	return 0;
}