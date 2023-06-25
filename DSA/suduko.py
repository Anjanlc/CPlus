# create a suduko game using python

#Sudoku game

#import necessary libraries
import random

#function to generate board
def generate_board(): 
    board = [0]*81
    for i in range(81):
        board[i]= random.randint(1,9)
    return board

#function to print board
def print_board(board): 
    for i in range(9):
        print("  "+str(board[i*9:(i+1)*9]))

#function to check if board is valid
def check_board(board): 
    #Check each row
    for i in range(9):
        check_list = [0]*9
        for j in range(9):
            check_list[board[i*9+j]-1] += 1
        for k in range(9):
            if check_list[k]!=1:
                return False

    #Check each column
    for i in range(9):
        check_list = [0]*9
        for j in range(9):
            check_list[board[j*9+i]-1] += 1
        for k in range(9):
            if check_list[k]!=1:
                return False

    #Check each 3x3 block
    for i in range(3):
        for j in range(3):
            check_list = [0]*9
            for k in range(3):
                for l in range(3):
                    check_list[board[(i*3+k)*9+(j*3+l)]-1] += 1
            for m in range(9):
                if check_list[m]!=1:
                    return False

    #If all checks pass, return True
    return True

#Generate board
board = generate_board()

#Print board
print_board(board)

#Check if board is valid
if check_board(board):
    print("Board is valid!")
else:
    print("Board is invalid!")