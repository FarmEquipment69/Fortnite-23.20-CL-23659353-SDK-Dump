// Class /Script/FortniteGame.CustomCharacterAccessoryData
// Size: 0x100
class UCustomCharacterAccessoryData : public UCustomCharacterPartData
{
	struct FName AttachSocketName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FVector AttachOffset; // 0x30 (0x18)
	class UCustomAccessoryAttachmentData* AttachmentOverrideData; // 0x48 (0x8)
	bool bUseClothCollisionFromOtherParts; // 0x50 (0x1)
	bool bCollideWithOtherPartsCloth; // 0x51 (0x1)
	unsigned char unreflected_52[0x6]; // 0x52 (0x6) 
	struct TWeakObjectPtr<class UClass> AnimClass; // 0x58 (0x28)
	struct TWeakObjectPtr<class UClass> FrontEndAnimClass; // 0x80 (0x28)
	struct TWeakObjectPtr<class UClass> MannequinAnimClass; // 0xa8 (0x28)
	struct TWeakObjectPtr<class UCustomAccessoryColorSwatch> AccessoryColors; // 0xd0 (0x28)
	unsigned char padding_f8[0x8]; // 0xf8 (0x8)
};

