// Class /Script/FortniteGame.FortToggledEditModeParams
// Size: 0x40
class UFortToggledEditModeParams : public UFortMissionEventParams
{
	class AFortPlayerController* PlayerThatToggledEditMode; // 0x28 (0x8)
	class ABuildingSMActor* EditableActor; // 0x30 (0x8)
	bool bInEditMode; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortToggledEditModeParams.SetParams (Underlying native function: SetParams 0x8b2f6cc)
	void SetParams(class AFortPlayerController*& PlayerThatToggledEditMode, class ABuildingSMActor*& InEditableActor, bool& InEditMode, class UFortToggledEditModeParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortToggledEditModeParams.BreakParams (Underlying native function: BreakParams 0x8b29968)
	void BreakParams(class AFortPlayerController*& PlayerThatToggledEditMode, class ABuildingSMActor*& EditableActor, bool& InEditMode); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

