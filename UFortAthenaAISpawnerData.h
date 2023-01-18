// Class /Script/FortniteAI.FortAthenaAISpawnerData
// Size: 0x110
class UFortAthenaAISpawnerData : public UFortAthenaSpawnerDataBase
{
	struct TArray<class UFortAthenaAISpawnerDataComponent*> ClassComponentList; // 0x48 (0x10)
	class UClass* InventoryComponent; // 0x58 (0x8)
	class UClass* SpawnParamsComponent; // 0x60 (0x8)
	class UClass* BehaviorComponent; // 0x68 (0x8)
	class UClass* AffiliationComponent; // 0x70 (0x8)
	class UClass* LODComponent; // 0x78 (0x8)
	class UClass* DebugComponent; // 0x80 (0x8)
	class UClass* AnalyticComponent; // 0x88 (0x8)
	class UClass* GameplayComponent; // 0x90 (0x8)
	class UClass* ConversationComponent; // 0x98 (0x8)
	class UClass* VoiceComponent; // 0xa0 (0x8)
	class UClass* CosmeticComponent; // 0xa8 (0x8)
	class UClass* ChanceEncounterComponent; // 0xb0 (0x8)
	class UClass* OptimizationComponent; // 0xb8 (0x8)
	class UClass* GameplayAbilityComponent; // 0xc0 (0x8)
	class UClass* PerceptionComponent; // 0xc8 (0x8)
	class UClass* SmartObjectComponent; // 0xd0 (0x8)
	class UClass* GroupComponent; // 0xd8 (0x8)
	class UClass* ScriptComponent; // 0xe0 (0x8)
	struct FScalableFloat SpawnIntervalOverride; // 0xe8 (0x28)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetVoiceComponent (Underlying native function: GetVoiceComponent 0xa3acb30)
	class UFortAthenaAISpawnerDataComponent_VoiceBase* GetVoiceComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetSpawnParamsComponent (Underlying native function: GetSpawnParamsComponent 0xa3ac8d8)
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetSpawnParamsComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetSmartObjectComponent (Underlying native function: GetSmartObjectComponent 0xa3ac89c)
	class UFortAthenaAISpawnerDataComponent_SmartObjectBase* GetSmartObjectComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetScriptComponent (Underlying native function: GetScriptComponent 0xa3ac7ac)
	class UFortAthenaAISpawnerDataComponent_ScriptBase* GetScriptComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetPerceptionComponent (Underlying native function: GetPerceptionComponent 0xa3ac734)
	class UFortAthenaAISpawnerDataComponent_PerceptionBase* GetPerceptionComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetOptimizationComponent (Underlying native function: GetOptimizationComponent 0xa3ac5d0)
	class UFortAthenaAISpawnerDataComponent_OptimBase* GetOptimizationComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetInventoryComponent (Underlying native function: GetInventoryComponent 0xa3ac404)
	class UFortAthenaAISpawnerDataComponent_InventoryBase* GetInventoryComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetGroupComponent (Underlying native function: GetGroupComponent 0xa3ac230)
	class UFortAthenaAISpawnerDataComponent_GroupBase* GetGroupComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetGameplayComponent (Underlying native function: GetGameplayComponent 0xa3ac1c8)
	class UFortAthenaAISpawnerDataComponent_GameplayBase* GetGameplayComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetGameplayAbilityComponent (Underlying native function: GetGameplayAbilityComponent 0xa3ac18c)
	class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetGameplayAbilityComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetDebugComponent (Underlying native function: GetDebugComponent 0xa3ac07c)
	class UFortAthenaAISpawnerDataComponent_DebugBase* GetDebugComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetCosmeticComponent (Underlying native function: GetCosmeticComponent 0xa3abdb4)
	class UFortAthenaAISpawnerDataComponent_CosmeticBase* GetCosmeticComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetConversationComponent (Underlying native function: GetConversationComponent 0xa3abd78)
	class UFortAthenaAISpawnerDataComponent_ConversationBase* GetConversationComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetChanceEncounterComponent (Underlying native function: GetChanceEncounterComponent 0xa3abbb4)
	class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetChanceEncounterComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetBehaviorComponent (Underlying native function: GetBehaviorComponent 0xa3abb2c)
	class UFortAthenaAISpawnerDataComponent_BehaviorBase* GetBehaviorComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetAnalyticComponent (Underlying native function: GetAnalyticComponent 0x780270c)
	class UFortAthenaAISpawnerDataComponent_AnalyticBase* GetAnalyticComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetAILODComponent (Underlying native function: GetAILODComponent 0xa3ab924)
	class UFortAthenaAISpawnerDataComponent_LODBase* GetAILODComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.GetAffiliationComponent (Underlying native function: GetAffiliationComponent 0xa3ab95c)
	class UFortAthenaAISpawnerDataComponent_AffiliationBase* GetAffiliationComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.CreateComponentListFromClass (Underlying native function: CreateComponentListFromClass 0xa3ab5d8)
	static class UFortAthenaAISpawnerDataComponentList* CreateComponentListFromClass(class UClass*& AISpawnerDataClass, class UObject*& OuterObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerData.CreateComponentList (Underlying native function: CreateComponentList 0xa3ab548)
	class UFortAthenaAISpawnerDataComponentList* CreateComponentList(class UObject*& OuterObject); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

