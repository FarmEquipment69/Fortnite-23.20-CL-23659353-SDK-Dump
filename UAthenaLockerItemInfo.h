// Class /Script/FortniteUI.AthenaLockerItemInfo
// Size: 0x2b0
class UAthenaLockerItemInfo : public UCommonUserWidget
{
	class UCommonTextBlock* TextItemType; // 0x290 (0x8)
	class UCommonTextBlock* TextItemRarity; // 0x298 (0x8)
	class UCommonTextBlock* TextItemName; // 0x2a0 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLockerItemInfo.OnUpdateAccessRestrictionWarning (Has no native function)
	void OnUpdateAccessRestrictionWarning(bool& bShouldShow, struct FText& WarningText, enum EAthenaLockerInfoRestrictionWarning& WarningType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLockerItemInfo.OnNoItemSet (Has no native function)
	void OnNoItemSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLockerItemInfo.OnItemDefinitionSet (Has no native function)
	void OnItemDefinitionSet(class UFortItemDefinition*& ItemDefinition); // (Event | Protected | BlueprintEvent)
};

