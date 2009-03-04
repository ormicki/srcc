CC = g++
LIBS = 
INCLUDE = 
OPTS          = -o
CLASS_BUILD   = -c
DEBUG         = -Wall -g


all:
	@$(CC) $(OPTS) main main.cpp Client.cpp
	@cp main ../bin/client
	@rm main
	@echo "Build"
	
clean:
	@rm *.o
	@echo "Cleaned"

