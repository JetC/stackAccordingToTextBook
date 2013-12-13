//
//  main.c
//  stackAccordingToTextBook
//
//  Created by 孙培峰 on 1312/13/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "SeqStack.h"

int main(int argc, const char * argv[])
{
    SeqStack myStack;
    int i,x;
    
    stackInitiate(&myStack);
    
    for (i = 0; i < 10; i++)
    {
        if (stackPush(&myStack, i+1) == 0)
        {
            printf("Error");
            return 233;
        }
    }
    
    if (stackTop(myStack, &x) == 0)
    {
        printf("Error");
        return 234;
    }
    else
    {
        printf("Now the element on top is: %d\n",x);
    }
    
    printf("All the elements poped out are below:\n");
    
    while (isStackEmpty(myStack))
    {
        stackPop(&myStack, &x);
        printf("%d      ",x);
    }
    
    return 0;
}

