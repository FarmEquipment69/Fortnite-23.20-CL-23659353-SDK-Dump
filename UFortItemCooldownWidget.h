// Class /Script/FortniteUI.FortItemCooldownWidget
// Size: 0x360
class UFortItemCooldownWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnCooldownStartedEvent; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnCooldownStoppedEvent; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnCooldownUpdatedEvent; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnAmmoRegenerationUpdatedDelegate; // 0x2c0 (0x10)
	class UCommonTextBlock* CooldownText; // 0x2d0 (0x8)
	class UImage* CooldownImage; // 0x2d8 (0x8)
	class UImage* CooldownChargingImage; // 0x2e0 (0x8)
	struct FName CooldownMaterialParameterName; // 0x2e8 (0x4)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	struct TArray<enum EFortItemCooldownType> CooldownTypesSupported; // 0x2f0 (0x10)
	class UMaterialInstanceDynamic* CooldownPercentageMID; // 0x300 (0x8)
	bool bAmmoRegenAvailableState; // 0x308 (0x1)
	unsigned char padding_309[0x57]; // 0x309 (0x57)

	/* Functions */

	// Function /Script/FortniteUI.FortItemCooldownWidget.TryStartUpdateCooldown_BP (Underlying native function: TryStartUpdateCooldown_BP 0xa702800)
	void TryStartUpdateCooldownBP(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCooldownWidget.SetItem (Underlying native function: SetItem 0xa701be0)
	void SetItem(class UFortWorldItem*& InWorldItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCooldownWidget.OnWorldItemDestroyed (Underlying native function: OnWorldItemDestroyed 0xa700c2c)
	void OnWorldItemDestroyed(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemCooldownWidget.OnCooldownUpdated (Has no native function)
	void OnCooldownUpdated(enum EFortItemCooldownType& CooldownType, float& CooldownDuration, float& CooldownRemaining, float& CooldownPercentage); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemCooldownWidget.OnCooldownStopped (Has no native function)
	void OnCooldownStopped(enum EFortItemCooldownType& CooldownType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemCooldownWidget.OnCooldownStarted (Has no native function)
	void OnCooldownStarted(enum EFortItemCooldownType& CooldownType, float& CooldownDuration); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemCooldownWidget.OnAmmoRegenerationUpdated (Has no native function)
	void OnAmmoRegenerationUpdated(bool& bOutAmmoRegenAvailableState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemCooldownWidget.HandleLocalPlayerRevived (Underlying native function: HandleLocalPlayerRevived 0xa6fede0)
	void HandleLocalPlayerRevived(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemCooldownWidget.HandleLocalPlayerDied (Underlying native function: HandleLocalPlayerDied 0xa6fed30)
	void HandleLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Private | HasOutParms)
};

