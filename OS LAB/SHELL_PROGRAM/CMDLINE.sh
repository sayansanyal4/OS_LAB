
#write a shell script which will take 2 user input and perform basic arithmatical operations on the given inputs including floating point division

#Run Shell Script File Which Has No Execution permission = sh prog.h
#Run Shell Script File which Has Execution permission = ./prog.h

#echo "Enter value for a : "
#read a
#echo "Enter value for b : "
#read b

#Write a shell script which will perform basic numerical operation by using commandline argument technique

s=`expr $1 + $2 `
dif=`expr $1 - $2 `
m=`expr $1 \* $2 `
div=`expr $1 / $2 `
mod=`expr $1 % $2 `
d=`echo "scale=5;$1 / $2"|bc`
echo "Calculated Sum = $s "
echo "Calculated Difference = $dif "
echo "Calculated Multiplication = $m "
echo "Calculated Division = $div "
echo "Calculated Remainder = $mod "

echo "Division With Floating Point : $d "


