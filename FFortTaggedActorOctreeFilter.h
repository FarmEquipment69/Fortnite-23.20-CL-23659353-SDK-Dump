// ScriptStruct /Script/FortniteGame.FortTaggedActorOctreeFilter
// Size: 0xa8
struct FFortTaggedActorOctreeFilter
{
	struct FBoxSphereBounds Bounds; // 0x0 (0x38)
	float MinDistanceFromBoundsCenter; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<class UClass*> OptionalSubclasses; // 0x40 (0x10)
	struct TArray<struct FFortFinderProperty> RequiredProperties; // 0x50 (0x10)
	struct FGameplayTagQuery TagQuery; // 0x60 (0x48)
};

