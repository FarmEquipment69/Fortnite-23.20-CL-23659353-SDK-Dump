// Class /Script/FortniteUI.AthenaSquadPedestalGroup
// Size: 0x2b8
class AAthenaSquadPedestalGroup : public AActor
{
	enum ESubGame UsedSubgame; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	int MonitoredSquadIdx; // 0x28c (0x4)
	struct TArray<class AFortTeamMemberPedestal*> MemberPedestals; // 0x290 (0x10)
	class USceneComponent* PedestalChildrenRoot; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x10]; // 0x2a8 (0x10)
};

