// Class /Script/FortniteGame.FortResourceItemDefinition
// Size: 0x920
class UFortResourceItemDefinition : public UFortWorldItemDefinition
{
	unsigned char unreflected_8f0[0x8]; // 0x8f0 (0x8) 
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x8f8 (0x1)
	struct TEnumAsByte<EFortReplicatedStat> AccumulatingStatType; // 0x8f9 (0x1)
	unsigned char unreflected_8fa[0x6]; // 0x8fa (0x6) 
	struct FFortCreativeTagsHelper CreativeTagsHelper; // 0x900 (0x10)
	class UFortPersistentResourceItemDefinition* PersistentResourceDef; // 0x910 (0x8)
	unsigned char padding_918[0x8]; // 0x918 (0x8)
};

