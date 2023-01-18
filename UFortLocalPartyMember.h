// Class /Script/FortniteGame.FortLocalPartyMember
// Size: 0xe40
class UFortLocalPartyMember : public UFortPartyMember
{
	unsigned char NumAthenaPlayersLeftDeltaThreshold; // 0xdf8 (0x1)
	unsigned char unreflected_df9[0x3]; // 0xdf9 (0x3) 
	float AthenaPlayersLeftUpdateDelay; // 0xdfc (0x4)
	unsigned char padding_e00[0x40]; // 0xe00 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortLocalPartyMember.HandlePlayerControllerSet (Underlying native function: HandlePlayerControllerSet 0x8be51fc)
	void HandlePlayerControllerSet(); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortLocalPartyMember.HandleNumAthenaPlayersLeftChanged (Underlying native function: HandleNumAthenaPlayersLeftChanged 0x1be5798)
	void HandleNumAthenaPlayersLeftChanged(int& NumPlayersLeft); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLocalPartyMember.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x2da9fac)
	void HandleMcpProfilesInitialized(); // (Final | 0x00000002 | Native | Private)
};

