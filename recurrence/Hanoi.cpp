
#include <iostream>
#include <string>
#define stringify(N) #N

enum class Pillow : int{
  A,
  B,
  C,
};


int count = 0;

void Hanoi(int N, std::string src, std::string dest, std::string tmp) {

  if (N == 1) {
    std::cout << "Move " << N << " from " << src << " to " << dest << "\n";
    count++;
    return;
  }
  Hanoi(N-1, src, tmp, dest);
  std::cout << "Move " << N << " from " << src << " to " << dest << "\n";
  count++;
  Hanoi(N-1, tmp, dest, src);

}
int main() {

  Hanoi(5, stringify(Pillow::A), stringify(Pillow::C), stringify(Pillow::B));
  std::cout << "Total moves: " <<  count << "\n";


  return 0;
}


