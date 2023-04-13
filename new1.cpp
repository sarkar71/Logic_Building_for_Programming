#include<bits/stdc++.h>
using namespace std;
// max of an array : 

int findMaxElement(int arr[], int n){
	int max = INT_MIN;
	for(int i = 0; i <= n - 1 ; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
// min of an arr: 
int findMinElement(int arr[], int n){
	int min = arr[0]; // int min = INT_MAX;
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

// sum of factorials :

int fact(int n){
	int fact = 1;
	for(int i = 1; i <= n; i++){
		fact = fact * i;
	}
	return fact;
}

int sumFactorials(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		int a = arr[i];
		sum = sum + fact(a);
	}
	return sum;
}	

// digit frequency count : 

int FrequencyCount(int arr[], int n){
	int frequencyCount[n];
	
	for(int i = 0; i < n; i++){
		int cnt = 0;
		int visited = -1;
		for(int j = i + 1; i < n; i++){
			if(arr[j] == arr[i]){
				cnt++;
				frequencyCount[j] = visited;
			}
		}
		if(frequencyCount[i] != visited){
			frequencyCount[i] = cnt;
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << frequencyCount[i] << " ";
	}
}



int main(){
	int n; cin >> n;
	int arr[n]; 
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int mx = findMaxElement(arr, n);
	int mn = findMinElement(arr, n);
	
	cout << mx << endl << mn << endl;
}