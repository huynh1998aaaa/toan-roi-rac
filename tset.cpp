#include <iostream>
using namespace std;
#include "dothi.h"
#include "list.h"
#include "node.h"
int main()
{
	DoThi d("dothi1.txt");
	//d.Print();
	//for (int v=1; v<= d.GetSoDinh(); v++)
	//cout<<v<<" . "<<d.Bac(v)<<endl;
	//cout<<d.KeVoi(2)<<endl;
	//list<int> l;
	//l.Add(5);
	//l.Add(10);
	//l.Add(15);
	//cout<<l;
	list<int> k=d.KeVoi(2);
	cout<<k;
	return 0;
}