// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_CharacterLaunched
// Size: 0xc8
class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator
{
	bool bSteerInSameDirectionAsLaunchVelocity; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	struct FName CharacterLaunchedExecutionStatusKeyName; // 0x8c (0x4)
	struct FName SteerDirectionKeyName; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FVector LastLaunchVelocity; // 0x98 (0x18)
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0xb0 (0x8)
	unsigned char padding_b8[0x10]; // 0xb8 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotEvaluator_CharacterLaunched.OnZiplineStateChanged (Underlying native function: OnZiplineStateChanged 0x614fc90)
	void OnZiplineStateChanged(bool& bIsZiplining, class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Private)
};

