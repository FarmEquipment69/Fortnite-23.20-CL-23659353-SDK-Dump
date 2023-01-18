// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_SelectNextPOI
// Size: 0x268
class UFortAthenaAIBotEvaluator_SelectNextPOI : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName NextPOIKeyName; // 0x230 (0x4)
	struct FName MarkerLocationKeyName; // 0x234 (0x4)
	unsigned char unreflected_238[0x8]; // 0x238 (0x8) 
	class AFortPoiVolume* StartingGroundPOI; // 0x240 (0x8)
	bool bCheckForStartingGroundPOI; // 0x248 (0x1)
	unsigned char unreflected_249[0x3]; // 0x249 (0x3) 
	float CurrentPOICompletionTime; // 0x24c (0x4)
	float DurationInsideCurrentPOI; // 0x250 (0x4)
	unsigned char unreflected_254[0x4]; // 0x254 (0x4) 
	class AFortTeamInfoAthena* CachedTeamInfo; // 0x258 (0x8)
	class UFortAthenaAIBotLootingDigestedSkillSet* CachedLootingSkillSet; // 0x260 (0x8)
};

