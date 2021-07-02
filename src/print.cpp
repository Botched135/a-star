//
// Created by rbo on 28/06/2021.
//

#include "print.hpp"
#include "grid.hpp"
#include <fmt/ranges.h>

void print_grid(grid& grid)
{
    auto iter = grid.m_grid.begin();
    for (int i = 0; i < grid.m_rows; ++i)
    {
        fmt::print("{}\n", fmt::join(iter, iter + grid.m_rows, " "));
        iter+=grid.m_columns;
    }
}
