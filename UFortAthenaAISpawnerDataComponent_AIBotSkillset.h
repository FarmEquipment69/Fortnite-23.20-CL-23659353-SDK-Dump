// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
// Size: 0xf8
class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase
{
	class UClass* AimingSkillSet; // 0x30 (0x8)
	class UClass* AttackingSkillSet; // 0x38 (0x8)
	class UClass* BuildingSkillSet; // 0x40 (0x8)
	class UClass* DBNOSkillSet; // 0x48 (0x8)
	class UClass* EmoteSkillSet; // 0x50 (0x8)
	class UClass* EvasiveManeuversSkillSet; // 0x58 (0x8)
	class UClass* HarvestSkillSet; // 0x60 (0x8)
	class UClass* HealingSkillSet; // 0x68 (0x8)
	class UClass* InventorySkillSet; // 0x70 (0x8)
	class UClass* LootingSkillSet; // 0x78 (0x8)
	class UClass* MovementSkillSet; // 0x80 (0x8)
	class UClass* PerceptionSkillSet; // 0x88 (0x8)
	class UClass* PlayStyleSkillSet; // 0x90 (0x8)
	class UClass* PropagateAwarenessSkillSet; // 0x98 (0x8)
	class UClass* RangeAttackSkillSet; // 0xa0 (0x8)
	class UClass* ReviveSkillSet; // 0xa8 (0x8)
	class UClass* UnstuckSkillSet; // 0xb0 (0x8)
	class UClass* VehicleSkillSet; // 0xb8 (0x8)
	unsigned char bUseMatchMMRToOverrideSkillLevel; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	struct TWeakObjectPtr<class UDataTable> OverrideSkillLevelMMRTable; // 0xc8 (0x28)
	float Skill; // 0xf0 (0x4)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset.SetSkill (Underlying native function: SetSkill 0xa3ada10)
	void SetSkill(float& InSKill); // (Final | Native | Public | BlueprintCallable)
};

