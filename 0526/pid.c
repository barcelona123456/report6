#include <stdio.h>
int main()
{
	int pid;
	printf("나의 프로세스 번호: [%d] \n", getpid());
	printf("나의 부모 프로세스 번호 : [%d] \n",getppid());
}
