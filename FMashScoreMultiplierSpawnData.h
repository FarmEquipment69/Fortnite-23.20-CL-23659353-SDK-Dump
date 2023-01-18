// ScriptStruct /Script/FortniteGame.MashScoreMultiplierSpawnData
// Size: 0x300
struct FMashScoreMultiplierSpawnData : FFortPieSliceSpawnData
{
	struct FScalableFloat ScoreMultiplier; // 0xa0 (0x28)
	struct FScalableFloat SpawnCount; // 0xc8 (0x28)
	struct FScalableFloat MinSpawnTime; // 0xf0 (0x28)
	struct FScalableFloat MaxSpawnTime; // 0x118 (0x28)
	class UClass* ObjectClass; // 0x140 (0x8)
	struct FGameplayTag SpecialActorTag; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x150 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x210 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x220 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x2e0 (0x10)
	bool bShouldDrawCompassIcon; // 0x2f0 (0x1)
	unsigned char padding_2f1[0xf]; // 0x2f1 (0xf)
};

