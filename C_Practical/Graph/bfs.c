#include <stdio.h>
int graph[6][6] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 1, 0},
    {1, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 1},
    {0, 1, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 0}};
int visited[6], queue[6], rear = -1, front = -1;

int dequeue()
{
    return queue[front++];
}
void enqueue(int value)
{
    if(front==-1 )
        front=0;
    queue[++rear]= value;
}

void bfs(int start)
{
    int i,v;
    visited[start]=1;
    enqueue(start);
    while(rear>=front)
    {

        v = dequeue();
        printf("%d ",v);
        for(i=0;i<6;i++)

        {
            if(graph[v][i]==1 && !visited[i])
            {
                visited[i]=1;
                enqueue(i);
            }
        }
    }
}

// #include <stdio.h>

// int graph[6][6] = {
//     {0, 1, 1, 0, 0, 0},
//     {1, 0, 0, 1, 1, 0},
//     {1, 0, 0, 0, 1, 0},
//     {0, 1, 0, 0, 0, 1},
//     {0, 1, 1, 0, 0, 1},
//     {0, 0, 0, 1, 1, 0}};

// int visited[6], queue[6], rear = -1, front = -1;


// void enqueue(int v) {
//     if (front == -1) front = 0;
//     queue[++rear] = v;
// }


// int dequeue() {
//     return queue[front++];
// }

// void bfs(int start){
//     int i,v;
//     enqueue(start);
//     visited[start] =1;
//     while(front<=rear)
//     {
//         v = dequeue();
//         printf("%d ",v);

//         for(i =0;i<6;i++)
//         {
//             if(graph[v][i]==1 && !visited[i])
//             {
//                 visited[i]= 1;
//                 enqueue(i);
//             }
//         }

//     }
// }

int main() {
    bfs(0);
}
