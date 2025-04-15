#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int N;
	char Game;
	int gamePlayer = 0;
	string iD;
	int count = 0;

	vector<string> player;

	cin >> N >> Game;

	if (Game == 'Y') {
		gamePlayer = 2;
	}
	else if (Game == 'F') {
		gamePlayer = 3;
	}

	else {
		gamePlayer = 4;
	}

	for (int i = 0; i < N; i++) {
		cin >> iD;
		player.push_back(iD);
	}

	sort(player.begin(), player.end());
	auto it = unique(player.begin(), player.end());
	player.erase(it, player.end());

	int playerN = player.size() + 1;

	while (playerN >= gamePlayer) {
		playerN -= gamePlayer;
		count++;
		playerN++;
	}

	cout << count;
	
	return 0;
}