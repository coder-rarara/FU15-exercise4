#include <iostream>
#include <random>

constexpr int ROUNDS=5;

int main() {
  std::random_device coin;
  std::cout << "Tossing a coin..." << std::endl;
  int head_count=0, tail_count=0;
  for (int i = 0; i < ROUNDS; i++)
  {
    int round=(int(coin())%2);
    std::cout << "Round " << i+1 << ": ";
    if(round==1) {
      std::cout << "Heads" << std::endl;
      head_count++;
    }
    else {
      std::cout << "Tails" << std::endl;
      tail_count++;
    }
  }
  std::cout << "Heads: " << head_count << ", Tails: " << tail_count << std::endl;
}