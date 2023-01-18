// ScriptStruct /Script/PlayspaceSystem.PlayspaceUser
// Size: 0x58
struct FPlayspaceUser : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FUniqueNetIdRepl UserId; // 0x10 (0x30)
	class APlayspace* LeafPlayspace; // 0x40 (0x8)
	class APlayerState* PlayerStateCached; // 0x48 (0x8)
	class AController* ControllerCached; // 0x50 (0x8)
};

