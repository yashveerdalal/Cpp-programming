// ASCII (American Standard Code for Information Interchange) is a character encoding standard that uses numerical values to represent characters. Each ASCII value corresponds to a specific character, ranging from control characters to printable characters. 

// Here are the ASCII values for the alphabetic characters in decimal:
// 0 : 48
// Uppercase Letters (A-Z)
// A: 65
// B: 66
// C: 67
// D: 68
// E: 69
// F: 70
// G: 71
// H: 72
// I: 73
// J: 74
// K: 75
// L: 76
// M: 77
// N: 78
// O: 79
// P: 80
// Q: 81
// R: 82
// S: 83
// T: 84
// U: 85
// V: 86
// W: 87
// X: 88
// Y: 89
// Z: 90
// Lowercase Letters (a-z)
// a: 97
// b: 98
// c: 99
// d: 100
// e: 101
// f: 102
// g: 103
// h: 104
// i: 105
// j: 106
// k: 107
// l: 108
// m: 109
// n: 110
// o: 111
// p: 112
// q: 113
// r: 114
// s: 115
// t: 116
// u: 117
// v: 118
// w: 119
// x: 120
// y: 121
// z: 122

#include<iostream>
using namespace std;
int main(){
char letter;
cout<<"enter the Character:";
cin>>letter;
cout<<"the ascii value of the given Character is "<< int(letter)<<endl;


int number;
cout<<"enter the number:";
cin>>number;
char Character = (char)number;
cout<<"the ascii character of the given number is "<< Character;


};