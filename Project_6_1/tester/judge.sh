echo ""
echo -e "\e[96mAVVAL AZ HAME CHON ESMESHO NABAR ELTEMAS KARD KE BAZ HAM AZASH YAD SHE"
echo "PAS : HELLO ESMESHO NABAR , YOU SHOULD SUFFER UNTIL A PAINFULL DEATH"
echo -e "\e[39m"



for i in {1..40}
do
	cp ./mains/"$i"main.cpp ./main.cpp
	make
	./1.out > JUDGING_OUTPUT.txt
	diff JUDGING_OUTPUT.txt ./outputs/"$i".out > CHECK_DIFF.txt
	if [ -s CHECK_DIFF.txt ]
	then
		echo -e " \e[31m WRONG ON TEST $i"
	else
		echo -e "\e[32m Accepted ON TEST $i"
	fi
	echo -e "\e[39m"
done


echo -e "\e[96mDAR AKHAR HAM AZ ESMESHO NABAR KHODAFEZI MIKONIM (GERYE NAKON IN BAR HAM BEHET ESHARE SHOD :D)"

