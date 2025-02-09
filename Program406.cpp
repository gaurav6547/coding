//Find All Palindrome Substrings

#include<iostream>
#include<string>
//#include<unordered_set>

using namespace std;



string _reverse(string input)
{
	string temp;
	for(int i = input.length(); i>= 0; i--)
	{
		temp += input[i];
	}
	return temp;
}

void _palindrome(string input)
{
	string temp1;
	string temp2;
	for(int i = 0; i < input.length(); i++){
		for(int j = i + 1; j < input.length() ; j++){
			if(input[i] == input[j])
			{
				temp1 = _reverse(input);
//				int ans = str.compare(input,temp1,i , j - i + 1);
//				if(ans){
					cout << input << " is palindrome." << endl;
//				}else{
					cout << "not" << endl;
//				
			}
		}
	}
}

int main()
{
	string str = "google";
//    palindromeSubstrs(str);
	cout << _reverse(str);	
	return 0;
}
/*

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
// Expand in both directions of `low` and `high` to find all palindromes
void expand(string str, int low, int high, auto &set)
{
    // run till `str[low.high]` is not a palindrome
    while (low >= 0 && high < str.length() && str[low] == str[high])
    {
        // push all palindromes into a set
        set.insert(str.substr(low, high - low + 1));
 
        // Expand in both directions
        low--, high++;
    }
}
 
// Function to find all unique palindromic substrings of a given string
void findPalindromicSubstrings(string str)
{
    // create an empty set to store all unique palindromic substrings
    unordered_set<string> set;
 
    for (int i = 0; i < str.length(); i++)
    {
        // find all odd length palindrome with `str[i]` as a midpoint
        expand(str, i, i, set);
 
        // find all even length palindrome with `str[i]` and `str[i+1]` as
        // its midpoints
        expand(str, i, i + 1, set);
    }
 
    // print all unique palindromic substrings
    for (auto i: set) {
        cout << i << " ";
    }
}
 
int main()
{
    string str = "google";
 
    findPalindromicSubstrings(str);
 
    return 0;
}
*/
