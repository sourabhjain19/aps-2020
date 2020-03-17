#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 5
#define TRUE 1
#define FALSE 0
struct dqueue
{
    int front;
    int rear;
    int items[MAXQUEUE];
};
typedef struct dqueue DQUEUE;

void EnqueueRear(DQUEUE *pdq)
{
    {
        int x;
        printf("Enter Enqueue Item\n");
        scanf("%d", &x);
        (pdq->rear)++;
        pdq->items[pdq->rear] = x;
    }
}

void EnqueueFront(DQUEUE *pdq)
{
    if (pdq->front != 0)
    {
        int x;
        printf("Enter Enqueue Item\n");
        scanf("%d", &x);
        (pdq->front)--;
        pdq->items[pdq->front] = x;
    }
    else
        printf("Enqueue Invalid\n");
}

void DequeueFront(DQUEUE *pdq)
{
    {
        int x;
        x = pdq->items[pdq->front];
        (pdq->front)++;
        printf("%d Dequeued\n", x);
    }
}

void DequeueRear(DQUEUE *pdq)
{
    {
        int x;
        x = pdq->items[pdq->rear];
        (pdq->rear)--;
        printf("%d Dequeued\n", x);
    }
}

int main()
{
    int x = 0;
    DQUEUE q;
    q.front = 0;
    q.rear = -1;

    EnqueueRear(&q);
    EnqueueRear(&q);

    EnqueueFront(&q);
    EnqueueFront(&q);
    
    DequeueFront(&q);
    DequeueRear(&q);

    return 0;
}