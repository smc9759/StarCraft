#include <iostream>

class Marine {
	int hp;                // ���� ü��
	int coord_x, coord_y;  // ���� ��ġ
	int damage;            // ���ݷ�
	bool is_dead;
public:
	Marine();
	Marine(int x, int y);
};