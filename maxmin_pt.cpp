#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int q,q2,i,j,px,py,c1,cy,cr,l1x,l1y,l2x,l2y,p=0;
	char ch;
	cin>>q;
	for(i=0;i<q;i++){
		cin>>q2;
		int px[q2],py[q2];
		if(p=0){
			for(j=0;j<q2;j++){
				cin>>ch>>px[j]>>py[j];
			}
			cout<<*min_element(px,px+q2)<<" "<<*min_element(py,py+q2)<<" "<<*max_element(px,px+q2)<<" "<<*max_element(py,py+q2)<<endl;
		}
		cin>>q2;
		else if(p=1){
			int cx1[q2],cx2[q2],cy1[q2],cy2[q2];
			int cx[q2],cy[q2],cr[q2];
			for(j=0;j<q2;j++){
				cin>>ch>>cx[j]>>cy[j]>>cr[j];
				cx1[j] = cx[j] + cr[j]; 
				cy1[j] = cy[j] + cr[j];
				cx2[j] = cx[j] - cr[j]; 
				cy2[j] = cy[j] - cr[j];
			}
			cout<<min(*min_element(cx1,cx1+q2),*min_element(cx2,cx2+q2))<<" "<<min(*min_element(cy1,cy1+q2),*min_element(cy2,cy2+q2))<<" "<<max(*max_element(cx1,cx1+q2),*max_element(cx2,cx2+q2))<<" "<<max(*max_element(cy1,cy1+q2),*max_element(cy2,cy2+q2))<<endl;
		}
		cin>>q2;
		else if(p=2){
		
			int lx1[q2],lx2[q2],ly1[q2],ly2[q2];
			for(j=0;j<q2;j++){
				
				cin>>lx1[j]>>ly1[j]>>lx2[j]>>ly2[j];
			}
			cout<<min(*min_element(lx1,lx1+q2),*min_element(lx2,lx2+q2))<<" "<<min(*min_element(ly1,ly1+q2),*min_element(ly2,ly2+q2))<<" "<<max(*max_element(lx1,lx1+q2),*max_element(lx2,lx2+q2))<<" "<<max(*max_element(ly1,ly1+q2),*max_element(ly2,ly2+q2))<<endl;
		}
		p++;
	}
	
	return 0;
}
