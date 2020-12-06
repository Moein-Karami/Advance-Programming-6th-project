compile_mode = g++ -std=c++11

all : 1.out

1.out : main.o JsonBuilder.o Container.o Variable.o Thing.o MyExeption.o
	${compile_mode} main.o JsonBuilder.o Container.o Variable.o Thing.o MyExeption.o -o 1.out

main.o : main.cpp GeneralDefines.hpp Thing.hpp Variable.hpp Container.hpp  JsonBuilder.hpp MyExeption.hpp
	${compile_mode} -c main.cpp 

JsonBuilder.o : JsonBuilder.cpp GeneralDefines.hpp Thing.hpp Variable.hpp Container.hpp JsonBuilder.hpp MyExeption.hpp
	${compile_mode} -c JsonBuilder.cpp

Container.o : Container.cpp GeneralDefines.hpp Thing.hpp Variable.hpp Container.hpp MyExeption.hpp
	${compile_mode} -c Container.cpp

MyExeption.o : MyExeption.cpp GeneralDefines.hpp MyExeption.hpp
	${compile_mode} -c MyExeption.cpp

Variable.o :Variable.cpp GeneralDefines.hpp Thing.hpp Variable.hpp
	${compile_mode} -c Variable.cpp

Thing.o : Thing.cpp GeneralDefines.hpp Thing.hpp
	${compile_mode} -c Thing.cpp

clean :
	rm *.o *.out