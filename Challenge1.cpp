#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <cassert>
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec) {
    for(auto elem: vec) {
        cout << elem << ' ';
    }
    cout << '\n';
}

void printVectorString(vector<string> vec) {
    for(auto elem: vec) {
        cout << elem << ' ';
    }
    cout << '\n';
}

void combinations(vector<int> num) {
    int res = 1;
    for (int i = 0; i < num.size(); i++)
    {
        if(num.at(i) != 0) {
            res = res * num.at(i);
        }
    }
    std::cout << res;
}

void square(int n) {
    cout << n*n;
}

void addition(int n) {
    cout << n + 1;
}

void nextEdge(int a, int b) {
    cout << (a + b) -1;
}

void triArea(int base, int height) {
	cout << (base * height)/2 ;
}

void sortNumsAscending(vector<int> arr) {
    sort(arr.begin(), arr.end());
    for (auto element : arr) {
        cout << element << " ";
    }
}

void maskify(std::string str) {
    if(int(str.length()) - 4 > 0) {
        for(int i = 0; i < (str.length() - 4); i++) {
            str.replace(i, 1, "#");
        }
    }
    cout << str;
}

void fizzBuzz(int num){
	if(num % 3 == 0 && num % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if(num % 3 == 0) {
        cout << "Fizz";
    }
    else if(num % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << to_string(num);
    }
}

void getAbsSum(vector<int> arr) {
	int res = 0;
    for(auto elem: arr) {
        res += abs(elem);
    }
    cout << res;
}

void longBurp(int num) {
    string res = "Bup";
    for(int i = 0; i < num; i++) {
        res.insert(2, "r");
    }
    cout << res;
}

void isSafeBridge(string s) {
    cout << (count(s.begin(), s.end(), ' ') != 0);
}

void noOdds(vector<int> arr) {
    vector<int> evens;
	for(int i : arr){
        if(i % 2 == 0) evens.push_back(i);
    }
    printVector(evens);
}

void dnaToRna(string dna) {
	map<string, string> map;
    map["A"] = "U";
    map["T"] = "A";
    map["G"] = "C";
    map["C"] = "G";
    for(int i = 0; i < dna.length(); i++) {
        dna.replace(i, 1, map.at(string(1, dna.at(i))));
    }
    cout << dna;
}

void countVowels(string str) {
	 int c = count_if(str.begin(), str.end(), [](char i, string vowels = "aeiou") \
            { return find(vowels.begin(), vowels.end(), i) != vowels.end(); });

    cout << c;
}

void numberSyllables(string word) {
    int c = count(word.begin(), word.end(), '-') + 1;
    cout << c;
}

void solutions(int a, int b, int c) {
	int delta = b*b - 4*a*c;
    if(delta > 0) {
        cout << 2;
    } else if(delta == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
}

void changeEnough(vector<int> change, float amountDue) {
    float amountPocket = 0;
    map<int, float> map;
    map[0] = 0.25;
    map[1] = 0.1;
    map[2] = 0.05;
    map[3] = 0.01;
    for(int i = 0; i < change.size(); i++) {
        amountPocket += (float)change.at(i) * map.at(i);
    }
    cout << ((amountPocket - amountDue) < 0)? "false":"true"; 

	
}

void countWords(string str) {
	cout << count(str.begin(), str.end(), ' ') + 1;
}

void lastDig(int a, int b, int c) {
    a = a % 10;
    b = b % 10;
    c = c % 10;

    cout << a << '*' << b << " = " << (a * b) % 10 << " == " << c << '\n'; 
    cout << (((a * b) % 10 == c)? "true":"false");
}

void alphabetSoup(string str) {
	sort(str.begin(), str.end());
    cout << str;
}

void countBits(unsigned long long n){
  string bits = "";
  int i = 0;
  while(n > 0) {
    if(n % 2 == 1) {
        i++;
    }
    n = n / 2;
  }
  cout << i;
}

void whoLiked(vector<string> names) {
    string people = "";
    switch (names.size()) {
    case 0:
        people += "no one like this";
        break;
    case 1:
        people += names.at(0) + " like this";
        break;
    case 2:
        people += names.at(0) + " and " + names.at(1) + " others like this";
        break;
    case 3:
        people += names.at(0) + ", " + names.at(1) + " and " + names.at(2) + " like this";
        break;
    default:
        people += names.at(0) + ", " + names.at(1) + " and " + to_string(names.size() - 2) + " others like this";
        break;
    }
    cout << people; // Do your magic!
}

void towerBuilder(unsigned nFloors) {
  int max = (2 * nFloors) - 1;
  int i = 0;
  vector<string> str;
  while(++i <= nFloors) {
    string aux = "\"\"";
    int num = (2 * i) - 1;
    int spaces = (max - num) / 2;
    string auxSpaces = "";
    string auxCard = "";
    while(spaces > 0 || num > 0) {
      if(spaces > 0) {
        auxSpaces += " ";
        spaces--;
      } 
        cout << "*: " << num << '\n';
      if(num > 0) {
        auxCard += "*";
        num--;
      }
    }
    auxSpaces += auxCard + auxSpaces;
    aux.insert(1, auxSpaces);
    str.push_back(aux);
    printVectorString(str);
  }
}

string decToHex(int value) {
    string res = "";
    int v = value;
    if(value == 0) {
        return "00";
    }
    while(value > 0) {
        int aux = (value % 16) < 10? 48: 55;
        res += string(1, char(aux + value % 16));
        value = value / 16;
    }
    if(v > 15) {
        reverse(res.begin(), res.end()); 
    } else {
        res.insert(0, "0");
    }
    
    return res;
}

void rgb(int r, int g, int b) {
    string res = ""; 
    res += decToHex(r) + decToHex(g) + decToHex(b);
    cout << res;
}

void createPhoneNumber(const int arr [10]) {
    //cout << "(" + arr[0] + arr [1] + arr[2] + ") " + arr[3] + arr [4] + arr[5] + "-" + arr[6] + arr [7] + arr[8] + arr[9];
}

void duplicateEncoder(const string& word) {
    string temp = "";
    string res = "";
    for(int i = 0; i < word.length(); i++) {
        temp += tolower(word[i]);
        }
    for(int i = 0; i < temp.length(); i++) {
        int aux = count(temp.begin(), temp.end(), temp[i]);
        res += aux == 1? '(':')';
    }
    cout << res;
}  

void persistence(long long n){
    int c = 0;
    vector<int> vec;
    while(true) {
        if(n / 10 == 0) {
            break;
        }
        vec.push_back(n % 10);
        n = n / 10;
        if(n / 10 == 0) {
            for(auto elem: vec) {
                n = n * elem;
            }
            c++;
            vec.clear();
        }
    }
    cout << c;
}

int sumElements(vector<int> array, bool flag) {
    int res = 0;
    cout << "aaray: ";
    for(int i = 0; i < array.size(); i++) {
        if(flag && i == array.size() - 1) {
            break;
        }
        cout << array[i] << ' ';
        res += array[i];
    }
    cout << '\n';
    return res;
}

void find_even_index (const vector <int> numbers) {
    vector<int> left = {numbers[0]};
    vector<int> right; 
    int sumLeft, sumRight, index = 0;
    for(int i = 1; i < numbers.size(); i++){
        right.push_back(numbers[i]);
    }
    while(true) {
        sumLeft = sumElements(left, true);
        sumRight = sumElements(right, false);
        cout << "SUM LEFT: " << sumLeft << " SUM RIGHT: " << sumRight << '\n';
        if(sumLeft == sumRight) {
            break;    
        }
        index++;
        if(index == numbers.size()) {
            cout << -1;
        }
        left.push_back(numbers[index]);
        right.erase(right.begin());
    }
    cout << index;
}

void findOdd(const std::vector<int>& numbers){
  for (auto elem: numbers){
    if (std::count(numbers.begin(), numbers.end(), elem) % 2 != 0) {
      cout << elem;
      break;
    }
  }
}

void dirReduc(std::vector<std::string> &arr) {
    map<string, string> guide;
    guide.insert({"NORTH", "SOUTH"});
    guide.insert({"SOUTH", "NORTH"});
    guide.insert({"EAST", "WEST"});
    guide.insert( {"WEST", "EAST"});
    int i = 0;
    while(i < arr.size() - 1) {
        if(arr[i+1] == guide.find(arr[i])->second) {
            arr.erase(arr.begin() + i + 1);
            arr.erase(arr.begin() + i);
            i = 0;
        } else {
            i++;      
        }
    }
    printVectorString(arr);
}

void sqInRect(int lng, int wdth){
    vector<int> res;
    int diff;
    if(lng == wdth) {
        cout << "[]";
    }
    while(true) {
        if(lng == wdth) {
            res.push_back(lng);
            break;
        }
        diff = lng - wdth;
        diff > 0 ? res.push_back(wdth): res.push_back(lng);
        lng = diff > 0? diff: lng;
        wdth = diff < 0? abs(diff): wdth;
    }
    printVector(res);
}



int main() {
    vector<int> array = {1,100,50,-51,1,1};
    vector<string> people = {"NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH"};
    /* Test combinations
    combinations(array);
    square(3);   
    addition(9);
    nextEdge(3, 4);
    triArea(3, 4);
    sortNumsAscending(array);
    maskify("1");
    fizzBuzz(5);
    getAbsSum(array);
    longBurp(4);
    isSafeBridge("## ##");
    noOdds(array);
    dnaToRna("CGATATA");
    countVowels("Celebration");
    numberSyllables("buf-fet");
    solutions(1, 0, 0);
    changeEnough(array, 9);
    lastDig(12, 215, 2142);
    alphabetSoup("javascript");
    countBits(77231418);
    whoLiked(people);
    rgb(0,0,0);
    createPhoneNumber(array);
   persistence(444);
   find_even_index(array);
   dirReduc(people);
    */
   sqInRect(5, 3);
   return 0;
} 