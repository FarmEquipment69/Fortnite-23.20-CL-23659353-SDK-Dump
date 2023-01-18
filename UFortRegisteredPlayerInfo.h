// Class /Script/FortniteGame.FortRegisteredPlayerInfo
// Size: 0x370
class UFortRegisteredPlayerInfo : public UObject
{
	struct FMulticastInlineDelegate OnQuestManagerCreatedDelegate; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnAbilitySystemActorChangedChangedDelegate; // 0x38 (0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x48 (0x30)
	struct FString PlayerName; // 0x78 (0x10)
	struct FUniqueNetIdRepl PartyLeaderId; // 0x88 (0x30)
	struct FString Platform; // 0xb8 (0x10)
	unsigned char TeamAssignment; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	int PlayerIndex; // 0xcc (0x4)
	bool bIsInitialPlayer; // 0xd0 (0x1)
	bool bShouldLockProfile; // 0xd1 (0x1)
	bool bFailedToLockProfile; // 0xd2 (0x1)
	unsigned char unreflected_d3[0x1]; // 0xd3 (0x1) 
	struct FGuid UnregistrationSaveGUID; // 0xd4 (0x10)
	enum ERegisteredPlayerUnregistrationStatus UnregistrationStatus; // 0xe4 (0x1)
	unsigned char unreflected_e5[0x3]; // 0xe5 (0x3) 
	struct FTimerHandle* UnregisterFailsafeTimerHandle; // 0xe8 (0x8)
	struct FTimerHandle* PollForDedicatedServerReadyToShutdownTimerHandle; // 0xf0 (0x8)
	class UFortMcpProfileCommonPublic* CommonPublicProfile; // 0xf8 (0x8)
	class UFortMcpProfileCommonCore* CommonCoreProfile; // 0x100 (0x8)
	class UFortMcpProfileCampaign* AccountProfile; // 0x108 (0x8)
	class UFortMcpProfileWorld* WorldProfile; // 0x110 (0x8)
	class UFortMcpProfileWorld* OutpostProfile; // 0x118 (0x8)
	class UFortMcpProfileMetadata* MetadataProfile; // 0x120 (0x8)
	class UFortMcpProfileCreative* CreativeModeProfile; // 0x128 (0x8)
	class UFortMcpProfileCollections* CollectionsProfile; // 0x130 (0x8)
	class UFortMcpProfileAthena* AthenaProfile; // 0x138 (0x8)
	class UFortQuestManager* QuestManagers[0x2]; // 0x140 (0x8) (ARRAY) 
	struct TMap<enum ESubGame, class UFortMinigameManager*> MinigameManagers; // 0x150 (0x50)
	class UFortCollectionBookManager* CollectionBookManager; // 0x1a0 (0x8)
	class UFortExpeditionManager* ExpeditionManager; // 0x1a8 (0x8)
	class UFortLinkedAccountManager* LinkedAccountManager; // 0x1b0 (0x8)
	unsigned char unreflected_1b8[0x128]; // 0x1b8 (0x128) 
	class UFortHero* TempAthenaMenuHeroInstance; // 0x2e0 (0x8)
	bool bAthenaMenuHeroDirty; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x7]; // 0x2e9 (0x7) 
	class UFortCustomizationAssetLoader* CustomizationAssetLoader; // 0x2f0 (0x8)
	struct FEndZoneScoreAndAwards EndZoneScoreAndAwards; // 0x2f8 (0x70)
	unsigned char padding_368[0x8]; // 0x368 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortRegisteredPlayerInfo.HandleDifferentHeroLoadoutActivated (Underlying native function: HandleDifferentHeroLoadoutActivated 0x89b8ed8)
	void HandleDifferentHeroLoadoutActivated(class UFortMcpProfileCampaign*& Profile); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortRegisteredPlayerInfo.GetPlayerName (Underlying native function: GetPlayerName 0x89b8ad0)
	struct FString GetPlayerName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortRegisteredPlayerInfo.GetAbilitySystemComponent (Underlying native function: GetAbilitySystemComponent 0x89b87c8)
	class UAbilitySystemComponent* GetAbilitySystemComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

