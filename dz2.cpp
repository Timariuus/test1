#include <iostream>;
#include <string>;
using namespace std;

class Game {
	string genre;
public:
	string name;
	string get_genre() {
		return genre;
	};
	void set_genre(string g) {
		genre = g;
	}
};

int main() {
	Game m;
	m.set_genre("Sandbox");
	m.name = "Minecraft";
	cout << m.get_genre() << ' ' << m.name << endl;
}
