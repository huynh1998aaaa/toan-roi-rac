#ifndef dothi_h
#define dothi_h
#include <fstream>
#include "list.h"
using namespace std;
class DoThi
{
private:
	int N;
	int a[100][100];
public:
	DoThi()
	{
		N=0;
	};
	DoThi(const char * fileName)
	{
		ifstream fin(fileName);
		fin >>N;
		for( int i=0; i<N; i++)
			for (int j=0; j<N; j++)
				fin>>a[i][j];
			fin.close();
	};
	void Print() const
	{
		cout<<"so dinh: "<<N<<endl;
		for (int i=0; i<N; i++)
		{
			for (int j=0;j<N;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	int Bac(int d) const
	{
		int b=0;
		for(int i=1;i<=N; i++)
			if(a[i-1][d-1]==1)
				b++;
			return b;
	}
	int GetSoDinh() const
	{
		return N;
	}
	list<int> KeVoi(int d) const
	{
		list<int>kq;
		for(int v=1;v<=N;v++)
			if(a[v-1][d-1])
				kq.Add(v);
			return kq;
	}

};

#endif