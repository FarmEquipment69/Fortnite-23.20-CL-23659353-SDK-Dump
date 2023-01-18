// ScriptStruct /Script/FortniteGame.IndicatedActorInfoEntry
// Size: 0x100
struct FIndicatedActorInfoEntry : FFastArraySerializerItem
{
	struct TWeakObjectPtr<class AActor> Actor; // 0xc (0x8)
	float StartTime; // 0x14 (0x4)
	float EndTime; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FIndicatedActorData Data; // 0x20 (0xd8)
	bool bReplaceExistingWhenAdded; // 0xf8 (0x1)
	bool bRefreshExistingWhenAdded; // 0xf9 (0x1)
	unsigned char padding_fa[0x6]; // 0xfa (0x6)
};

