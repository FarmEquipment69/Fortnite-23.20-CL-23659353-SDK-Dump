// ScriptStruct /Script/FortniteGame.BuildingSMActorClassData
// Size: 0xc0
struct FBuildingSMActorClassData : FBuildingActorClassData
{
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FTierMeshSets> AlternateMeshes; // 0x8 (0x10)
	struct FVector2D RandomScaleRange; // 0x18 (0x10)
	struct FName DestructionLootTierGroup; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TWeakObjectPtr<class UCurveLinearColor> WindSpeedCurveSoftPtr; // 0x30 (0x28)
	struct TWeakObjectPtr<class UCurveLinearColor> WindPannerSpeedCurveSoftPtr; // 0x58 (0x28)
	struct TWeakObjectPtr<class USoundBase> WindAudioSoftPtr; // 0x80 (0x28)
	float ShieldBuffMaterialParamValue1; // 0xa8 (0x4)
	float ShieldBuffMaterialParamValue2; // 0xac (0x4)
	float AnimatingDistanceFieldSelfShadowBias; // 0xb0 (0x4)
	float AnimatingSubObjects; // 0xb4 (0x4)
	float PlayerGridSnapSize; // 0xb8 (0x4)
	unsigned char NumFrameSubObjects; // 0xbc (0x1)
	unsigned char bForceReplicateSubObjects; // 0xbd (0x1)
	unsigned char bNoPhysicsCollision; // 0xbd (0x1)
	unsigned char bNoCameraCollision; // 0xbd (0x1)
	unsigned char bNoPawnCollision; // 0xbd (0x1)
	unsigned char bNoAIPawnCollision; // 0xbd (0x1)
	unsigned char bBlocksCeilingPlacement; // 0xbd (0x1)
	unsigned char bBlocksAttachmentPlacement; // 0xbd (0x1)
	unsigned char bUsePhysicalSurfaceForFootstep; // 0xbd (0x1)
	unsigned char bRandomYawOnPlacement; // 0xbe (0x1)
	unsigned char bRandomScaleOnPlacement; // 0xbe (0x1)
	unsigned char bClearMIDWhenReturningToUndamagedState; // 0xbe (0x1)
	unsigned char padding_bf[0x1]; // 0xbf (0x1)
};

