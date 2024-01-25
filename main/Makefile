### Makefile for the Create CanLab CLPE Server API ###
    
CC=g++
EXEC=Log
OBJS=Log.o

$(EXEC): $(OBJS)
	 	 $(CC) -o $@ $(OBJS) -L../lib -lMakeLog

%.o: %.cpp
	 $(CC) -c $< -o $@ -I../include

clean:
		rm -f $(OBJS) $(EXEC) 
