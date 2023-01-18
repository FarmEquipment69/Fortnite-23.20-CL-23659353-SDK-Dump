// ScriptStruct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
// Size: 0x78
struct FReplicatedClamberingTargetingData
{
	enum EClamberingType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector_NetQuantize10 SourceLocation; // 0x8 (0x18)
	struct FVector_NetQuantize100 WallLocation; // 0x20 (0x18)
	uint16_t WallNormalYawQuantized; // 0x38 (0x2)
	uint16_t WallNormalPitchQuantized; // 0x3a (0x2)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector_NetQuantize100 TargetLocation; // 0x40 (0x18)
	uint16_t TargetNormalYawQuantized; // 0x58 (0x2)
	uint16_t TargetNormalPitchQuantized; // 0x5a (0x2)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class AActor* TargetActor; // 0x60 (0x8)
	class UActorComponent* TargetActorComponent; // 0x68 (0x8)
	struct FName TargetActorBoneName; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

