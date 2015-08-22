#include <stdio.h>

#define FUNC_TRACE()	printf("%s:%d --- \n", __func__, __LINE__)

int main(int argc, char *argv[])
{
	FUNC_TRACE();

	printf("Hello World\n");

	return 0;
}