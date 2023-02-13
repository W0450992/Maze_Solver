//
// Created by mark- on 2023-02-09.
//

#ifndef ASSIGNMENT_2_CELL_H
#define ASSIGNMENT_2_CELL_H


class Cell {

public:
    int x;

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    int y;
    char symbol = '#';
};


#endif //ASSIGNMENT_2_CELL_H
