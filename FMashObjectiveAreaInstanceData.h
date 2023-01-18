// ScriptStruct /Script/FortniteGame.MashObjectiveAreaInstanceData
// Size: 0x50
struct FMashObjectiveAreaInstanceData
{
	struct FVector Location; // 0x0 (0x18)
	struct FRotator Rotation; // 0x18 (0x18)
	class AActor* AreaActor; // 0x30 (0x8)
	struct FName SpecialActorID; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FMashScoreMultiplierInstanceData> ScoreMultipliers; // 0x40 (0x10)
};

