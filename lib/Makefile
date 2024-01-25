### Makefile for the Create CanLab CLPE Server API ###
    
CC=g++
AR=ar
LIB=libMakeLog.a
OBJS=MakeLog.o

$(LIB): $(OBJS)
		$(AR) rv $@ $(OBJS)

%.o: %.cpp
	 $(CC) -c -I../include $< -o $@

clean:
		rm -f $(OBJS) $(LIB)  
