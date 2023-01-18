// Class /Script/FortniteGame.FortControllerEffect_SpawnActor
// Size: 0xd0
class UFortControllerEffect_SpawnActor : public UFortControllerEffect
{
	bool bUseWeightedActorList; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UClass* ActorClass; // 0x30 (0x8)
	struct FFortWeightedActorTypeList WeightedActorClassList; // 0x38 (0x50)
	float SpawnDelay; // 0x88 (0x4)
	bool bSpawnRelativeToServiceProvider; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct FVector LocalSpaceSpawnOffset; // 0x90 (0x18)
	bool bLocalSpaceOffsetIgnorePitchAndRoll; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct FRotator AdditionalRelativeRotationOffset; // 0xb0 (0x18)
	class UFortTransformGenerator* TransformGenerator; // 0xc8 (0x8)
};

