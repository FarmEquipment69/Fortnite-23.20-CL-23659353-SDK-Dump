// Class /Script/FortniteGame.FortToggledOptionsMenuParams
// Size: 0x38
class UFortToggledOptionsMenuParams : public UFortMissionEventParams
{
	class AFortPlayerController* PlayerThatToggledOptionsMenu; // 0x28 (0x8)
	bool bInOptionsMenu; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortToggledOptionsMenuParams.SetParams (Underlying native function: SetParams 0x8b2f5c4)
	void SetParams(class AFortPlayerController*& PlayerThatToggledOptionsMenu, bool& Opened, class UFortToggledOptionsMenuParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortToggledOptionsMenuParams.BreakParams (Underlying native function: BreakParams 0x8b29190)
	void BreakParams(class AFortPlayerController*& PlayerThatToggledOptionsMenu, bool& Opened); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

