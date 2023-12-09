// Even and odd
//  #include<stdio.h>
//  int main()
//  {
//      int num;
//      printf("Enter number:");
//      scanf("%d",&num);
//      if(num %2==0)
//      {
//          printf("%d: is a even number",num);
//      }
//      else
//      {
//          printf("%d: is a odd number",num);
//      }
//      return 0;
//  }

// print even and odd numbers...
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("  even number is : %d\n ", i);
        }
        else
        {
            printf("  odd number is :%d\n", i);
        }
    }
    return 0;
}
