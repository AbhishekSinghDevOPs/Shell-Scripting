#!/bin/bash
echo "enter 2 no."
read a
read b
echo "enter choice:"
echo "1. ADDITION"
echo "2. SUBTRACTION"
echo "3. MULTIPLICATION"
echo "4. DIVISION"
read ch
case $ch in
	1) Ans=`echo $a+$b | bc` ;;
	2) Ans=`echo $a-$b | bc` ;;
	3) Ans=`echo $a\*$b | bc` ;;
	4) Ans=`echo "scale=2; $a/$b" | bc`;;
esac
echo "result : $Ans"
