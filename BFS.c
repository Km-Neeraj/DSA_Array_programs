#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Function to add an edge to the graph
void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int start, int end) {
    graph[start][end] = 1;
    graph[end][start] = 1; // For undirected graph
}

// Function to perform BFS traversal
void BFS(int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int startVertex) {
    int visited[MAX_VERTICES] = {0}; // Initialize all vertices as not visited
    int queue[MAX_VERTICES];
    int front = -1, rear = -1;

    // Mark the startVertex as visited and enqueue it
    visited[startVertex] = 1;
    queue[++rear] = startVertex;

    printf("BFS Traversal Order: ");

    while (front != rear) {
        int currentVertex = queue[++front];
        printf("%d ", currentVertex);

        for (int i = 0; i < vertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }

    printf("\n");
}

int main() {
    int vertices, edges;

    // Input the number of vertices
    printf("Input the number of vertices: ");
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX_VERTICES) {
        printf("Invalid number of vertices. Exiting...\n");
        return 1;
    }

    int graph[MAX_VERTICES][MAX_VERTICES] = {0}; // Initialize the adjacency matrix with zeros

    // Input the number of edges
    printf("Input the number of edges: ");
    scanf("%d", &edges);

    if (edges < 0 || edges > vertices * (vertices - 1) / 2) {
        printf("Invalid number of edges. Exiting...\n");
        return 1;
    }

    // Input edges and construct the adjacency matrix
    for (int i = 0; i < edges; i++) {
        int start, end;
        printf("Input edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);

        // Validate input vertices
        if (start < 0 || start >= vertices || end < 0 || end >= vertices) {
            printf("Invalid vertices. Try again.\n");
            i--;
            continue;
        }

        addEdge(graph, start, end);
    }

    // Input the starting vertex for BFS traversal
    int startVertex;
    printf("Input the starting vertex for BFS traversal: ");
    scanf("%d", &startVertex);

    // Perform BFS traversal
    BFS(graph, vertices, startVertex);

    return 0;
}
