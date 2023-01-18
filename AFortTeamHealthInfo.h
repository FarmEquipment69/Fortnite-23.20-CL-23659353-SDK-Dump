// Class /Script/FortniteGame.FortTeamHealthInfo
// Size: 0x430
class AFortTeamHealthInfo : public AInfo
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UFortPlayerHealthInfoComponent* OwnerHealthComponent; // 0x298 (0x8)
	class AFortTeamInfo* FortTeamInfo; // 0x2a0 (0x8)
	struct FPrivateTeamDataArray RepData; // 0x2a8 (0x180)
	unsigned char TeamNum; // 0x428 (0x1)
	unsigned char padding_429[0x7]; // 0x429 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortTeamHealthInfo.OnRep_RepDataReplicated (Underlying native function: OnRep_RepDataReplicated 0x8ddedb0)
	void OnRepRepDataReplicated(); // (Final | Native | Private)
};

