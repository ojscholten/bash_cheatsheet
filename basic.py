# variable declaration
x = "hello"

# get input from stdin
x = input()

# function definition
def function(args):
  return "this is a function"

# conditional logic
if ( x < y ):
  print(x)
else:
  print(y)
  
# list comprehension
numbers = [ x for x in range(10)]

# list sorting
ascending = sorted(numbers)
descending = sorted(numbers, reverse=True)

# dictionaries
things = {}
if some_key not in things:
  things[some_key] = some_value
  
# deques
from collections import deque
d = deque()
