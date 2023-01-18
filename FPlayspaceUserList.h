// ScriptStruct /Script/PlayspaceSystem.PlayspaceUserList
// Size: 0x178
struct FPlayspaceUserList : FFastArraySerializer
{
	struct TArray<struct FPlayspaceUser> PlayspaceUsers; // 0x108 (0x10)
	unsigned char unreflected_118[0x54]; // 0x118 (0x54) 
	bool bIsInitialized; // 0x16c (0x1)
	unsigned char unreflected_16d[0x3]; // 0x16d (0x3) 
	class APlayspace* Playspace; // 0x170 (0x8)
};

