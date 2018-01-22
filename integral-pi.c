# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <math.h>

double f( double );
double f( double a )
{
    return (4.0 / (1.0 + a*a));
}

int main( int argc, char *argv[])
{
    int done = 0, n, i;
    double PI25DT = 3.141592653589793238462643;
    double pi, h, sum, x;

    n = 0;
    while (!done)
    {
        printf("Enter the number of intervals: (0 quits) ");
        scanf("%d",&n);

	if (n == 0)
            done = 1;
        else
        {
	        pi = 0.0;
	        h  = 1.0 / (double) n;
                sum = 0.0;
            	for (i = 0; i <= n; i++)
           	{
                	x = h * ((double)i - 0.5);
                	sum += f(x);
            	}
               	pi += h * sum;
        }
        printf("pi is approximately %.16f, Error is %.16f\n", pi, fabs(pi - PI25DT));

    }
    return 0;
}
