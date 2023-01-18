// ScriptStruct /Script/FortniteGame.CreativeItemTemplate
// Size: 0xe0
struct FCreativeItemTemplate : FFastArraySerializerItem
{
	int TrackedIndex; // 0xc (0x4)
	struct FCreativeItemTemplateData TemplateData; // 0x10 (0xa0)
	class UFortCreativeItemTemplate* TemplateObj; // 0xb0 (0x8)
	uint32_t PrevOptionDataHash; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FItemVariantHandle PrevVariantHandle; // 0xc0 (0x18)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

