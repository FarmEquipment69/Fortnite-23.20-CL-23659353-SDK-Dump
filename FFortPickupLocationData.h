// ScriptStruct /Script/FortniteGame.FortPickupLocationData
// Size: 0x98
struct FFortPickupLocationData
{
	struct TWeakObjectPtr<class AFortPawn> PickupTarget; // 0x0 (0x8)
	class AFortPickup* CombineTarget; // 0x8 (0x8)
	struct TWeakObjectPtr<class AFortPawn> ItemOwner; // 0x10 (0x8)
	struct FVector_NetQuantize10 LootInitialPosition; // 0x18 (0x18)
	struct FVector_NetQuantize10 LootFinalPosition; // 0x30 (0x18)
	float FlyTime; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FVector_NetQuantizeNormal StartDirection; // 0x50 (0x18)
	struct FVector_NetQuantize10 FinalTossRestLocation; // 0x68 (0x18)
	enum EFortPickupTossState TossState; // 0x80 (0x1)
	bool bPlayPickupSound; // 0x81 (0x1)
	unsigned char unreflected_82[0x2]; // 0x82 (0x2) 
	struct FGuid PickupGuid; // 0x84 (0x10)
	unsigned char padding_94[0x4]; // 0x94 (0x4)
};

