/*
	Submitted by:
	
		Ashish Soni
		Roll no: 6
*/


#include "pch.h"
#include <iostream>

using namespace std;



bool is_SubSequence(string sub_seq[], string seq[], int sub_size, int seq_size) {
    
    int j = 0;
    
    for(int i = 0; i < seq_size; i++)
    {
        if(j == sub_size)
        { break; }
        
        if(sub_seq[j] == seq[i])
        { j++; }
    }
    
    if(j != 0 && j == sub_size)
    { return true; }
    
    return false;
}



int main() {
    
    string visited[] = {"buy Yahoo", "buy eBay", "buy Yahoo", "buy Oracle"};
    string sites[] = {"buy Amazon", "buy Yahoo", "buy eBay", "buy Yahoo", "buy Yahoo", "buy Oracle"};
    
    int visited_size = sizeof(visited) / sizeof(string);
    int sites_size = sizeof(sites) / sizeof(string);
    
    if(is_SubSequence(visited, sites, visited_size, sites_size))
    { cout << "Subsequence" << endl; }
        
    else
    { cout << "Not a Subsequence" << endl; }
    
    return 0;
}
