CC = gcc
CFLAGS = -Wall -Wextra -std=c99

EXEC1 = array1
EXEC2 = array2

.PHONY: all clean

all: $(EXEC1) $(EXEC2)

$(EXEC1): arraySum.c
	$(CC) $(CFLAGS) arraySum.c -o $(EXEC1)

$(EXEC2): arraySum2.c
	$(CC) $(CFLAGS) arraySum2.c -o $(EXEC2)

clean:
	rm -f $(EXEC1) $(EXEC2)
