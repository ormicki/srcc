CC = g++
LIBS = 
INCLUDE = 
OPTS          = -o
CLASS_BUILD   = -c
DEBUG         = -Wall -g


all:
	@$(CC) $(OPTS) main main.cpp Server.cpp
	@cp main ../bin/server
	@rm main
	@echo "Build"
	
clean:
	@rm *.o
	@echo "Cleaned"

