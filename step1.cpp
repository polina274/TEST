#include<iostream>
#include<string>
using namespace std;
string r(string s) {
	int k = 0;
	string temp = "";
	for(int i = 0; i < s.size(); i++) {
		if(k == 1 && s[i] != ' ') {
			temp = temp + s[i];
		} 
		if(s[i] == ' ') {
			k++;
		}
		if(k == 2) {
			return temp;
		}
	}
	if (k==1) {
		temp;
	}
	if(k == 0) {
		return "";
	}
}

string reverse(string s) {
	string temp = "";
	for(int i = s.size() - 1; i >= 0; i--) {
		temp = temp + s[i];	
	}
	return temp;
}

void sort(string s[], int k) {
	for(int i = 0; i < k; i++) {
		for(int j = i + 1; j < k; j++) {
			if(s[i] > s[j] {
				swap(s[i], s[j]);
			}
		}
	}
}
 
int main() {
	int n;
	cin>>n;
	string s1[n]; 
	for(int i = 0; i < n; i++) {
		cin>>s1[i];
	}
	
	sort(s1, n);
	for(int i = 0; i < n; i++) {
		cout<<s1[i]<< " ";
	}
}
