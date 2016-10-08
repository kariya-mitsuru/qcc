CXXFLAGS = -O3 -std=c++11
LIBFLAGS = -lm
CXX = clang++ $(CXXFLAGS)

qcc: main.o qcc.o pp.o token.o lexer.o parse.o
	$(CXX) -o qcc main.o qcc.o pp.o token.o lexer.o parse.o $(LIBFLAGS)

main.o: main.cpp common.hpp

qcc.o: qcc.cpp qcc.hpp common.hpp

pp.o: pp.cpp pp.hpp common.hpp

token.o: token.cpp token.hpp common.hpp

lexer.o: lexer.cpp lexer.hpp common.hpp

parse.o: parse.cpp parse.hpp common.hpp

clean:
	$(RM) qcc *.o
