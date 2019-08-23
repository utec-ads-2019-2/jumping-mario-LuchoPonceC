#include <bits/stdc++.h>

using namespace std;

int main() {

	int casos,muro,altura,temp,actual,up=0,down=0;

	cin>>casos;

	for(int i=0;i<casos;i++){
		cin>>muro;
		for(int j=0;j<muro;j++){
			if(j==0){
				cin>>temp;	
			}
			else{
				cin>>actual;
				if(actual>temp){
					up++;
				}
				else if(actual<temp){
					down++;
				}
				temp = actual;
			}
			
		}
		cout<<"Case "<<i+1<<": "<<up<<" "<<down<<endl;
		up = 0;
		down = 0;
	}

	return EXIT_SUCCESS;
}

