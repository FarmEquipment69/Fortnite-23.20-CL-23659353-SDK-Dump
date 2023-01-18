// ScriptStruct /Script/FortniteGame.LimitedLifeDataEntry
// Size: 0x20
struct FLimitedLifeDataEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AActor* BackingActor; // 0x10 (0x8)
	unsigned char TeamId; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	int Lives; // 0x1c (0x4)
};

