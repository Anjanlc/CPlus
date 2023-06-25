# # libery collection to create call break game
# from enum import Enum
# from enum import  IntEnum
# from random import *
# from math import *
# tas =[]
# player1_cards= []
# player2_cards = []
# class Color(Enum):
#   CHIDI = 'chidi'
#   PAN = 'pan'
#   ETTA = 'etta'
#   HUKUM = 'hukum'
                      
# class Number(IntEnum):

#    TWO = 2  
#    THREE = 3
#    FOUR = 4
#    FIVE = 5
#    SIX = 6
#    SEVEN = 7
#    EIGHT = 8
#    NINE = 9
#    TEN = 10
#    JACK = 11
#    QUEEN = 12
#    KING = 13 
#    ACE = 14

# class Playingcard():
#   def __init__(self,card_number,card_color,):
#     self.color = card_color
#     self.number= card_number

# for color in Color:
#   for number in Number:
#       tas.append(Playingcard(Number(number),Color(color)))

# for i in range(0,len(tas)):
#    print("Color :",tas[i].color)
#    print("Number :",tas[i].number)

# # playing game by two player
# #for i in range(0,len(tas)):
#   # if player1_cards[i].number>player2_cards[i].number:
#    # print("player  1 win the game")
#  # elif player2_cards[i].number>player1_cards[i].number:
# # print("player 2 win the game")
# # else:
#   #print("invalid player")


# libery collection to create call break game
from enum import Enum
from enum import  IntEnum
from random import *
from math import *
tas =[]
player1_cards= []
player2_cards = []
class Color(Enum):
  CHIDI = 'chidi'
  PAN = 'pan'
  ETTA = 'etta'
  HUKUM = 'hukum'
                      
class Number(IntEnum):

   TWO = 2  
   THREE = 3
   FOUR = 4
   FIVE = 5
   SIX = 6
   SEVEN = 7
   EIGHT = 8
   NINE = 9
   TEN = 10
   JACK = 11
   QUEEN = 12
   KING = 13 
   ACE = 14

class Playingcard():
  def __init__(self,card_number,card_color,):
    self.color = card_color
    self.number= card_number
def create_book():
 for color in Color:
  for number in Number:
      tas.append(Playingcard(Number(number),Color(color)))
 return tas


#  for i in range(0,len(tas)):
#   print("Color :",tas[i].color)
#   print("Number :",tas[i].number)

# playing game by two player
#for i in range(0,len(tas)):
  # if player1_cards[i].number>player2_cards[i].number:
   # print("player  1 win the game")
 # elif player2_cards[i].number>player1_cards[i].number:
# print("player 2 win the game")
# else:
  #print("invalid player")