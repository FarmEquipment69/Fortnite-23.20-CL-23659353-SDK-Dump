// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_JumpOffBus
// Size: 0xd0
class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator
{
	struct FName JumpOffBusDestinationName; // 0x88 (0x4)
	struct FName JumpOffBusDestinationVolumeKeyName; // 0x8c (0x4)
	unsigned char unreflected_90[0x20]; // 0x90 (0x20) 
	class AFortPoiVolume* BusDroppingVolume; // 0xb0 (0x8)
	class AFortGameStateAthena* CachedAthenaGameState; // 0xb8 (0x8)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0xc0 (0x8)
	unsigned char padding_c8[0x8]; // 0xc8 (0x8)
};

