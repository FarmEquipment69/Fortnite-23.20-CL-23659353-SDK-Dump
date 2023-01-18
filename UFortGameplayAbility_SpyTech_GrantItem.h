// Class /Script/FortniteGame.FortGameplayAbility_SpyTech_GrantItem
// Size: 0xc10
class UFortGameplayAbility_SpyTech_GrantItem : public UFortGameplayAbility_SpyTech
{
	struct FPrimaryAssetId* ItemToGrantAssetID; // 0xb20 (0x8)
	struct FScalableFloat NumberOfItemToGrant; // 0xb28 (0x28)
	bool bSkipUpgradeCheck; // 0xb50 (0x1)
	bool bRechargeStackOnGrant; // 0xb51 (0x1)
	unsigned char unreflected_b52[0x6]; // 0xb52 (0x6) 
	class AFortPlayerControllerAthena* FortPlayerController; // 0xb58 (0x8)
	class AFortPlayerPawnAthena* FortPlayerPawn; // 0xb60 (0x8)
	struct TArray<struct FSpyTechUpgradeData> UpgradeData; // 0xb68 (0x10)
	struct FSpyTechLevelUpgradeData LevelUpgradeData; // 0xb78 (0x70)
	struct FString TextItemSource; // 0xbe8 (0x10)
	unsigned char padding_bf8[0x18]; // 0xbf8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_SpyTech_GrantItem.UpgradeTagApplied (Underlying native function: UpgradeTagApplied 0x81247c8)
	void UpgradeTagApplied(struct FGameplayTag& InTag, int& NewCount); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayAbility_SpyTech_GrantItem.LevelUpgradeTagApplied (Underlying native function: LevelUpgradeTagApplied 0x8123268)
	void LevelUpgradeTagApplied(struct FGameplayTag& InTag, int& NewCount); // (Final | Native | Protected)
};

