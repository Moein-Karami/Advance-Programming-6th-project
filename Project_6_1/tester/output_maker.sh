for i in {1..40}
do  
	rm main.cpp
  	cp ./mains/"$i"main.cpp ./main.cpp
 	make
 	./1.out > ./outputs/"$i".out
done
