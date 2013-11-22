//
//  chessBoard.cpp
//  Chessboard
//
//  Created by Alex Sánchez on 22/11/13.
//  Copyright (c) 2013 Alex Sanchez. All rights reserved.
//

#include <iostream>

using namespace std;


// This program create a line of 8 letters (BNBNBNBN) and another line of
// 8 letters, but with different order (NBNBNBNB). Then you only repeat those
// 2 methods times 4 to have the complete chess board.

int main(){
    for (int i = 0; i < 4; i++){
        for (int i = 0; i < 4; i++){
            cout << "B";
            cout << "N";
        }
        cout << "\n";
    
        for (int i = 0; i < 4; i++){
            cout << "N";
            cout << "B";
        }
        cout << "\n";
    }
    
    return 0;
    
}

