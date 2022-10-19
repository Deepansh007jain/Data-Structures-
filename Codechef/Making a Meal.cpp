#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define nl cout<<endl;
#define pb push_back
#define minele(a) *min_element(a.begin(), a.end())
#define maxele(a) *max_element(a.begin(), a.end())


using namespace std;
//   for(int i=0; i<n; i++)  { cin>>  a[i]  ;    }




int main() {
	int t ;  
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    string     s[n];
	     for(int i=0; i<n; i++)  { cin>>  s[i]  ;  }
	     
	     vector<int> cnt (7,0) ;
	     cnt[0]=9999;
	     
	      for(int i=0; i<n; i++)  {
	          for(int j=0; j<s[i].length(); j++){
	           //   int num = s[i][j]-'a'+ 0;
	           //   cnt[num]++;
	           if(s[i][j] == 'c' ) cnt[1]++;
	           if(s[i][j] == 'e' ) cnt[2]++;
	           if(s[i][j] == 'd' ) cnt[3]++;
	           if(s[i][j] == 'o' ) cnt[4]++;
	           if(s[i][j] == 'f' ) cnt[5]++;
	           if(s[i][j] == 'h' ) cnt[6]++;
	           
	           
	          }
   }
   
   cnt[1]/=2;
   cnt[2]/=2;
//   cout<<cnt[1];
   int mini = minele(cnt);
   
    //   for(int i=1; i<7; i++)  {
    //       cout<<cnt[i]<<"  " ;    }
          cout<<mini;
	           nl;
	          

    
	}
	return 0;
}
