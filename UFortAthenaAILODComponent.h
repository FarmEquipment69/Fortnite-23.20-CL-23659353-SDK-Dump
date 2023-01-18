// Class /Script/FortniteAI.FortAthenaAILODComponent
// Size: 0xe8
class UFortAthenaAILODComponent : public UActorComponent
{
	enum EFortAILODLevel CurrentFortAILODLevel; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x2]; // 0xa1 (0x2) 
	unsigned char bCouldBeVisibleToPlayers; // 0xa3 (0x1)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class AFortPawn* CachedFortPawn; // 0xa8 (0x8)
	class UFortAthenaAILODSettingsContainer* AILODSettingsContainer; // 0xb0 (0x8)
	unsigned char padding_b8[0x30]; // 0xb8 (0x30)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAILODComponent.OnRep_CurrentFortAILODLevel (Underlying native function: OnRep_CurrentFortAILODLevel 0x263b6ac)
	void OnRepCurrentFortAILODLevel(); // (Final | Native | Private)
};

