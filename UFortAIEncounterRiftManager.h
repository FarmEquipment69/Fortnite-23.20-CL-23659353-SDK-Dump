// Class /Script/FortniteAI.FortAIEncounterRiftManager
// Size: 0x2b0
class UFortAIEncounterRiftManager : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class UFortAIEncounterInfo* MyEncounter; // 0x38 (0x8)
	class AFortAIDirector* AIDirector; // 0x40 (0x8)
	struct FFortAIEncounterSpawnArea CurrentSpawnArea; // 0x48 (0x58)
	struct FFortAIEncounterSpawnArea FutureSpawnArea; // 0xa0 (0x58)
	float UpdateIntervalTimeSeconds; // 0xf8 (0x4)
	int NumRiftsToUse; // 0xfc (0x4)
	int MinRiftsToUse; // 0x100 (0x4)
	unsigned char unreflected_104[0x4]; // 0x104 (0x4) 
	struct FFortEncounterSettings EncounterSettings; // 0x108 (0xc0)
	float ExtraSpawnLocationPercentage; // 0x1c8 (0x4)
	unsigned char unreflected_1cc[0x4]; // 0x1cc (0x4) 
	struct FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x1d0 (0x28)
	struct FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x1f8 (0x28)
	struct FFortAIEncounterQueryDirectionTracker EncounterQueryDirectionTracker; // 0x220 (0x48)
	class UClass* RiftClassTemplate; // 0x268 (0x8)
	float LastObjectiveBatchPathCostUpdateTime; // 0x270 (0x4)
	float LastPlayerBatchPathCostUpdateTime; // 0x274 (0x4)
	unsigned char padding_278[0x38]; // 0x278 (0x38)

	/* Functions */

	// Function /Script/FortniteAI.FortAIEncounterRiftManager.OnRiftDestroyed (Underlying native function: OnRiftDestroyed 0xa2a0d20)
	void OnRiftDestroyed(class AActor*& Rift); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAIEncounterRiftManager.GetAssociatedMission (Underlying native function: GetAssociatedMission 0xa29e5ac)
	class AFortMission* GetAssociatedMission(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

