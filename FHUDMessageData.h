// ScriptStruct /Script/FortniteGame.HUDMessageData
// Size: 0x70
struct FHUDMessageData : FAthenaGameMessageData
{
	enum EHUDMessagePlacement Placement; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	class APlayerState* PlayerState; // 0x58 (0x8)
	int MessageTargets; // 0x60 (0x4)
	enum ETextTransformPolicy TextTransformPolicy; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	int DisableChannel; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

