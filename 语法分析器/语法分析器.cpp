#include <iostream>
#include"grammar.h"
#include"parser.h"
int main()
{
	parser p;
	p.table_derivation();
	p.output_parser_table();
	p.predict();
}
