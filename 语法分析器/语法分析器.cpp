#include <iostream>
#include"grammar.h"
int main()
{
	grammar g;
	g.grammar::remove_recursion();
	g.grammar::output_productions();
	g.output_first();
	g.output_follow();
}
