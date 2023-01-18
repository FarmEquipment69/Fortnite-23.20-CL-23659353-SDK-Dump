// Class /Script/FortniteGame.FortPlayerInputSettings
// Size: 0xd8
class UFortPlayerInputSettings : public UObject
{
	struct FText FriendlyName; // 0x28 (0x18)
	struct FText Description; // 0x40 (0x18)
	struct FText SubDescription; // 0x58 (0x18)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x70 (0x10)
	struct TArray<struct FFortInputActionKeyAlias> ActionKeyAliases; // 0x80 (0x10)
	struct TArray<struct FFortInputActionThatShouldAlwaysBeBound> ActionsThatShouldAlwaysBeBound; // 0x90 (0x10)
	float HoldInputTime; // 0xa0 (0x4)
	float HoldCraftAmmoTime; // 0xa4 (0x4)
	float HoldHudChatTime; // 0xa8 (0x4)
	float HoldVoteDialogTime; // 0xac (0x4)
	bool bBuildingPickerOnlyChoosesCategories; // 0xb0 (0x1)
	bool bWeaponPickerShowOnlySlottedItems; // 0xb1 (0x1)
	bool bTrapPickerUsesRadial; // 0xb2 (0x1)
	bool bRadialClosesOnRelease; // 0xb3 (0x1)
	int NumActiveTrapSlots; // 0xb4 (0x4)
	bool bWeaponSlotsAreSharedWhenUsingGamepad; // 0xb8 (0x1)
	bool bEditModeUsableFromCombatMode; // 0xb9 (0x1)
	bool bOnlyShowNextPrevBuildingSlotKeybinds; // 0xba (0x1)
	bool bEnabledForCampaign; // 0xbb (0x1)
	bool bEnabledForAthena; // 0xbc (0x1)
	unsigned char padding_bd[0x1b]; // 0xbd (0x1b)
};

