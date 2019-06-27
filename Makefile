CC = g++
CFLAGS = -Wall -g

OBJS = Bispo.o Cavalo.o Peao.o Rainha.o Rei.o Torre.o Jogo.o Posicao.o Tabuleiro.o Peca.o Jogador.o main.o

xadrez: $(OBJS)
	$(CC) -o xadrez $(OBJS)

Bispo.o: Bispo.h Peca.h
Cavalo.o: Cavalo.h Peca.h
Torre.o: Torre.h Peca.h
Rainha.o: Rainha.h Peca.h
Rei.o: Rei.h Peca.h
Peao.o: Peao.h Peca.h
Jogador.o: Jogador.h Peca.h
Jogo.o: Jogador.h Tabuleiro.h Peca.h Jogo.h
Peca.o: Peca.h
Posicao.o: Posicao.h Peca.h
Tabuleiro.o: Tabuleiro.h Posicao.h
main.o: Jogo.h


.PHONY : clean
clean:
	rm -f *.o *~ xadrez