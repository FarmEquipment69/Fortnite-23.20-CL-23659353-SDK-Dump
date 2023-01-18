// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Loot
// Size: 0x3f0
class UFortAthenaAIBotEvaluator_Loot : public UFortAthenaAIBotEvaluator_Movement
{
	class UAthenaAIServiceLoot* CachedAIServiceLoot; // 0x230 (0x8)
	class UFortAthenaAIBotLootingDigestedSkillSet* LootingSkillSet; // 0x238 (0x8)
	unsigned char unreflected_240[0x10]; // 0x240 (0x10) 
	struct FName LootDestinationKeyName; // 0x250 (0x4)
	struct FName LootObjectKeyName; // 0x254 (0x4)
	struct FName LootTypeKeyName; // 0x258 (0x4)
	struct FName POINavigationExecutionStatusKeyName; // 0x25c (0x4)
	unsigned char unreflected_260[0x8]; // 0x260 (0x8) 
	enum EExecutionStatus POINavigationExecutionStatus; // 0x268 (0x1)
	unsigned char unreflected_269[0x177]; // 0x269 (0x177) 
	uint32_t CurrentLootOctreeElementId; // 0x3e0 (0x4)
	unsigned char unreflected_3e4[0x4]; // 0x3e4 (0x4) 
	class AFortTeamInfoAthena* CachedTeamInfo; // 0x3e8 (0x8)
};

