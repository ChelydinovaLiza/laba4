#include <iostream>﻿
#include "CombSort.h"
#include "PyramideSort.h" 
#include "MergeSort.h"
#include "Graph.cpp"
#include "CountingSort.h"

void main() {
    int array[6] = { 6,5,4,3,2,1 };
    CombSort(array, 6);
    for (int i = 0; i < 6; i++) {
        std::cout << array[i];
    }
    std::cout << "\n";

    graph gr(6);

    gr.AddEdge(0, 3);
    gr.AddEdge(0, 1);
    gr.AddEdge(1, 2);
    gr.AddEdge(0, 2);
    gr.AddEdge(1, 4);
    gr.DFS(0, true);
}