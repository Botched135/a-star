//
// Created by rbo on 28/06/2021.
//
#include "print.hpp"
#include "grid.hpp"
#include "a_star_algo.hpp"
int main(int argc, const char** argv)
{
    int rows = 12;
    int columns = 12;
    grid path_grid(rows, columns);
    print_grid(path_grid);

    return 0;
}
