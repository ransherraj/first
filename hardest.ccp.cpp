#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int q,q2,i,j,px,py,c1,cy,cr,l1x,l1y,l2x,l2y;
	char ch;
	cin>>q;
	for(i=0;i<q;i++){
		cin>>q2;
		cin>>ch;
		if(ch=="p"){
			for(j=0;j<q2;j++){
				int px[q2],qx[q2];
				cin>>px[j]>>py[j];
			}
			cout<<*min_element(px,px+q2)<<*min_element(py,py+q2)<<*max_element(px,px+q2)<<*max_element(py,py+q2);


		}
		else if(ch=="c"){
			for(j=0;j<q2;j++){
				int cx1[q2],cx2[q2],cy1[q2],cy2[q2];
				int cx[q2],cy[q2],cr[q2];
				cin>>cx[j]>>cy[j]>>cr[j];
				cx1[j]+=cr[j]; 
				cy1[j]+=cr[j];
				cx2[j]-=cr[j]; 
				cy2[j]-=cr[j];
			}
			cout<<min(*min_element(cx1,cx1+q2),*min_element(cx2,cx2+q2))<<min(*min_element(cy1,cy1+q2),*min_element(cy2,cy2+q2))<<max(*max_element(cx1,cx1+q2),*max_element(cx2,cx2+q2))<<max(*max_element(cy1,cy1+q2),*max_element(cy2,cy2+q2));
		}
		else if(ch=="l"){
			for(j=0;j<q2;j++){
				int l1x[q2],l2x[q2],l1y[q2],l2y[q2];
				cin>>l1x[j]>>l1y[j]>>l2x[j]>>l2y[j];
			}
			cout<<min(*min_element(cx1,cx1+q2),*min_element(cx2,cx2+q2))<<min(*min_element(cy1,cy1+q2),*min_element(cy2,cy2+q2))<<max(*max_element(cx1,cx1+q2),*max_element(cx2,cx2+q2))<<max(*max_element(cy1,cy1+q2),*max_element(cy2,cy2+q2));
		}
	}
	
	return 0;
}