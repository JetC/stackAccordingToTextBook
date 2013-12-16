//
//  SeqStack.h
//  stackAccordingToTextBook
//
//  Created by 孙培峰 on 1312/13/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#ifndef stackAccordingToTextBook_SeqStack_h
#define stackAccordingToTextBook_SeqStack_h


#endif

#define MAX_STACK_SIZE 100

typedef int dataType;

typedef struct{
    dataType stack[MAX_STACK_SIZE];
    int top;
} SeqStack;

void seqStackInitiate(SeqStack *s)
{
    s->top = 0;
}

int isSeqStackNotEmpty(SeqStack s)
{
    if (s.top <= 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int seqStackPush(SeqStack *s, dataType x)
{
    if (s->top >= MAX_STACK_SIZE)
    {
        printf("StackFull!");
        return 0;
    }
    else
    {
        s->stack[s->top] = x;
        s->top++;
        return 1;
    }
}

int seqStackPop(SeqStack *s, dataType *d)
{
    if (s->top <= 0)
    {
        printf("StackEmpty!");
        return 0;
    }
    else
    {
        s->top--;
        *d = s->stack[s->top];
        return 1;
    }
}

int seqStackTop(SeqStack s, dataType *d)
{
    if (s.top <= 0)
    {
        printf("Stack Empty");
        return 0;
    }
    else
    {
        *d = s.stack[s.top-1];
        return 1;
    }
}
