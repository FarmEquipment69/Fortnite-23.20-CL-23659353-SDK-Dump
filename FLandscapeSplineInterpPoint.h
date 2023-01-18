// ScriptStruct /Script/Landscape.LandscapeSplineInterpPoint
// Size: 0xe0
struct FLandscapeSplineInterpPoint
{
	struct FVector Center; // 0x0 (0x18)
	struct FVector Left; // 0x18 (0x18)
	struct FVector Right; // 0x30 (0x18)
	struct FVector FalloffLeft; // 0x48 (0x18)
	struct FVector FalloffRight; // 0x60 (0x18)
	struct FVector LayerLeft; // 0x78 (0x18)
	struct FVector LayerRight; // 0x90 (0x18)
	struct FVector LayerFalloffLeft; // 0xa8 (0x18)
	struct FVector LayerFalloffRight; // 0xc0 (0x18)
	float StartEndFalloff; // 0xd8 (0x4)
	unsigned char padding_dc[0x4]; // 0xdc (0x4)
};

