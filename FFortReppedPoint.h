// ScriptStruct /Script/FortniteGame.FortReppedPoint
// Size: 0x30
struct FFortReppedPoint : FFastArraySerializerItem
{
	int LastServerIndex; // 0xc (0x4)
	float BurnTime; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector_NetQuantize ReppedPoint; // 0x18 (0x18)
};

