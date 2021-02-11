#ifndef WAR
#define WAR

#include <string>

namespace war {

enum Squad_phonetic {
	able,
	baker,
	charlie, 
	dog, 
	easy, 
	fox, 
	item, 
	jig, 
	king, 
	mike, 
	negat, 
	option, 
	love
};

enum Role {
	commander = 1,
	officer,
	rifleman,
	machinegunner,
	anti_tank,
	assault,
	engineer,
	support,
	medic,
	tank_commander,
	crewman,
	spotter,
	sniper
};

enum Squad_role {
	attack,
	defense,
	dynamic,
	artillery,
	supplies,
	tank,
	recon,
	spec_ops
};

class Player {
	std::string name;
	public:
		Role role_in_squad;
		Role favorite_role;

};

class Squad {
	std::string squad_name;
	Squad_role squad_role;
	Player players[6];
	short number_of_players;
	Squad_phonetic desired_phonetic;
public:
	Squad(const char* desired_name):squad_name(desired_name){}
	bool update_players(const char* player_list) {
		//todo read json and update list
	}
};


}
#endif