#include "Items.h"

int Items::ID_count = 0;

Items::Items(int effect, int buy_cost, int sell_cost) {
	Items::ID = ID_count;
	Items::effect = effect;
	Items::buy_cost = buy_cost;
	Items::sell_cost = sell_cost;
	ID_count++;
}