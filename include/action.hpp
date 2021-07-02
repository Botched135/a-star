//
// Created by rbo on 28/06/2021.
//

#ifndef A_STAR_ACTION_HPP
#define A_STAR_ACTION_HPP
struct action
{
    int x_move;
    int y_move;
    int m_cost;
    action(int xMove, int yMove, int mCost) : x_move(xMove), y_move(yMove), m_cost(mCost)
    {}
};
#endif //A_STAR_ACTION_HPP
