// ScriptStruct /Script/FortniteGame.SphericalDriveContact
// Size: 0x58
struct FSphericalDriveContact
{
	struct FVector Location; // 0x0 (0x18)
	struct FVector Normal; // 0x18 (0x18)
	struct FVector Impulse; // 0x30 (0x18)
	float Traction; // 0x48 (0x4)
	struct TWeakObjectPtr<class UPrimitiveComponent> Component; // 0x4c (0x8)
	bool bIsBouncy; // 0x54 (0x1)
	unsigned char padding_55[0x3]; // 0x55 (0x3)
};

