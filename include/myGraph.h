#pragma once

#include <iostream>
#include <vector>

// zadanie 29 prosty graph
/*
Napisz klasę, która będzie reprezentowała graf.
Klasa powinna mieć możliwość dodania nowej krawędzi i wyświetlenia struktury grafu na terminalu.
*/

using Matrix = std::vector<std::vector<int>>;

class Graph
{
public:
    Graph(size_t N) : size(N), adjency_matrix(size, std::vector<int>(size, 0))
    {
    }
    void addEdge(const int &i, const int &j)
    {
        adjency_matrix[i - 1][j - 1] = 1;
        adjency_matrix[j - 1][i - 1] = 1;
    }

    void display()
    {
        for (auto &c : adjency_matrix)
        {
            for (auto &r : c)
            {
                std::cout << r;
            }
            std::cout << std::endl;
        }
    }

private:
    size_t size;
    Matrix adjency_matrix;
};

/*
int main()
{
    Graph graph(4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.display();

    return 0;
}
*/