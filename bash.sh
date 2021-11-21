# get input
read x

# doing maths
z=$((x+y))

# printing result
echo "$z"

# repeating things
for x in {1..10}
do
  echo "$x"
done

# checking conditions
if (( x < y ))
then
  echo "x is less than y"
fi

if [ "$input" = "Y" ] || [ "$input" = "Y" ]
then
  echo "yes"
fi

# auto-solving mathematical expressions using bc
read input
solution=$(echo "$input" | bc -l)
printf "%0.3f\n" $solution        # print to 3 decimal places
