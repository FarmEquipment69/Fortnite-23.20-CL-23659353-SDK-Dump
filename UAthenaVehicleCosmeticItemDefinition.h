// Class /Script/FortniteGame.AthenaVehicleCosmeticItemDefinition
// Size: 0x850
class UAthenaVehicleCosmeticItemDefinition : public UAthenaCosmeticItemDefinition
{
	enum EFortVehicleDecoType DecoType; // 0x7b0 (0x1)
	unsigned char unreflected_7b1[0xf]; // 0x7b1 (0xf) 
	struct FTransform DecoSocketTransform; // 0x7c0 (0x60)
	struct TWeakObjectPtr<class UStaticMesh> TestDecoMesh; // 0x820 (0x28)
	struct FName DecoSocketName; // 0x848 (0x4)
	unsigned char padding_84c[0x4]; // 0x84c (0x4)
};

