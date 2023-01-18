// Class /Script/FortniteAI.FortAthenaAIBotCustomizationData
// Size: 0x190
class UFortAthenaAIBotCustomizationData : public UPrimaryDataAsset
{
	class UClass* PawnClass; // 0x30 (0x8)
	unsigned char bRequiresUniqueNetId; // 0x38 (0x1)
	unsigned char bHasCustomSquadId; // 0x38 (0x1)
	unsigned char CustomSquadId; // 0x39 (0x1)
	unsigned char bOverrideCanRespawnOnDeath; // 0x3a (0x1)
	unsigned char bCanRespawnOnDeath; // 0x3a (0x1)
	unsigned char bOverrideBehaviorTree; // 0x3a (0x1)
	unsigned char bOverrideCharacterCustomization; // 0x3a (0x1)
	unsigned char bOverrideDBNOPlayStyle; // 0x3a (0x1)
	unsigned char bOverrideSkillLevel; // 0x3a (0x1)
	unsigned char bUseMatchMMRToOverrideSkillLevel; // 0x3a (0x1)
	unsigned char bOverrideSkillSets; // 0x3a (0x1)
	unsigned char bOverrideStartupInventory; // 0x3b (0x1)
	unsigned char bOverrideBotNameSettings; // 0x3b (0x1)
	unsigned char bOverrideBotIDAnalyticsSuffix; // 0x3b (0x1)
	unsigned char bOverrideConstructionBuildingInfo; // 0x3b (0x1)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TWeakObjectPtr<class UDataTable> OverrideSkillLevelMMRTable; // 0x40 (0x28)
	class UBehaviorTree* BehaviorTree; // 0x68 (0x8)
	enum BotDataOverrideCosmeticMode OverrideCosmeticMode; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	class UFortAthenaAIBotCharacterCustomization* CharacterCustomization; // 0x78 (0x8)
	struct TWeakObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> CosmeticCustomizationLibrary; // 0x80 (0x28)
	enum EDBNOPlayStyle DBNOPlayStyle; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	float SkillLevel; // 0xac (0x4)
	unsigned char unreflected_b0[0x8]; // 0xb0 (0x8) 
	struct TArray<class UClass*> SkillSetOverrideClasses; // 0xb8 (0x10)
	class UFortAthenaAIBotInventoryItems* StartupInventory; // 0xc8 (0x8)
	class UFortBotNameSettings* BotNameSettings; // 0xd0 (0x8)
	struct FString BotAnalyticsSuffix; // 0xd8 (0x10)
	float SpawnTracePadding; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct FConstructionBuildingInfo OverrideConstructionBuildingInfo[0x6]; // 0xf0 (0x18) (ARRAY) 
	class UClass* AILODSettingsContainer; // 0x180 (0x8)
	class UFortAthenaAILODSettingsContainer* AILODSettingsContainerLoaded; // 0x188 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotCustomizationData.SetCharacterCustomizationFromPlayerPawn (Underlying native function: SetCharacterCustomizationFromPlayerPawn 0xa35c64c)
	void SetCharacterCustomizationFromPlayerPawn(class AFortPlayerPawn*& InFortPawn); // (Final | Native | Public | BlueprintCallable)
};

