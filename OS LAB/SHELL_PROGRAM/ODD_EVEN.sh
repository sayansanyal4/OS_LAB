#Write a shell script which will take a integer user input and check whether it is even or odd 

echo "Enter the value for x :"
read x
r=`expr $x % 2`
if [ $r -eq 0 ] 
then 
echo "$x is even"
else 
echo "$x is odd"
fi
