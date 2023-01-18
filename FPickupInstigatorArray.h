// ScriptStruct /Script/FortniteGame.PickupInstigatorArray
// Size: 0x128
struct FPickupInstigatorArray : FFastArraySerializer
{
	struct TArray<struct FPickupInstigator> Items; // 0x108 (0x10)
	int NextTrackedIndex; // 0x118 (0x4)
	unsigned char padding_11c[0xc]; // 0x11c (0xc)
};

