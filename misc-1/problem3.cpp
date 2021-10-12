#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

float mean(float a, float b) {              //function to find mean

	float c;
	c = (a + b)/2;
	return c;
}

//template<typename T>

array<float, 5> newArr(array<float, 5> array1, array<float, 5> array2) {    //function to assign mean to another array

	array<float, 5> ans;         //empty = {{ _, _, _, _, _ }}

	for(auto it = 0; it < ans.size(); ++it) {                   //STL = standard template library 
		ans[it] = mean(array1[it], array2[it]);  //mean = 2222, 131   C = mean(array1[it], array2[it]);
 	}

 	return ans;
}

int main() {

	array<float, 5> arr1 = {{2222, 471, 61, 88, 1012}};
	array<float, 5> arr2 = {{131, 3315, 155, 751, 59}};

	array<float, 5> results;

	results = newArr(arr1, arr2);   

	for(auto it: results) cout << it << endl;
}
