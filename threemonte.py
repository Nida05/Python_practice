#interaction between functions:
#three cup monte: this is a simple game. shuffle the cans around and guess where the red ball is
from random import shuffle
#shuffling
def shuffling(inp_exm):
    shuffle(inp_exm)
    return inp_exm
#taking input from user:
def takin_input():
    guess=''
    while guess not in ['0','1','2']:
        guess=input('pick a can from 0,1 or 2:')
    output=int(guess)
    return output
#checking the guess
def check_guess(mylist,myindex):
    req_ind=mylist.index('r')
    if(myindex==req_ind):
        print('Yay! you are right')
    else:
        print('Oops!! You are Wrong')
        print(mylist)

# our input list is going to a three strings list and "r" this represents our red ball
mylist=['','','r']
shuffling(mylist)
my_index=takin_input()
check_guess(mylist,my_index)
