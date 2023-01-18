// ScriptStruct /Script/EpicGamesEngine.VerseInputBinding
// Size: 0x1c
struct FVerseInputBinding : FFastArraySerializerItem
{
	struct FName Name; // 0xc (0x4)
	struct TEnumAsByte<EInputEvent> InputEvent; // 0x10 (0x1)
	unsigned char padding_11[0xb]; // 0x11 (0xb)
};

