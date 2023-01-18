// Class /Script/FortniteGame.CustomColorSwatch
// Size: 0x38
class UCustomColorSwatch : public UPrimaryDataAsset
{
	struct TEnumAsByte<EFortCustomGender> GenderPermitted; // 0x30 (0x1)
	struct TEnumAsByte<EColorSwatchType> ColorSwatchType; // 0x31 (0x1)
	unsigned char padding_32[0x6]; // 0x32 (0x6)
};

