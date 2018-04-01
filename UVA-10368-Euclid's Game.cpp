#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug cout<<"The bug is here!!"<<endl;
#define f first
#define s second
#define Ayoub cin.tie(0);std :: ios :: sync_with_stdio (false);
using namespace std;
int play(int a, int b) {
    //cout<<a<<" "<<b<<endl;
    if(b==0)
		return 0;
	if(a/b > 1)
		return 1;
	return play(b,a-b)+1;
}

int main()
{
    Ayoub
    ll a,b;
	while(cin >> a >> b ){
		if(a == 0  && b == 0)
			break;
		if(a < b)
			swap(a,b);
		int numTurns = play(a,b);
		if(numTurns%2)
			cout << "Stan wins" <<endl;
		else
			cout << "Ollie wins"<<endl;
	}
	return 0;
}
