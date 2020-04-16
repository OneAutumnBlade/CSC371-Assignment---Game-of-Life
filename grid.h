/**
 * Declares a class representing a 2d grid of cells.
 * Rich documentation for the api and behaviour the Grid class can be found in grid.cpp.
 *
 * The test suites provide granular BDD style (Behaviour Driven Development) test cases
 * which will help further understand the specification you need to code to.
 *
 * @author 950530
 * @date March, 2020
 */
#pragma once

// Add the minimal number of includes you need in order to declare the class.
// #include ...
#include <vector>
/**
 * A Cell is a char limited to two named values for Cell::DEAD and Cell::ALIVE.
 */
enum Cell : char {
    DEAD  = ' ',
    ALIVE = '#'
};

/**
 * Declare the structure of the Grid class for representing a 2d grid of cells.
 */
class Grid {
private:
    std::vector<Cell> grid;
    int get_index(int x, int y) const;
    int width;
    int height;
public:
    Grid();
    Grid(int square_size);
    Grid(int width, int height);

    int get_width() const;
    int get_height() const;
    int get_total_cells() const;
    int get_alive_cells() const;
    int get_dead_cells() const;
    void resize(int square_size);
    void resize(int width, int height);
    Cell get(int x, int y);
    void set(int x, int y, Cell value);
    /**
    operator()(x, y);
    operator()(x, y);
    crop(x0, y0, x1, y1);
    merge(other, x0, y0, alive_only = false);
    rotate(rotation);
    operator<<(output_stream, grid);
**/

};
