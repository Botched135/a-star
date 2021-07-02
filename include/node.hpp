//
// Created by rbo on 28/06/2021.
//

#ifndef A_STAR_NODE_HPP
#define A_STAR_NODE_HPP

#include "action.hpp"
struct state;
struct node
{
    node(const state &mState, node *mParent, const action &mActionTo, int pathCost, int heuristic) : m_state(mState),
                                                                                                     m_parent(mParent),
                                                                                                     m_action_to(
                                                                                                             mActionTo),
                                                                                                     m_path_cost(
                                                                                                             pathCost),
                                                                                                     m_heuristic(
                                                                                                             heuristic)
    {}

    state m_state;
    node* m_parent;
    action m_action_to;
    int m_path_cost; //g(node)
    int m_heuristic;// h(n)
    // maybe f(n)
    // m_heuristic direction

};
#endif //A_STAR_NODE_HPP
