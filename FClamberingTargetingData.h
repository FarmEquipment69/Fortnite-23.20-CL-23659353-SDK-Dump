// ScriptStruct /Script/ClamberingCodeRuntime.ClamberingTargetingData
// Size: 0xd0
struct FClamberingTargetingData
{
	enum EClamberingType Type; // 0x0 (0x1)
	unsigned char bValid; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class AActor* SourceActor; // 0x8 (0x8)
	struct FVector SourceLocation; // 0x10 (0x18)
	struct FVector SourceAim; // 0x28 (0x18)
	struct FVector WallLocation; // 0x40 (0x18)
	struct FVector WallNormal; // 0x58 (0x18)
	struct FVector TargetLocation; // 0x70 (0x18)
	struct FVector TargetNormal; // 0x88 (0x18)
	class AActor* TargetActor; // 0xa0 (0x8)
	class UActorComponent* TargetActorComponent; // 0xa8 (0x8)
	struct FVector TargetActorComponentLocation; // 0xb0 (0x18)
	struct FName TargetActorBoneName; // 0xc8 (0x4)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)
};

