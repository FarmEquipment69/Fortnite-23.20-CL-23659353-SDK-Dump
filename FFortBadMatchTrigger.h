// ScriptStruct /Script/FortniteGame.FortBadMatchTrigger
// Size: 0x28
struct FFortBadMatchTrigger
{
	struct FName Key; // 0x0 (0x4)
	enum EFortBadMatchTriggerOperation Operation; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	double Value; // 0x8 (0x8)
	struct TArray<struct FName> Playlists; // 0x10 (0x10)
	enum EFortBadMatchTriggerType Type; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

