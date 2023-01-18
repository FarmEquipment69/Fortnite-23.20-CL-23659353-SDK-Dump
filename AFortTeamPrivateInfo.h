// Class /Script/FortniteGame.FortTeamPrivateInfo
// Size: 0x560
class AFortTeamPrivateInfo : public AInfo
{
	class AFortTeamInfo* TeamInfo; // 0x288 (0x8)
	struct FPrivateTeamDataArray RepData; // 0x290 (0x180)
	struct FLatentRepTeamDataArray LatentTeamRepData; // 0x410 (0x120)
	uint16_t AverageDamageDealt; // 0x530 (0x2)
	unsigned char padding_532[0x2e]; // 0x532 (0x2e)

	/* Functions */

	// Function /Script/FortniteGame.FortTeamPrivateInfo.OnRep_RepData (Underlying native function: OnRep_RepData 0x23eff98)
	void OnRepRepData(); // (Native | Protected)
};

