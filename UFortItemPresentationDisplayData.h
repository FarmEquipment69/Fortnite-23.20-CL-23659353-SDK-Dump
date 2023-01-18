// Class /Script/FortniteUI.FortItemPresentationDisplayData
// Size: 0x2f0
class UFortItemPresentationDisplayData : public UDataAsset
{
	struct TMap<struct FString, struct FText> HeaderOverrideStrings; // 0x30 (0x50)
	struct TMap<struct FString, struct FText> BodyOverrideStrings; // 0x80 (0x50)
	struct TMap<struct FString, struct FText> ViolatorOverrideStrings; // 0xd0 (0x50)
	struct TMap<struct FString, struct FText> SubheaderOverrideStrings; // 0x120 (0x50)
	struct TWeakObjectPtr<class UObject> BattlePassUnownedIcon; // 0x170 (0x28)
	struct TWeakObjectPtr<class UObject> BattlePassOwnedIcon; // 0x198 (0x28)
	struct FText DefaultBackgroundMessageText; // 0x1c0 (0x18)
	struct TMap<struct FGameplayTag, struct FItemPresentationRestrictionData> TagRestrictionData; // 0x1d8 (0x50)
	struct TMap<struct FString, enum EItemContextAction> ItemTemplateIdToContextActionMap; // 0x228 (0x50)
	struct TWeakObjectPtr<class UClass> ItemPresentationScreenClass; // 0x278 (0x28)
	struct TWeakObjectPtr<class UClass> GiftReceivedPromptClass; // 0x2a0 (0x28)
	struct TWeakObjectPtr<class UClass> ItemNotificationPromptClass; // 0x2c8 (0x28)
};

