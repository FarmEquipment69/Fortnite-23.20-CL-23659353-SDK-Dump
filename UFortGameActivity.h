// Class /Script/FortniteGame.FortGameActivity
// Size: 0x268
class UFortGameActivity : public UObject
{
	struct FOnlineLinkId LinkId; // 0x28 (0x18)
	struct FString SupportCode; // 0x40 (0x10)
	enum EFortGameActivityType Type; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct FString Title; // 0x58 (0x10)
	struct FString Creator; // 0x68 (0x10)
	struct FString CreatorAccountId; // 0x78 (0x10)
	struct FString Tagline; // 0x88 (0x10)
	struct FString Introduction; // 0x98 (0x10)
	struct TArray<struct FString> DescriptionTags; // 0xa8 (0x10)
	struct FString StoreOfferId; // 0xb8 (0x10)
	struct FString OwnershipToken; // 0xc8 (0x10)
	int MatchmakingMaximumNumberOfPlayers; // 0xd8 (0x4)
	int MatchmakingPlayersPerTeam; // 0xdc (0x4)
	enum EMMSRulePreset MatchmakingMMSType; // 0xe0 (0x1)
	enum EMMSPrivacy MatchmakingMMSPrivacy; // 0xe1 (0x1)
	unsigned char unreflected_e2[0x6]; // 0xe2 (0x6) 
	struct FDateTime* SortDate; // 0xe8 (0x8)
	struct FDateTime* LastVisited; // 0xf0 (0x8)
	struct FString OverridePlaylistName; // 0xf8 (0x10)
	struct FString VideoUID; // 0x108 (0x10)
	bool bGrantsXp; // 0x118 (0x1)
	unsigned char unreflected_119[0x7]; // 0x119 (0x7) 
	struct TArray<struct FString> ContentWarningStrings; // 0x120 (0x10)
	bool bIsActive; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct FString EventId; // 0x138 (0x10)
	struct FString DisplayDataId; // 0x148 (0x10)
	struct FOnlineLinkId ParentSetLinkId; // 0x158 (0x18)
	struct TArray<struct FOnlineLinkId> ChildSetLinkIds; // 0x170 (0x10)
	struct TArray<class UFortGameActivity*> ChildActivitySet; // 0x180 (0x10)
	struct FString DefaultSelectedChildMnemonic; // 0x190 (0x10)
	struct TMap<struct FName, struct FName> UIFeatureTagProperties; // 0x1a0 (0x50)
	struct FName ReferenceSurfaceName; // 0x1f0 (0x4)
	struct FName ReferencePanelName; // 0x1f4 (0x4)
	struct FString ReferenceLinkCode; // 0x1f8 (0x10)
	enum EFortDiscoveryOptionsOverride DiscoveryOptionsOverrideType; // 0x208 (0x1)
	unsigned char unreflected_209[0x7]; // 0x209 (0x7) 
	struct TArray<enum EFortDiscoveryDisabledFeatures> DiscoveryDisabledFeaturesType; // 0x210 (0x10)
	struct TArray<struct FString> PreviewPaths; // 0x220 (0x10)
	unsigned char padding_230[0x38]; // 0x230 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortGameActivity.GetPreviewPath (Underlying native function: GetPreviewPath 0x88c147c)
	struct FString GetPreviewPath(enum ECreativeLinkPreviewSize& PreviewSize); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameActivity.GetIsFavorite (Underlying native function: GetIsFavorite 0x88c144c)
	bool GetIsFavorite(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameActivity.GetActivityDescriptionTags (Underlying native function: GetActivityDescriptionTags 0x88c12ec)
	struct TArray<struct FCreativeIslandDescriptionTag> GetActivityDescriptionTags(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

