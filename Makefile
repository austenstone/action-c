all: action.exe

action.exe: main.o
	 gcc -o action.exe main.o

action.o: main.c
	 gcc -c main.c
     
clean:
	 rm main.o action.exe``