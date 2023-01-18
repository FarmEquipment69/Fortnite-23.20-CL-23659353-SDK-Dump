// ScriptStruct /Script/EpicGamesEngine.VerseAxisMapping
// Size: 0x38
struct FVerseAxisMapping : FFastArraySerializerItem
{
	struct FName AxisName; // 0xc (0x4)
	float Scale; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString UIText; // 0x18 (0x10)
	struct TArray<struct FKey> Keys; // 0x28 (0x10)
};

