#include <stdio.h>
#include <stdlib.h>

int graph[6][6] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 1, 0},
    {1, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 1},
    {0, 1, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 0}};

int visited[6];

// void dfs(int start)
// {
//     int i;
//     visited[start] = 1;
//     printf("%d ", start);
//     for(i = 0;i<6;i++)
//     {
//         if(graph[start][i]==1 && !visited[i])
//         {
//             dfs(i);
//         }
//     }
// }

void dfs(int start)
{
    visited[start] =1;
    printf("%d ",start);
    for(int i = 0;i<6;i++)
    {
        if(graph[start][i]==1 && !visited[i])
            dfs(i);
    }
}

int main()
{
    dfs(0);
}