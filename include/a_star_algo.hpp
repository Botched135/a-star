//
// Created by rbo on 28/06/2021.
//

#ifndef A_STAR_A_STAR_ALGO_HPP
#define A_STAR_A_STAR_ALGO_HPP
#include "state.hpp"
#include "node.hpp"
template<typename lambda>
int a_star(grid &grid, state start, state goal, int weight, lambda& heuristic_func)
{
    // open list
    std::vector<node*> open_list;
    // closed list
    std::vector<node*> closed_list;
}
#endif //A_STAR_A_STAR_ALGO_HPP
