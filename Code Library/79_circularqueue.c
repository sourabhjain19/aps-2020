#include <stdio.h>
#define MAXQUEUE 5

struct cqueue
{
    int front;
    int rear;
    int items[MAXQUEUE];
};
typedef struct cqueue CQUEUE;

void Enqueue(CQUEUE *pcq)
{
    {
        int x;
        printf("Enter item to insert:\t");
        scanf("%d", &x);
        pcq->rear = (pcq->rear + 1) % MAXQUEUE;
        pcq->items[pcq->rear] = x;
        printf("Insertion Successful\n");
    }
}
void Dequeue(CQUEUE *pcq)
{
    {
        int x;
        pcq->front = (pcq->front + 1) % MAXQUEUE;
        x = pcq->items[pcq->front];
        printf("%d Dequeued\n", x);
    }
}
void display(CQUEUE *pcq)
{
    {
        int i;
        printf("Queue Contents are:\n");
        i = (pcq->front + 1) % MAXQUEUE;
        while (i != pcq->rear)
        {
            printf("%d\n", pcq->items[i]);
            i = (i + 1) % MAXQUEUE;
        }
        printf("%d\n", pcq->items[i]);
        printf("\n");
    }
}

int main()
{
    int choice = 0;
    CQUEUE cq;
    cq.front = MAXQUEUE - 1;
    cq.rear = MAXQUEUE - 1;

    Enqueue(&cq);
    Enqueue(&cq);
    Enqueue(&cq);
    
    display(&cq);
    Dequeue(&cq);
    display(&cq);

    return 0;
}