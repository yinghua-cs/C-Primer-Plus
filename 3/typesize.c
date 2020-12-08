//  Created by Yinghua Han on 4/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{

   printf("\n");
   printf("char:%lu\n", sizeof(char));	// %zd for C99 and C11
   printf("short:%lu\n", sizeof(short));
   printf("int:%lu\n", sizeof(int));
   printf("long:%lu\n", sizeof(long));
   printf("float:%lu\n", sizeof(float));
   printf("double:%lu\n", sizeof(double));
   
   return 0;
}