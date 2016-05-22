#include <stdio.h>

int main(void)
{
  int i;
	
  printf(" >>>>>start main function>>>>>> \n");

  while(1)
  {
    for(i=0;i<1000;i++)
    {
      printf("this is a test program : %d \n",i);
      sleep(1);
    }
  }
  
  return 0;
}
