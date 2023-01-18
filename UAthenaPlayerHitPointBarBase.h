// Class /Script/FortniteUI.AthenaPlayerHitPointBarBase
// Size: 0x378
class UAthenaPlayerHitPointBarBase : public UUserWidget
{
	unsigned char unreflected_268[0xe8]; // 0x268 (0xe8) 
	class UAthenaPlayerViewModel* PlayerVM; // 0x350 (0x8)
	enum EHealthBarType BarType; // 0x358 (0x1)
	unsigned char unreflected_359[0x3]; // 0x359 (0x3) 
	float ValueCurrent; // 0x35c (0x4)
	float BeginDeltaInterpDelayMin; // 0x360 (0x4)
	float BeginDeltaInterpDelayMax; // 0x364 (0x4)
	float ValueLast; // 0x368 (0x4)
	float ValueMax; // 0x36c (0x4)
	float LastToCurrentUpdateRate; // 0x370 (0x4)
	bool bShouldDisplayShieldBar; // 0x374 (0x1)
	bool bCanAddExtensionWidgets; // 0x375 (0x1)
	enum EUIExtensionSlot ExtensionSlotToUse; // 0x376 (0x1)
	unsigned char padding_377[0x1]; // 0x377 (0x1)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.SetProgressBarFillColors (Has no native function)
	void SetProgressBarFillColors(struct FLinearColor& ColorA, struct FLinearColor& ColorB); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.OnValueChangedWithReason (Has no native function)
	void OnValueChangedWithReason(float& Value, enum EFortHitPointModificationReason& Reason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.OnMaxValueChanged (Has no native function)
	void OnMaxValueChanged(float& Value); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.OnExtensionWidgetAdded (Has no native function)
	void OnExtensionWidgetAdded(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& ExtensionWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.OnDeltaChanged (Has no native function)
	void OnDeltaChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.OnDBNOStateChanged (Has no native function)
	void OnDBNOStateChanged(bool& IsDBNO); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.GetLastValuePercentage (Underlying native function: GetLastValuePercentage 0xa4af5a4)
	float GetLastValuePercentage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaPlayerHitPointBarBase.GetCurrentValuePercentage (Underlying native function: GetCurrentValuePercentage 0xa4af548)
	float GetCurrentValuePercentage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

