#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
 /* Class data:
 * Solution is the constructor, and takes in the vector that was read by the driver.
 * The driver will call outputVector(). This is where you should calculate the resultant vector.
 * You can store both values, if you wish. The constructor stores the input vector in m_inputVector.*/
    public:
        Solution(vector<int> in_vector);
        vector<int> outputVector();
        vector<int> m_inputVector;
        vector<int> m_outputVector;
};



Solution::Solution(vector<int> in_vector) :
    m_inputVector(in_vector)
{}


vector<int> Solution::outputVector(){ 
	int x = 0;
	vector<int> temp_vec;
	reverse(m_inputVector.begin(), m_inputVector.end());
	for (int i = 0; i < m_inputVector.size(); i++) {
		x = x + m_inputVector[i];
		temp_vec.push_back(x);
	}
	reverse(temp_vec.begin(), temp_vec.end());
	m_outputVector = temp_vec;
    return m_outputVector;
}
