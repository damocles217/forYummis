FILES=*.c

main: $(FILES)
	gcc -o main $(FILES)

clear:
	rm main