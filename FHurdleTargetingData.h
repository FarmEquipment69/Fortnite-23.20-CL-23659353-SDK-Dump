// ScriptStruct /Script/VaultingCodeRuntime.HurdleTargetingData
// Size: 0x130
struct FHurdleTargetingData
{
	enum EHurdleType Type; // 0x0 (0x1)
	enum EFortSynchedActionEndMovementMode EndMovementMode; // 0x1 (0x1)
	unsigned char bValid; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FVector FacingCornerLocation; // 0x8 (0x18)
	struct FVector FacingCornerNormal; // 0x20 (0x18)
	struct FVector BackCornerLocation; // 0x38 (0x18)
	struct FVector FinalLandingPosition; // 0x50 (0x18)
	class AActor* SourceActor; // 0x68 (0x8)
	struct FVector SourceLocation; // 0x70 (0x18)
	struct FVector SourceAim; // 0x88 (0x18)
	struct FVector WallLocation; // 0xa0 (0x18)
	struct FVector WallNormal; // 0xb8 (0x18)
	struct FVector TargetLocation; // 0xd0 (0x18)
	struct FVector TargetNormal; // 0xe8 (0x18)
	struct TWeakObjectPtr<class AActor> TargetActor; // 0x100 (0x8)
	struct TWeakObjectPtr<class UActorComponent> TargetActorComponent; // 0x108 (0x8)
	struct FVector TargetActorComponentLocation; // 0x110 (0x18)
	struct FName TargetActorBoneName; // 0x128 (0x4)
	unsigned char padding_12c[0x4]; // 0x12c (0x4)
};

