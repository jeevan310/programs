
#include <iostream> 
using namespace std; 

struct Point 
{ 
    int x; 
    int y; 
}; 

int countBuildings(int building[], int n) 
{ 

	int count = 1; 
	int curr_max = building[0]; 
	for (int i=1; i<n; i++) 
	{ 
		
		if (building[i] > curr_max) 
		{ 
			count++; 
			curr_max=building[i]; 
		} 
	} 

	return count; 
} 


int main() 
{ 
	 Point building[] = {{4,0},{4,-5},{7,-5},{7,0}}; 
	int n = sizeof(building) / sizeof(building[0]); 
	cout << int countBuildings (building[], int n); 
	return 0; 
} 
