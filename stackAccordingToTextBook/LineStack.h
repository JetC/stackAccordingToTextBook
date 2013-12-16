//
//  LineStack.h
//  stackAccordingToTextBook
//
//  Created by 孙培峰 on 1312/14/.
//  Copyright (c) 2013 孙培峰. All rights reserved.
//

#ifndef stackAccordingToTextBook_LineStack_h
#define stackAccordingToTextBook_LineStack_h



#endif
#include <stdio.h>
#include <stdlib.h>


typedef struct stackNode{

    dataType data;
    struct stackNode *next;

}lsNode;

void lineStackInitiate(lsNode *head)
{
    if ((head = (lsNode *)malloc(sizeof(lsNode))) == NULL)
    {
        head->next = NULL;
    }
}

int isLineStackNotEmpty(lsNode *head)
{
    if (head->next == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int lineStackPush(lsNode *head, dataType x)
{
    lsNode *p;
    
    if ((p = (lsNode *)malloc(sizeof(lsNode))) == NULL)
    {
        printf("Memory Full!");
        return 0;
    }
    
    p->data = x;
    p->next = head->next;
    head->next = p;
    return 1;
}

int lineStackPop(lsNode *head, dataType *d)
{
    lsNode *p = head->next;
    if (p == NULL)
    {
        printf("Stack Error!");
        return 0;
    }
    head->next = p->next;
    *d = p->data;
    free(p);
    return 1;
}

int lineStackTop(lsNode *head, dataType *d)
{
    lsNode *p = head->next;
    if (p == NULL)
    {
        printf("Stack Error!");
        return 0;
    }
    
    *d = p->data;
    return 1;
}

void lineStackDestroy(lsNode *head)
{
    lsNode *p, *p1;
    p = head;
    
    while (p!=NULL)
    {
        p1 = p;
        p = p->next;
        free(p1);
    }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
