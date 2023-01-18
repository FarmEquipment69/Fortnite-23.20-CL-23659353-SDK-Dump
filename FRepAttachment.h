// ScriptStruct /Script/Engine.RepAttachment
// Size: 0x60
struct FRepAttachment
{
	class AActor* AttachParent; // 0x0 (0x8)
	struct FVector_NetQuantize100 LocationOffset; // 0x8 (0x18)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x20 (0x18)
	struct FRotator RotationOffset; // 0x38 (0x18)
	struct FName AttachSocket; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	class USceneComponent* AttachComponent; // 0x58 (0x8)
};

