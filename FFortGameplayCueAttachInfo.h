// ScriptStruct /Script/FortniteGame.FortGameplayCueAttachInfo
// Size: 0x58
struct FFortGameplayCueAttachInfo
{
	struct FName SocketName; // 0x0 (0x4)
	enum EFortGameplayCueAttachType AttachType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	unsigned char bAttachToWeapon; // 0x8 (0x1)
	unsigned char bAttachToHitResult; // 0x8 (0x1)
	unsigned char bUseUnsmoothedNetworkPosition; // 0x8 (0x1)
	unsigned char bIgnoreLocation; // 0x8 (0x1)
	unsigned char bIgnoreScale; // 0x8 (0x1)
	unsigned char bIgnoreRotation; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FVector OverrideLocation; // 0x10 (0x18)
	struct FVector OverrideScale; // 0x28 (0x18)
	struct FRotator OverrideRotation; // 0x40 (0x18)
};

