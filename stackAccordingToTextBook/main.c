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
#include "LineStack.h"

int main(int argc, const char * argv[])
{
    SeqStack myStack;
    lsNode myLineStack;
    int i = 0,x = 0;
    int iForLineStack = 0,xForLineStack = 0;

#pragma mark SequenceStack开始
    
    seqStackInitiate(&myStack);
    
    for (i = 0; i < 10; i++)
    {
                          if (seqStackPush(&myStack, i+1) == 0)
        {
            printf("Error");
            return 233;
        }
    }
    
    if (seqStackTop(myStack, &x) == 0)
    {
        printf("Error");
        return 234;
    }
    else
    {
        printf("Now the element on sequence Stack's top is: %d\n",x);
    }
    
    printf("All the elements in the sequence stack poped out are below:\n");
    
    while (isSeqStackNotEmpty(myStack))
    {
        seqStackPop(&myStack, &x);
        printf("%d      ",x);
    }

#pragma mark ListStack开始
    
    lineStackInitiate(&myLineStack);
    
    for (iForLineStack = 0; iForLineStack < 10; iForLineStack++)
    {
        if (lineStackPush(&myLineStack, iForLineStack+1) == 0)
        {
            printf("Error");
            return 233;
        }
    }
    if (lineStackTop(&myLineStack, &xForLineStack) == 0)
    {
        printf("Error");
        return 233;
    }
    else
    {
        printf("\n\nNow the element on line Stack's top is: %d\n",xForLineStack);
    }
    
    printf("All the elements in the line stack poped out are below:\n");
    
    while (isLineStackNotEmpty(&myLineStack))
    {
        lineStackPop(&myLineStack, &xForLineStack);
        printf("%d      ",xForLineStack);
    }
    printf("\n\n");
    
    
    
    return 0;
}

