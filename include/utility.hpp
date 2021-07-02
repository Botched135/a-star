//
// Created by rbo on 30/06/2021.
//

#ifndef A_STAR_UTILITY_HPP
#define A_STAR_UTILITY_HPP
#include <vector>
struct action;
struct state;
std::vector<action> legal_actions_four_dir(state& current_state);
std::vector<action> legal_actions_eight_dir(state& current_state);
#endif //A_STAR_UTILITY_HPP
