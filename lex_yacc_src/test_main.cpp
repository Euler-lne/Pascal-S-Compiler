#include "main.h"


#include <fstream>
#include <sstream>

extern int yyparse();


string itos(int num){
	stringstream sin;
	sin<<num;
	return sin.str();
}

int main() {
	yyparse();
    return 0;
}

