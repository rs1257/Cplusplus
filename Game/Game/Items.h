#pragma once

class Items {
public:
	static int ID_count;
	int ID;
	int effect;
	int buy_cost;
	int sell_cost;

	Items(int effect, int buy_cost, int sell_cost);
};
