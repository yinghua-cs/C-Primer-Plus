//  Created by Yinghua Han on 1/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void){
   int a;
   long b;
   float f;
   double d;
   char c;
   printf("\nint:%d\nlong:%d\nfloat:%d\ndouble:%d\nchar:%d\n",sizeof(a),sizeof(b),sizeof(f),sizeof(d),sizeof(c));
   return 0;
}