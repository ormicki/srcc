CC = g++
LIBS = 
INCLUDE = 
OPTS          = -o
CLASS_BUILD   = -c
DEBUG         = -Wall -g


all:
	@$(CC) $(OPTS) main main.cpp Worker.cpp
	@cp main ../bin/worker
	@rm main
	@echo "Build"
	
clean:
	@rm *.o
	@echo "Cleaned"
