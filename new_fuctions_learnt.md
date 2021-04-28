## 1
```
#include<algorithm>
std::fill_n(array, 100, -1);
```
In C++, to set them all to -1, you can use something like std::fill_n (from <algorithm>)

set all elements to 0
arr[n] = {0}

## 2
```
#include<string>
string s;
s.length()
```
Gives length of the string

## 3
```
#include<string>
s.erase(10,8)
```
don't forget to do i--
For further reading - https://www.cplusplus.com/reference/string/string/erase/

## 4
```
sort(str.begin(), str.end());

## For array use this syntax
sort(arr, arr+n)
```
sort string - https://www.geeksforgeeks.org/sort-string-characters/

sort array- https://www.geeksforgeeks.org/sort-c-stl/

## 5
Learnt about set
https://www.geeksforgeeks.org/set-in-cpp-stl/

## 6 
String concatenation - https://www.w3schools.com/cpp/cpp_strings_concat.asp
String compare - https://www.cplusplus.com/reference/string/string/compare/

## 7
min function
```
std::min({ 1, 2, 3, 4, 5, 0, -1, 7 }, comp)
```
comp is optional
https://www.geeksforgeeks.org/stdmin-in-cpp/

## 8
transform function transform all charater acc to a function
```
 // su is the string which is converted to uppercase
    string su = "Jatin Goyal";
  
// using transform() function and ::toupper in STL
    transform(su.begin(), su.end(), su.begin(), ::toupper);
```
https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/

## 9
reverse string
```
// Reverses elements in [begin, end]
void reverse (BidirectionalIterator begin, 
BidirectionalIterator end);
```
https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

## 10
```
string s;
s.insert(iterator, character);
```
don't forget to do i++ every loop