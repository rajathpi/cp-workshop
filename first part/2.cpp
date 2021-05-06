/****
 * 
 * A volley ball match is played for a maximum of 5 sets.
 * Each set is for k points
 * (ie a team must score first k point with a min of 2 point lead wins the set,
 * if there's no 2 point lead, the set continues until we get a 2 point lead).
 * Team A and Team B are playing, find out who won the game?
 * 
 * Input is a string in which each character represents a point.
 * If the character is 'A', then Team A won that point.
 * If the character is 'B', then Team B won that point.
 * The string will consist of all the points played in the whole game.
 * Your job is to find out who won the game by processing the given string input.
 * 
 * Example Input: 
 * "AABABBABBAAABBABBAABAABABBAAAABABBBBABAABABAAAABAAA...."
 * 
 * Constraints: 
 * 2 <= k < 1000
 * 
 * Let k = 2, and string is "ABABABAABBABABABABABB..."
 * 
 * Breaking down the first 2 sets we get ABABABAA and BB
 * In the first set A and B alternatively scored points 3 times so no one got a 2 point lead, until
 * the 8th point which completes just one set.
 * In the second set B scored two points and won the set.
 * 
 ****/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
     string s;
     cin >> s;
     cout << s[s.size()-1] << endl;
}

