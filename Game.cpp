#include <iostream>
#include <stdlib.h>

using namespace std;

class Player {
  protected:
    int hp;

  public:
    Player() {
      hp = 100;
    }

    void attack(Player& player) {
      player.lostHP();
    }

    void showStats() {
      cout << "HP : " << hp << endl;
    }

    int getHp() {
      return hp;
    }
  private:
    void lostHP() {
      hp -= 10;
    }
};


int main() {
  Player player1;
  Player player2;

  cout << "Player1:"; player1.showStats();
  cout << "Player2:"; player2.showStats();

  while(player1.getHp() > 0 && player2.getHp() > 0) {
    int r = random()%5;
    if(r == 1 || r == 2) {
      player1.attack(player2);
      cout << "Player1:"; player1.showStats();
      cout << "Player2:"; player2.showStats();
    }else {
      player2.attack(player1);
      cout << "Player1:"; player1.showStats();
      cout << "Player2:"; player2.showStats();
    }
  }

  cout << endl << endl;

  if(player1.getHp() == 0) {
    cout << "Player 2 won." << endl;
  }

  if(player2.getHp() == 0) {
    cout << "Player 1 won." << endl;
  }

}
