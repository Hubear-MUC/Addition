#include <stdio.h>
#include <stdlib.h>

main(int c,char** r)
{
if(c<3)return(-1);
printf("%lf\n",atof(r[1])+atof(r[2]));
}
