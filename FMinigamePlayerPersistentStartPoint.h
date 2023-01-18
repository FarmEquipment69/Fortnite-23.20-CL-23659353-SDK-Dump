// ScriptStruct /Script/FortniteGame.MinigamePlayerPersistentStartPoint
// Size: 0x80
struct FMinigamePlayerPersistentStartPoint
{
	struct FVector Location; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FQuat Rotation; // 0x20 (0x20)
	struct FUniqueNetIdRepl UniqueId; // 0x40 (0x30)
	bool bConsumed; // 0x70 (0x1)
	unsigned char padding_71[0xf]; // 0x71 (0xf)
};

