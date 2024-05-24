CC = cc
CFLAGS = -Wall -Wextra -fsanitize=address,undefined -g

main: main.c
	$(CC) $(CFLAGS) main.c -o main

secondary: secondary.c
	cc secondary.c -o secondary

# -Wall: Enables all the commoon warnings
# -Wextra: Enables additional warnings
# =Fsanitizer=address,undefined: Enables AddressSanitizer and undefinedBehaviorSanitizer
# -g: Includes debugging information in the executable
