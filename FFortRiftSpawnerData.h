// ScriptStruct /Script/FortniteGame.FortRiftSpawnerData
// Size: 0x118
struct FFortRiftSpawnerData
{
	class ABuildingRift* Rift; // 0x0 (0x8)
	class UFortAIEncounterInfo* Encounter; // 0x8 (0x8)
	class UFortAIEncounterSequence* EncounterSequence; // 0x10 (0x8)
	struct TArray<class AFortPlayerPawn*> PlayersInRange; // 0x18 (0x10)
	float TriggerDamagePercentage; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class AController* KillingInstigator; // 0x30 (0x8)
	class AActor* KillingDamageCauser; // 0x38 (0x8)
	struct FTimerHandle* DeactivationTimerHandle; // 0x40 (0x8)
	struct FTimerHandle* BurstFallbackTimerHandle; // 0x48 (0x8)
	struct FFortEncounterSettings OverrideSettings; // 0x50 (0xc0)
	bool bUseOverrideSettings; // 0x110 (0x1)
	unsigned char padding_111[0x7]; // 0x111 (0x7)
};

