// ScriptStruct /Script/FortniteGame.BarrierFlagDisplayData
// Size: 0x350
struct FBarrierFlagDisplayData
{
	class UStaticMesh* HeadMesh; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush MiniMapEnabledBrush; // 0x10 (0xc0)
	struct FSlateBrush MiniMapDisabledBrush; // 0xd0 (0xc0)
	struct FSlateBrush CompassEnabledBrush; // 0x190 (0xc0)
	struct FSlateBrush CompassDisabledBrush; // 0x250 (0xc0)
	struct FVector2D MapSize; // 0x310 (0x10)
	struct FVector2D CompassSize; // 0x320 (0x10)
	struct FVector MeshScale; // 0x330 (0x18)
	unsigned char padding_348[0x8]; // 0x348 (0x8)
};

