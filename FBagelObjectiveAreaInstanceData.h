// ScriptStruct /Script/FortniteGame.BagelObjectiveAreaInstanceData
// Size: 0x38
struct FBagelObjectiveAreaInstanceData
{
	struct FVector Location; // 0x0 (0x18)
	class AActor* AreaActor; // 0x18 (0x8)
	struct FName SpecialActorID; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FBagelScoreMultiplierInstanceData> ScoreMultipliers; // 0x28 (0x10)
};

