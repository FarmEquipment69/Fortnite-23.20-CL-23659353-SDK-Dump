// Class /Script/FortniteGame.FortDayPhaseChangeParams
// Size: 0x38
class UFortDayPhaseChangeParams : public UFortMissionEventParams
{
	class AFortTimeOfDayManager* LightingAndFogManager; // 0x28 (0x8)
	enum EFortDayPhase NewDayPhase; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortDayPhaseChangeParams.SetParams (Underlying native function: SetParams 0x8b2ece0)
	void SetParams(class AFortTimeOfDayManager*& LightingAndFogManager, enum EFortDayPhase& NewDayPhase, class UFortDayPhaseChangeParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDayPhaseChangeParams.BreakParams (Underlying native function: BreakParams 0x8b29190)
	void BreakParams(class AFortTimeOfDayManager*& LightingAndFogManager, enum EFortDayPhase& NewDayPhase); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

