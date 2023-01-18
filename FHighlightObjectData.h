// ScriptStruct /Script/FortniteGame.HighlightObjectData
// Size: 0x70
struct FHighlightObjectData
{
	struct FGameplayTagContainer HighlightTags; // 0x0 (0x20)
	struct FName FriendlyStencilName; // 0x20 (0x4)
	struct FName EnemyStencilName; // 0x24 (0x4)
	unsigned char FriendlyStencilIndex; // 0x28 (0x1)
	unsigned char EnemyStencilIndex; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	class UParticleSystem* Effect; // 0x30 (0x8)
	float OverlapRadius; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> ObjectTypes; // 0x40 (0x10)
	class UClass* ActorClassFilter; // 0x50 (0x8)
	struct TArray<class AActor*> PreviouslyOverlappingActors; // 0x58 (0x10)
	bool bIgnoreDistanceCheck; // 0x68 (0x1)
	bool bOnlyHighlightOwningActor; // 0x69 (0x1)
	unsigned char padding_6a[0x6]; // 0x6a (0x6)
};

