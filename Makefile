client_p06_cya: client_p06.cc dfa.cc transition.cc state.cc language.cc chain.cc alphabet.cc symbol.cc
	g++ -o client_p06 client_p06.cc dfa.cc transition.cc state.cc language.cc chain.cc alphabet.cc symbol.cc

clean:
	rm -rf *.txt client_p06
