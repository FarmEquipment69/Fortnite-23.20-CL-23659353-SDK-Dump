// Class /Script/FortniteGame.FortToggledCursorModeParams
// Size: 0x38
class UFortToggledCursorModeParams : public UFortMissionEventParams
{
	class AFortPlayerController* PlayerThatToggledCursorMode; // 0x28 (0x8)
	bool bInCursorMode; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortToggledCursorModeParams.SetParams (Underlying native function: SetParams 0x8b2f5c4)
	void SetParams(class AFortPlayerController*& PlayerThatToggledCursorMode, bool& InCursorMode, class UFortToggledCursorModeParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortToggledCursorModeParams.BreakParams (Underlying native function: BreakParams 0x8b29190)
	void BreakParams(class AFortPlayerController*& PlayerThatToggledCursorMode, bool& InCursorMode); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

