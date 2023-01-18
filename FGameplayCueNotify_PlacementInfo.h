// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
// Size: 0x40
struct FGameplayCueNotify_PlacementInfo
{
	struct FName SocketName; // 0x0 (0x4)
	enum EGameplayCueNotify_AttachPolicy AttachPolicy; // 0x4 (0x1)
	enum EAttachmentRule AttachmentRule; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	unsigned char bOverrideRotation; // 0x8 (0x1)
	unsigned char bOverrideScale; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FRotator RotationOverride; // 0x10 (0x18)
	struct FVector ScaleOverride; // 0x28 (0x18)
};

