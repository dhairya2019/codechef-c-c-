#include <iostream>
using namespace std;

int main() {
  int t=0;
  cin>>t;
  for(int i=0;i<t;i++){
      int p=1;
      int n=0;
      cin>>n;
      for(int j=2;j<=n;j++){
          p=p*j;
      }
      cout<<p<<endl;
  }
	return 0;
}
