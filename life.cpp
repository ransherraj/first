#include <iostream>
using namespace std;

int main() {
	
	
	int life[1000];
	int i=0,len=0;
	while(1){
		cin>>life[i];
		len++;
		if(life[i]==42){
			break;
		}
		i++;
	}


	cout<<"\n";
	for(i=0;i<len-1;i++){
		cout<<life[i]<<"\n";
	}
	// your code goes here
	return 0;
}