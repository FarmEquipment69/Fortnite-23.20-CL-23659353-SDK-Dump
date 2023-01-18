// Class /Script/FortniteAI.FortQueryGenerator_Enemies
// Size: 0xd0
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator
{
	bool bPerceivedEnemiesOnly; // 0x50 (0x1)
	bool bSleepCapableAIUsePerceivedEnemiesOnly; // 0x51 (0x1)
	bool bIgnoreDBNOPawns; // 0x52 (0x1)
	bool bIgnoreSleepingAIs; // 0x53 (0x1)
	bool bAddEnemiesFromAbilityRange; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct FGameplayTagContainer AbilityTags; // 0x58 (0x20)
	struct FGameplayTagContainer DistanceTags; // 0x78 (0x20)
	struct FAIDataProviderFloatValue MaxTimeSincePerceived; // 0x98 (0x38)
};

