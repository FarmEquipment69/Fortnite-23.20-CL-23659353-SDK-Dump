// ScriptStruct /Script/FortniteGame.StenciledActorInfoEntry
// Size: 0xb0
struct FStenciledActorInfoEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AActor* Actor; // 0x10 (0x8)
	class AFortPlayerStateAthena* MarkedBy; // 0x18 (0x8)
	float StartTime; // 0x20 (0x4)
	float EndTime; // 0x24 (0x4)
	struct FStenciledActorData Data; // 0x28 (0x80)
	bool bReplaceExistingWhenAdded; // 0xa8 (0x1)
	bool bRefreshExistingWhenAdded; // 0xa9 (0x1)
	unsigned char padding_aa[0x6]; // 0xaa (0x6)
};

