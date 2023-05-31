echo -n "Enter value for n : "
read n
i=1
until [ $i -eq $n ] 
do 
	echo -n "$i"
	i= `expr $i+1`
done
