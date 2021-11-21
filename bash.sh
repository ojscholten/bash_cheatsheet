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
