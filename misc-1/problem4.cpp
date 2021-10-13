#include<iostream>
#include<vector>
#include<algorithm>
int main(){
  std::vector<char> anai;
  anai.push_back('O');
  anai.push_back('m');
  anai.push_back(' ');
  anai.push_back('J');
  anai.push_back('a');
  anai.push_back('j');
  anai.push_back('u');
  anai.push_back('l');
  anai.push_back('w');
  anai.push_back('a');
  anai.push_back('r');
  auto e=anai.rbegin();
  std::cout << *e ;
  std::cout << std::endl;
  for(auto anal: anai){std::cout << anal;}
  std::cout << std::endl;
  std::cout << anai.size();
  std::cout << std::endl;
  sort(anai.begin(),anai.end());
  for(auto anal: anai){std::cout << anal;}
  std::cout << std::endl;
  reverse(anai.begin(), anai.end());
  for(auto anal: anai){std::cout << anal;}
  std::cout << std::endl;
  for (auto it = anai.rbegin(); it != anai.rend(); it++){
  std::cout << *it;
  }
}
