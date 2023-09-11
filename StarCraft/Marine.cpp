#include <iostream>

class Marine {
	int hp;                // 마린 체력
	int coord_x, coord_y;  // 마린 위치
	int damage;            // 공격력
	bool is_dead;
public:
	Marine();
	Marine(int x, int y);
};