#include <stdio.h>

int main(void)
{
  int i;
  int result;

  printf(" >>>>>start main function>>>>>> \n");
  
  result=develop();

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
