// Class /Script/CampsiteRuntime.FortGameStateComponent_Campsite
// Size: 0x1b8
class UFortGameStateComponent_Campsite : public UFortGameStateComponent
{
	struct TSet<class UFortItemDefinition*> AllowedItemDefinitions; // 0xa0 (0x50)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> BlacklistedItemDefinitions; // 0xf0 (0x10)
	struct TArray<struct FString> BlacklistedItemPaths; // 0x100 (0x10)
	struct TArray<class AAbandonedCampsitePlacedSpawner*> PlacedCampsiteSpawnPoints; // 0x110 (0x10)
	unsigned char unreflected_120[0x18]; // 0x120 (0x18) 
	struct TWeakObjectPtr<class UFortAthenaAIBotNameDataAsset> BotNameDataAsset; // 0x138 (0x28)
	unsigned char unreflected_160[0x50]; // 0x160 (0x50) 
	class UDataTable* BotNameDataTable; // 0x1b0 (0x8)

	/* Functions */

	// Function /Script/CampsiteRuntime.FortGameStateComponent_Campsite.RegisterPreplacedCampsite (Underlying native function: RegisterPreplacedCampsite 0x72a3e28)
	void RegisterPreplacedCampsite(class AAbandonedCampsitePlacedSpawner*& PreplacedCampsiteSpawnPoint); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortGameStateComponent_Campsite.RegisterCampsiteLocation (Underlying native function: RegisterCampsiteLocation 0x72a3d58)
	void RegisterCampsiteLocation(struct FVector& NewCampsiteLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortGameStateComponent_Campsite.ClaimUnusedBotName (Underlying native function: ClaimUnusedBotName 0x723b5f8)
	void ClaimUnusedBotName(struct FString& OutBotName); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

