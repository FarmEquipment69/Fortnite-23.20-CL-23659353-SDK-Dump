// ScriptStruct /Script/FortniteGame.PlayerDefinedStatFilterEntry
// Size: 0xe0
struct FPlayerDefinedStatFilterEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FStatEventFilter StatEventFilter; // 0x10 (0x90)
	struct FText StatName; // 0xa0 (0x18)
	struct TWeakObjectPtr<class UTexture2D> StatIcon; // 0xb8 (0x28)
};

