// Class /Script/FortniteUI.AthenaSpatialCustomizationRoomData
// Size: 0x150
class UAthenaSpatialCustomizationRoomData : public UDataAsset
{
	class UAthenaCosmeticItemDefinition* CustomizationCosmetic; // 0x30 (0x8)
	class UAthenaRewardEventGraph* CustomizationRoomGraph; // 0x38 (0x8)
	class UFortChallengeBundleItemDefinition* CustomizationChallengeBundle; // 0x40 (0x8)
	class UClass* ConfirmationWindowClass; // 0x48 (0x8)
	struct TArray<struct FSpatialCustomizationCategoryStateData> CategoryStates; // 0x50 (0x10)
	struct FText FinalizeConfirmationTitle; // 0x60 (0x18)
	struct FText FinalizeConfirmationDescription; // 0x78 (0x18)
	struct FText UnlockAvailableText; // 0x90 (0x18)
	struct FText UnlockUsedText; // 0xa8 (0x18)
	struct FText LockedByBattlePassText; // 0xc0 (0x18)
	struct FText LockedByChallengeFormat; // 0xd8 (0x18)
	struct FText LockedByChallengeCompletionText; // 0xf0 (0x18)
	struct FText LockedByChallengeBundleCompletionFormat; // 0x108 (0x18)
	bool bUseNullColorOption; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	struct FLinearColor NullColor; // 0x124 (0x10)
	unsigned char unreflected_134[0x4]; // 0x134 (0x4) 
	struct TArray<struct FLinearColor> Swatches; // 0x138 (0x10)
	bool bShowSelectedChoiceName; // 0x148 (0x1)
	unsigned char padding_149[0x7]; // 0x149 (0x7)
};

