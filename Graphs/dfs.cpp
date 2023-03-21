#include <iostream>
#define n 5

int g[5];
bool visited[5] = {false};

int dfs(int at)
{
    if (visited[at])
    {
        return visited[at] = true;
    }
    neighbours = graph[at];
    for (int next; next < strlen(neighbours); next++)
    {
        dfs(next);
    }
}
int main()
{
    int start_node = 0;
    dfs(start_node);
}
