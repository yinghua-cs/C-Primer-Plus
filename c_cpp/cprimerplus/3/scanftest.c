//  From http://c.biancheng.net/cpp/html/34.html

//  Created by Yinghua Han on 11/22/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void){

    char a,b;
    printf("input character a,b\n");
    scanf("%c %c",&a,&b);		// scanf 里的间隔符很容易出错，用的时候要小心，printf确认下
    printf("\n%c%c\n",a,b);

    return 0;

}
