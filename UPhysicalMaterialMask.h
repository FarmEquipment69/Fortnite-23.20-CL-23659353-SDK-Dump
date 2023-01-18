// Class /Script/Engine.PhysicalMaterialMask
// Size: 0x38
class UPhysicalMaterialMask : public UObject
{
	int UVChannelIndex; // 0x28 (0x4)
	struct TEnumAsByte<TextureAddress> AddressX; // 0x2c (0x1)
	struct TEnumAsByte<TextureAddress> AddressY; // 0x2d (0x1)
	unsigned char padding_2e[0xa]; // 0x2e (0xa)
};

