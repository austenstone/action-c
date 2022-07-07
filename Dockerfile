FROM gcc:latest
COPY main.c .
RUN gcc -o main main.c
ENTRYPOINT ["./main"]