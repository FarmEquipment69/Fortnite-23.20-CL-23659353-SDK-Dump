// Class /Script/CommonUILegacy.CommonInputReflectorLegacy
// Size: 0x2c0
class UCommonInputReflectorLegacy : public UCommonUserWidget
{
	class UClass* ButtonType; // 0x290 (0x8)
	struct TArray<class UCommonButtonLegacy*> ActiveButtons; // 0x298 (0x10)
	struct TArray<class UCommonButtonLegacy*> InactiveButtons; // 0x2a8 (0x10)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded (Has no native function)
	void OnButtonAdded(class UCommonButtonLegacy*& AddedButton, struct FCommonInputActionHandlerData& Data); // (Event | Public | HasOutParms | BlueprintEvent)
};

