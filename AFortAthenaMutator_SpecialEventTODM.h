// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
// Size: 0x360
class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator
{
	struct TArray<struct FSpecialEventTODMPhaseData> PhaseDataArray; // 0x330 (0x10)
	class ASpecialEventScript* SpecialEventScript; // 0x340 (0x8)
	unsigned char unreflected_348[0x10]; // 0x348 (0x10) 
	class AFortTimeOfDayManager* SpawnedTODM; // 0x358 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated (Underlying native function: OnPhaseActivated 0x76c4f50)
	void OnPhaseActivated(class ASpecialEventScript*& InSpecialEventScript, class ASpecialEventPhase*& InSpecialEventPhase); // (Final | Native | Private)
};

