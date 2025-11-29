#include <stdio.h>
#include "increment.h"
#include "negate.h"
int
main()
{
    printf("increment(10) = %d, negate(10) = %d\n",
        increment(10), negate(10));
    printf("increment(0) = %d, negate(0) = %d\n",
        increment(0), negate(0));
    printf("increment(-10) = %d, negate(-10) = %d\n",
        increment(-10), negate(-10));

    return 0;
}