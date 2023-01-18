// Class /Script/FortniteGame.AthenaHoldingArea
// Size: 0xb08
class AAthenaHoldingArea : public ABuildingGameplayActor
{
	class UStaticMeshComponent* MeshComp; // 0x9d8 (0x8)
	unsigned char bHoldingAreaActive; // 0x9e0 (0x1)
	unsigned char unreflected_9e1[0x7]; // 0x9e1 (0x7) 
	struct FIgnoredPlayerPawnArray IgnoredPlayerPawns; // 0x9e8 (0x120)

	/* Functions */

	// Function /Script/FortniteGame.AthenaHoldingArea.OnRep_IgnoredPlayerPawns (Underlying native function: OnRep_IgnoredPlayerPawns 0x828944c)
	void OnRepIgnoredPlayerPawns(); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaHoldingArea.OnRep_bHoldingAreaActive (Underlying native function: OnRep_bHoldingAreaActive 0x8289498)
	void OnRepbHoldingAreaActive(); // (Final | Native | Protected)
};

