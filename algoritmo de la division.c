#include<stdio.h>

/* a > 0 y b > 0 
   a < 0 y b < 0
   a < 0 y b > 0
   a > 0 y b < 0*/
int main()
{
    int a;
    int b;
    int c = 0;

    scanf("%d %d", &a , &b);

    int q;
    int r;

    int x = a;
    
    if (a > 0 )
    {
        if (b > 0)
        {
            while (x - b >= 0)
            {   
                x = x - b;
                c = c + 1;
            }

            q = c;
            r = x;
        }
    }

    if (a < 0)
    {
        if (b < 0)
        {
        while (x + -b < 0)
        {
            x = x - b;
            c = c + 1;
        }
            q = c + 1;
            r = x - b;
        }
    }

    if (a < 0)
    {
        if (-b < 0)
        {
            while (x + (-1 * -b) < 0)
        {
            x = x - (-b);
            c = c + 1;
        }
            q = (c + 1) * -1;
            r = x - (-b);
            
        
        }
    }
    if (a > 0)
    {
        if (-b > 0)
        {
            while (x - (-b) >= 0)
            {   
                x = x - (-b);
                c = c + 1;
            }

            q = c * -1;
            r = x;
                    
        }
    
    }
printf("%d %d", q , r);
}
/*

a = -13
b = -3

x  |c
------
-13 0
-10 1
-7  2
-4  3
-1  4

 q = 4
 r = -1


a = -12 
b = -3

x   |c
------
-12  0
- 9  1
- 6  2
- 3  3
-------
  0  4



Tercer caso

a = -13
b = 3

-13 = 3 * (-5) + 2

-13 = -3 * (5) + 2

a = -13
b = -3



*/