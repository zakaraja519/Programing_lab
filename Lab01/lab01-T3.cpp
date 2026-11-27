/*
  * Lab          :   01   -   T3
  * Name      :   Zaka Ur Rehman
  * Roll  No   :   2026-SET-01
  * Date         :   24-11-2026
  * Purpose  :   Find bugs in program
  */
  #include <iostream>
  using namespace std; // BUG 1: missing ; after std
  int main()
  {
  	cout << "Wellcome to the lab!" << endl;
  	cout << "Today we learn \"C++.\"" << endl; // BUG 2: Cout should be cout \\ BUG 3: C+ should be C++
  	cout << "Files are in C: \\Lab01" << endl; // BUG 4: \ should be \\ for backslash
  	cout << "Bye!" << endl; // BUG 5: missing closing " after Bye!
  	return 0;
}