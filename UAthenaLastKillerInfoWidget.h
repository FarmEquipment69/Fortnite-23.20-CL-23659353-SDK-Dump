// Class /Script/FortniteUI.AthenaLastKillerInfoWidget
// Size: 0x4e8
class UAthenaLastKillerInfoWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xd8]; // 0x3a8 (0xd8) 
	struct FMulticastInlineDelegate ShouldShowDeathReport; // 0x480 (0x10)
	float TimeToWait; // 0x490 (0x4)
	unsigned char padding_494[0x54]; // 0x494 (0x54)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLastKillerInfoWidget.SetNumOfKillerKills (Has no native function)
	void SetNumOfKillerKills(int& NumOfKillers); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLastKillerInfoWidget.SetKillerWeaponIconAndName (Has no native function)
	void SetKillerWeaponIconAndName(class UTexture2D*& IconTexture, class UFortWeaponItemDefinition*& ItemDef); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLastKillerInfoWidget.SetKillerName (Has no native function)
	void SetKillerName(struct FString& PlayerName, struct FString& PlayerId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLastKillerInfoWidget.SetKillerHealthAndShield (Has no native function)
	void SetKillerHealthAndShield(float& HealthPercent, float& ShieldPercent, float& OvershieldPercent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLastKillerInfoWidget.BP_HandleExtensionWidgetCreated (Has no native function)
	void BPHandleExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)
};

