// Class /Script/FortniteAI.FortAISystem
// Size: 0x1e8
class UFortAISystem : public UAISystem
{
	struct TArray<class UFortQueryTwoPointSolver*> TwoPointSolvers; // 0x148 (0x10)
	class UFortInfluenceMap* InfluenceMap; // 0x158 (0x8)
	class UFortBotMissionManager* BotManager; // 0x160 (0x8)
	unsigned char unreflected_168[0x10]; // 0x168 (0x10) 
	struct TArray<class UFortRiftBlockerComponent*> ActiveRiftBlockers; // 0x178 (0x10)
	unsigned char unreflected_188[0x50]; // 0x188 (0x50) 
	class UAthenaAISpawner* AISpawner; // 0x1d8 (0x8)
	class UAthenaAIServiceManager* AIServiceManager; // 0x1e0 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAISystem.IsInCone2D (Underlying native function: IsInCone2D 0xa29e9f4)
	static bool IsInCone2D(struct FVector& ConeOrigin, struct FVector& ConeDirection, float& HalfAngle, struct FVector& LocationToCheck); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

