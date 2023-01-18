// ScriptStruct /Script/FortniteGame.PickupInstigator
// Size: 0x50
struct FPickupInstigator : FFastArraySerializerItem
{
	int TrackedIndex; // 0xc (0x4)
	struct FPickupInstigatorData InstigatorData; // 0x10 (0x18)
	unsigned char padding_28[0x28]; // 0x28 (0x28)
};

