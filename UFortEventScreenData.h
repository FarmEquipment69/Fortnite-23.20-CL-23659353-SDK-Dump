// Class /Script/EventScreenBase.FortEventScreenData
// Size: 0x500
class UFortEventScreenData : public UDataAsset
{
	struct FString EventCMSId; // 0x30 (0x10)
	struct FString AccountResourceName; // 0x40 (0x10)
	struct FString LevelOfferId; // 0x50 (0x10)
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> QuestBundle; // 0x60 (0x28)
	struct TWeakObjectPtr<class UFortItemDefinition> SpecialRewardItem; // 0x88 (0x28)
	struct FGameplayTag QuestCategoryTag; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TArray<class UClass*> RichTextDecorators; // 0xb8 (0x10)
	class UMaterialInterface* ProgressBarMaterial; // 0xc8 (0x8)
	struct FSlateBrush CurrencyBrush; // 0xd0 (0xc0)
	struct FSlateBrush CompletionBannerBrush; // 0x190 (0xc0)
	struct FSlateBrush GlowForeground; // 0x250 (0xc0)
	struct FSlateBrush GlowBackground; // 0x310 (0xc0)
	struct FLinearColor EventBackgroundColor1; // 0x3d0 (0x10)
	struct FLinearColor EventBackgroundColor2; // 0x3e0 (0x10)
	struct FLinearColor RewardBackgroundColor1; // 0x3f0 (0x10)
	struct FLinearColor RewardBackgroundColor2; // 0x400 (0x10)
	struct FLinearColor RewardBackgroundColor3; // 0x410 (0x10)
	struct FLinearColor AccentColor; // 0x420 (0x10)
	struct FText TimeRemainingFormat; // 0x430 (0x18)
	class USoundBase* DefaultHoveredSound; // 0x448 (0x8)
	class USoundBase* DefaultPressedSound; // 0x450 (0x8)
	class USoundBase* BuyPressedSound; // 0x458 (0x8)
	class USoundBase* BuyHoldStartedSound; // 0x460 (0x8)
	class USoundBase* BuyHoldCompletedSound; // 0x468 (0x8)
	class USoundBase* BuyHoldAbortedSound; // 0x470 (0x8)
	class USoundBase* BackPressedSound; // 0x478 (0x8)
	class USoundBase* AddPressedSound; // 0x480 (0x8)
	class USoundBase* SubtractPressedSound; // 0x488 (0x8)
	class USoundBase* ProgressStartedSound; // 0x490 (0x8)
	class USoundBase* ProgressEndedSound; // 0x498 (0x8)
	class USoundBase* ProgressInterruptedSound; // 0x4a0 (0x8)
	float RewardPreviewZoomLevel; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	struct TWeakObjectPtr<class UClass> MoreInfoModalClass; // 0x4b0 (0x28)
	struct TWeakObjectPtr<class UClass> PurchaseModalClass; // 0x4d8 (0x28)
};

