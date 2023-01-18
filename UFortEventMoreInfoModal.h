// Class /Script/EventScreenBase.FortEventMoreInfoModal
// Size: 0x3c0
class UFortEventMoreInfoModal : public UCommonActivatableWidget
{
	class UCommonButtonBase* ButtonBack; // 0x3a8 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x3b0 (0x8)
	unsigned char padding_3b8[0x8]; // 0x3b8 (0x8)

	/* Functions */

	// Function /Script/EventScreenBase.FortEventMoreInfoModal.SetModalText (Has no native function)
	void SetModalText(struct FText& Header, struct FText& SubHeader, struct FText& Body, struct FText& Legal); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnModalBackout (Has no native function)
	void OnModalBackout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet (Has no native function)
	void OnEventScreenDataSet(class UFortEventScreenData*& InEventScreenData); // (Event | Protected | BlueprintEvent)

	// Function /Script/EventScreenBase.FortEventMoreInfoModal.GetEventScreenData (Underlying native function: GetEventScreenData 0x7433e2c)
	class UFortEventScreenData* GetEventScreenData(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EventScreenBase.FortEventMoreInfoModal.ExitModal (Underlying native function: ExitModal 0x1d01d9c)
	void ExitModal(); // (Native | Protected | BlueprintCallable)
};

