// ScriptStruct /Script/EpicCMSUIFramework.TileDefinition
// Size: 0x88
struct FTileDefinition
{
	struct FString TypeString; // 0x0 (0x10)
	struct FString Title; // 0x10 (0x10)
	struct FString Subtitle; // 0x20 (0x10)
	struct FString Eyebrow; // 0x30 (0x10)
	struct FString Link; // 0x40 (0x10)
	struct FString GroupId; // 0x50 (0x10)
	struct FDateTime* Countdown; // 0x60 (0x8)
	enum EDateType CountdownType; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FString MediaUrl; // 0x70 (0x10)
	bool IsVisible; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

