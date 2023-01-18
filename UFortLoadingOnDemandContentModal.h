// Class /Script/FortniteUI.FortLoadingOnDemandContentModal
// Size: 0x3f0
class UFortLoadingOnDemandContentModal : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x40]; // 0x3a8 (0x40) 
	class UCommonButtonLegacy* ButtonCancel; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLoadingOnDemandContentModal.StartProgressUpdateTimer (Underlying native function: StartProgressUpdateTimer 0xa91b330)
	void StartProgressUpdateTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortLoadingOnDemandContentModal.SetCancelButtonText (Has no native function)
	void SetCancelButtonText(struct FText& InText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortLoadingOnDemandContentModal.OnUpdatedProgress (Has no native function)
	void OnUpdatedProgress(float& Percent); // (Event | Protected | BlueprintEvent)
};

