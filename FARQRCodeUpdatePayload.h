// ScriptStruct /Script/AugmentedReality.ARQRCodeUpdatePayload
// Size: 0xb0
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform WorldTransform; // 0x20 (0x60)
	struct FVector Extents; // 0x80 (0x18)
	struct FString QRCode; // 0x98 (0x10)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)
};

