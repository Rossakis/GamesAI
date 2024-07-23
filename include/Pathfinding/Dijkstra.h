//
// Created by Giorgos Tsolakidis on 23/7/24.
//

#ifndef GAMESAI_DIJKSTRA_H
#define GAMESAI_DIJKSTRA_H

#include "Graphs.h"

namespace Graphs{
    struct Node {
        float cost;

        explicit Node(const float costValue = 0) : cost(costValue) {
        }
    };
}
#endif //GAMESAI_DIJKSTRA_H
