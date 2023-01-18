// ScriptStruct /Script/FortniteGame.FortBotTeleportInfo
// Size: 0x80
struct FFortBotTeleportInfo
{
	bool bTeleportSuccess; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector TeleportFrom; // 0x8 (0x18)
	struct FRotator RotationFrom; // 0x20 (0x18)
	struct FVector TeleportTo; // 0x38 (0x18)
	struct FRotator RotationTo; // 0x50 (0x18)
	enum ETeleportReason TeleportReason; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FString BTNodeNameCausingTeleportation; // 0x70 (0x10)
};

