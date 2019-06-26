CC = g++
CFLAGS = -Wall -g

OBJS = Bispo.o Cavalo.o Peao.o Rainha.o Rei.o Torre.o Jogo.o Posicao.o Tabuleiro.o Peca.o Jogador.o

xadrez: $(OBJS)
	$(CC) -o xadrez $(OBJS)

Bispo.o: Bispo.h Peca.h
Cavalo.o: Cavalo.h Peca.h
Jogador.o: Jogador.h Peca.h
Jogo.o: Tabuleiro.h Jogador.h Jogo.h
Peao.o: Peao.h Peca.h
Peca.o: Peca.h
Posicao.o: Posicao.h
Rainha.o: Rainha.h Peca.h
Rei.o: Rei.h Peca.h
Tabuleiro.o: Tabuleiro.h Posicao.h
Torre.o: Torre.h Peca.h

.PHONY : clean
clean:
	rm -f *.o *~ xadrez