/*
not my solution, original one time limit exceeded, so i found this on another githup repo but i'm posting it to keep the solutions of the book
in one place
*/

#include<iostream>
using namespace std;
int main(){
int point;
	int size;
	while(cin >> size >> point && (point || size))
	{
		if(point == 1)
		{
			int half = (size >> 1) + 1;
			cout << "Line = " << half << ", column = " << half << ".\n";
		}
		else
		{
			int ring = 1;
			while(point > ring * ring)
				ring += 2;
			
			int ringsAfterCurrent = (size - ring) >> 1;
			
			if(ring * ring == point)
				cout << "Line = " << size - ringsAfterCurrent << ", column = " << size - ringsAfterCurrent << ".\n";
			else
			{
				int lowerBound = (ring - 2) * (ring - 2);
				if(point < lowerBound + ring)
					cout << "Line = " << size - ringsAfterCurrent << ", column = " << lowerBound + ring + ringsAfterCurrent - point << ".\n";
				else if(point > lowerBound + ring - 1 && point < lowerBound + (ring << 1) - 1)
					cout << "Line = " << lowerBound + (ring << 1) + ringsAfterCurrent - point - 1 << ", column = " << ringsAfterCurrent + 1 << ".\n";
				else if(point > lowerBound + ((ring - 1) << 1) && point < lowerBound + 3 * ring - 2)
					cout << "Line = " << ringsAfterCurrent + 1 << ", column = " << point - (lowerBound + (ring << 1)) + ringsAfterCurrent + 3 << ".\n";
				else
					cout << "Line = " <<  point - (lowerBound + 3 * ring - 3) + ringsAfterCurrent + 1 << ", column = " << size - ringsAfterCurrent << ".\n";
			}
		}
	}
	return 0;	
}
