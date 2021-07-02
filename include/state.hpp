//
// Created by rbo on 28/06/2021.
//

#ifndef A_STAR_STATE_HPP
#define A_STAR_STATE_HPP

struct state
{
    int x,y;

    state() = default;
    state(int x, int y) :x(x), y(y){}

    bool operator==(state other) const
    {
        return x == other.x && y == other.y;
    }
};
#endif //A_STAR_STATE_HPP
