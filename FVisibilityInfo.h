// ScriptStruct /Script/FortniteGame.VisibilityInfo
// Size: 0x28
struct FVisibilityInfo : FFastArraySerializerItem
{
	struct TWeakObjectPtr<class AActor> Actor; // 0xc (0x8)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class UFortVisibilityComponent* VisibilityComponent; // 0x18 (0x8)
	uint16_t TeamVisibilityFlag; // 0x20 (0x2)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

