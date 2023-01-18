// Class /Script/FortniteUI.AthenaMapStormInfo
// Size: 0x418
class UAthenaMapStormInfo : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0xd8]; // 0x2d0 (0xd8) 
	struct FScalableFloat SafeZoneDamageAttribute; // 0x3a8 (0x28)
	struct FText SafeZonePhaseFormatText; // 0x3d0 (0x18)
	struct FText StormDamageFormatText; // 0x3e8 (0x18)
	class UCommonTextBlock* TextSafeZonePhase; // 0x400 (0x8)
	class UCommonRichTextBlock* RichTextStormDamage; // 0x408 (0x8)
	unsigned char padding_410[0x8]; // 0x410 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapStormInfo.OnSafeZonePhaseChanged (Has no native function)
	void OnSafeZonePhaseChanged(int& SafeZonePhase); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapStormInfo.OnSafeZoneCountChanged (Has no native function)
	void OnSafeZoneCountChanged(int& SafeZoneCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapStormInfo.HandleSafeZoneIndicatorChanged (Underlying native function: HandleSafeZoneIndicatorChanged 0xa5a33c0)
	void HandleSafeZoneIndicatorChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaMapStormInfo.BP_HandleExtensionWidgetCreated (Has no native function)
	void BPHandleExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)
};

