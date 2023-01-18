// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Storm
// Size: 0x270
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName StormDestinationName; // 0x230 (0x4)
	unsigned char unreflected_234[0xc]; // 0x234 (0xc) 
	class AFortGameModeAthena* CacheAthenaGameMode; // 0x240 (0x8)
	class UBehaviorTreeComponent* CachedBTComp; // 0x248 (0x8)
	unsigned char padding_250[0x20]; // 0x250 (0x20)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Storm.OnSafezoneStateChanged (Underlying native function: OnSafezoneStateChanged 0xa38cdf0)
	void OnSafezoneStateChanged(enum EFortSafeZoneState& NewState); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_Storm.OnSafeZonePhaseChanged (Underlying native function: OnSafeZonePhaseChanged 0xa38cddc)
	void OnSafeZonePhaseChanged(); // (Final | Native | Public)
};

