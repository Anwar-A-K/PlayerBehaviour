#include <iostream>

using namespace std;

int playerHealth;
float attack;
int defense;
int healingpower;

void TakeDamage(int damageToInflict) {
	playerHealth -= damageToInflict;
	cout << "The player has taken " << damageToInflict << " damage" << endl;
	cout << "The player health is " << playerHealth << endl;
}

void Heal(int healthToRecover) {
	playerHealth += healthToRecover;
	cout << "The player has healed " << healthToRecover << " health" << endl;
	cout << "The player health is " << playerHealth << endl;
}

void DamageMultiplier(float multiplier) {
	attack *= multiplier;
	cout << "The player has attack incraesed to " << attack << " damage" << endl;
	cout << "The player health is " << playerHealth << endl;
}

int main()
{

	cout << "Enter player health: ";
	cin >> playerHealth;
	cout << endl << "Enter player attack damage: ";
	cin >> attack;
	cout << endl << "Enter player defense value: ";
	cin >> defense;
	cout << endl << "Enter player healing power: ";
	cin >> healingpower;
	cout << endl;

	TakeDamage(20);
	Heal(10);
	DamageMultiplier(0.5)


}
