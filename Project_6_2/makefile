compile_mode = g++ -std=c++11

all : 2.out

2.out : Main.o ManageCommands.o Messenger.o Bot.o Channel.o MyException.o
	${compile_mode} Main.o ManageCommands.o Messenger.o Bot.o Channel.o MyException.o -o 2.out

Main.o : Main.cpp ManageCommands.hpp Messenger.hpp Bot.hpp Channel.hpp MyException.hpp Defines.hpp
	${compile_mode} -c Main.cpp

ManageCommands.o : ManageCommands.cpp ManageCommands.hpp Messenger.hpp Bot.hpp Channel.hpp MyException.hpp Defines.hpp
	${compile_mode} -c ManageCommands.cpp

Messenger.o : Messenger.cpp Messenger.hpp Bot.hpp Channel.hpp MyException.hpp Defines.hpp
	${compile_mode} -c Messenger.cpp

Channel.o : Channel.cpp Bot.hpp Channel.hpp Defines.hpp
	${compile_mode} -c Channel.cpp

Bot.o : Bot.cpp Bot.hpp Channel.hpp Defines.hpp
	${compile_mode} -c Bot.cpp

MyException.o : MyException.cpp MyException.hpp Defines.hpp
	${compile_mode} -c MyException.cpp

clean : 
	rm *.o *.out
