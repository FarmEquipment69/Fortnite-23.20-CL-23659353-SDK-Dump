// ScriptStruct /Script/Engine.CompositeSection
// Size: 0x50
struct FCompositeSection : FAnimLinkableElement
{
	struct FName SectionName; // 0x30 (0x4)
	float StartTime; // 0x34 (0x4)
	struct FName NextSectionName; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<class UAnimMetaData*> MetaData; // 0x40 (0x10)
};

