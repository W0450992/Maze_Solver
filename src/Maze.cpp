//
// Created by mark- on 2023-02-10.
//

#include "Maze.h"
#include <iostream>
#include "Node.h"
#include "Stack.h"
#include <vector>

void Maze::start_maze(std::string *array, Stack stack) {
    std::string line;
//    Cell cell_array[51][51];
    char char_array[51][51];
    std::vector <Cell> vector;
    for (int i = 0; i < 51; i++) {
        for (int j = 0; j < 51; j++) {
            //char_array[i][j] = array[i][j];
//            std::cout << char_array[i][j];
//            if(j == 50){
//                std::cout << std::endl;
//            }
//            check_cell(char_array);

            if (i == 0 & j == 0) {
                stack.push({1, 0, '#'});
                //char_array[1][0] = '#';
                array[1][0] = '#';
            }

            //check_cell(char_array[]);
//            for (int k = 0; k < 51; k++) {
//            for(array[stack.peek().x][(stack.peek().y)] != '|') {
//                if (i > 0) {
                    if(j<50 && i < 50 && i > 0 && j > 0){
                        char right = array[stack.peek().x][stack.peek().y + 1];
                        char down = array[stack.peek().x+1][stack.peek().y];
                        char left = array[stack.peek().x][stack.peek().y-1];
                        char up = array[stack.peek().x-1][stack.peek().y];
                        char test = array[1][1];
                        int x = stack.peek().x;
                        int y = stack.peek().y;
                        if (right != '+' && right != '-' && right != '|' && right != '#') {
                            stack.push({stack.peek().x, stack.peek().y+1, '#'});
                            array[stack.peek().x][stack.peek().y] = '#';
                            vector.push_back({stack.peek().x,stack.peek().y,'#'});
                        }
                        else if(down != '+' && down != '-' && down != '|'&& down != '#'){
                            stack.push({stack.peek().x+1, stack.peek().y, '#'});
                            array[stack.peek().x][stack.peek().y] = '#';
                            vector.push_back({stack.peek().x,stack.peek().y,'#'});
                        }
                        else if(left != '+' && left != '-' && left != '|'&& left != '#'){
                            stack.push({stack.peek().x, stack.peek().y-1, '#'});
                            array[stack.peek().x][stack.peek().y] = '#';
                            vector.push_back({stack.peek().x,stack.peek().y,'#'});
                        }
                        else if(up != '+' && up != '-' && up != '|'&& up != '#'){
                            stack.push({stack.peek().x-1, stack.peek().y, '#'});
                            array[stack.peek().x][stack.peek().y] = '#';
                            vector.push_back({stack.peek().x,stack.peek().y,'#'});
                        }
                        else {
                            array[stack.peek().x][stack.peek().y] = ' ';
                            stack.pop();
                            vector.pop_back();

                        }
                    }





//
//                }
//            }
//            if(char_array[i][j] == ' '){
//                stack.push({i,j,'#'});
//                char_array[i][j] = '#';
//            }

//                if (char_array[(stack.peek().x) + 2][(stack.peek().y) + 2] == '+' || char_array[i][j] == '-' ||
//                    char_array[i][j] == '|') {
//
//                }

//            }
        }
    }
//    for (int i = 0; i < 51; i++) {
//        for (int j = 0; j < 51; j++) {
//            array[i][j] = char_array[i][j];
//        }
//    }


}

void Maze::check_cell(char *array[]) {

}

