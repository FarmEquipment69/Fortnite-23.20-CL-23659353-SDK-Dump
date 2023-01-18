// Class /Script/FortniteGame.FortAthenaMutator_SkyCap
// Size: 0x3a8
class AFortAthenaMutator_SkyCap : public AFortAthenaMutator
{
	class UClass* SkyCapClass; // 0x330 (0x8)
	class AAthenaSkyCap* SkyCap; // 0x338 (0x8)
	struct FScalableFloat SpawnHeight; // 0x340 (0x28)
	struct FScalableFloat InitialDelay; // 0x368 (0x28)
	struct TArray<struct FSkyCapPositionData> PositionData; // 0x390 (0x10)
	unsigned char padding_3a0[0x8]; // 0x3a0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_SkyCap.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x850536c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

