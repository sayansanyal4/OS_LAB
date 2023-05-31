echo "Enter value for a : "
read a
echo "Enter value for b : "
read b
s=`expr $a + $b `
dif=`expr $a - $b `
m=`expr $a \* $b `
div=`expr $a / $b `
mod=`expr $a % $b `
d=`echo "scale=5;$a / $b"|bc`
echo "Calculated Sum = $s "
echo "Calculated Difference = $dif "
echo "Calculated Multiplication = $m "
echo "Calculated Division = $div "
echo "Calculated Remainder = $mod "

echo "Division With Floating Point : $d "

