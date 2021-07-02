//
// Created by rbo on 30/06/2021.
//
#include <grid.hpp>
#include "utility.hpp"
#include "action.hpp"
#include "state.hpp"

std::vector<action> legal_actions_four_dir(grid &cur_grid, state current_state)
{
    std::vector<action> actions;
    actions.reserve(4);
    auto [x,y] = current_state;
    int state_index = x+y*cur_grid.m_columns;
    //bound checks
    if(x != 0 && cur_grid.m_grid[state_index-1] == 0) actions.emplace_back(x-1,y, 100);
    if(y != 0 && cur_grid.m_grid[state_index-cur_grid.m_columns] == 0) actions.emplace_back(x,y-1, 100);
    if(x < cur_grid.m_columns && cur_grid.m_grid[state_index+1] == 0) actions.emplace_back(x+1,y, 100);
    if(y < cur_grid.m_rows && cur_grid.m_grid[state_index+cur_grid.m_columns] == 0) actions.emplace_back(x,y+1, 100);

    return actions;

}

std::vector<action> legal_actions_eight_dir(grid &cur_grid, state current_state)
{
    std::vector<action> actions;
    actions.reserve(8);
    char bit_bound_check = 0;
    auto [x,y] = current_state;
    int state_index = x+y*cur_grid.m_columns;
    //bound checks
    if(x != 0 && !cur_grid.m_grid[state_index-1])
    {
        actions.emplace_back(x - 1, y, 100);
        bit_bound_check |= 1;
    }
    if(y != 0 && !cur_grid.m_grid[state_index-cur_grid.m_columns])
    {
        actions.emplace_back(x,y-1, 100);
        bit_bound_check |= 2;
    }
    if(x < cur_grid.m_columns && !cur_grid.m_grid[state_index+1])
    {
        actions.emplace_back(x+1,y, 100);
        bit_bound_check |= 4;
    }
    if(y < cur_grid.m_rows && !cur_grid.m_grid[state_index+cur_grid.m_columns])
    {
        actions.emplace_back(x,y+1, 100);
        bit_bound_check |= 8;
    }

    if(!(bit_bound_check ^ 3) && !cur_grid.m_grid[state_index-1-cur_grid.m_columns]) actions.emplace_back(x-1,y-1,144);
    if(!(bit_bound_check ^ 9) && !cur_grid.m_grid[state_index-1+cur_grid.m_columns]) actions.emplace_back(x-1, y+1, 144);
    if(!(bit_bound_check ^ 6) && !cur_grid.m_grid[state_index+1-cur_grid.m_columns]) actions.emplace_back(x+1, y-1, 144);
    if(!(bit_bound_check ^ 12) && !cur_grid.m_grid[state_index+1+cur_grid.m_columns])actions.emplace_back(x+1, y+1, 144);

    return actions;
}

