echo "g++ main_maker.cpp"

for i in {1..40}
do
	./a.out > "$i"main.cpp
done
