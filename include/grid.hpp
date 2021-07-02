//
// Created by rbo on 28/06/2021.
//

#ifndef A_STAR_GRID_HPP
#define A_STAR_GRID_HPP
#include <vector>
#include <algorithm>
struct grid
{
    std::vector<int> m_grid;
    int m_rows;
    int m_columns;

    grid() = default;
    grid(int rows, int columns): m_rows(rows), m_columns(columns)
    {
        m_grid = std::vector<int>(m_rows*m_columns);
        std::fill(m_grid.begin(), m_grid.end(),0);
    }
};
#endif //A_STAR_GRID_HPP
