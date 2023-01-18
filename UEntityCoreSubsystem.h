// Class /Script/EntityCore.EntityCoreSubsystem
// Size: 0x1a0
class UEntityCoreSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct TMap<uint32_t, struct FEntityComponentContainer> ComponentMap; // 0x40 (0x50)
	unsigned char unreflected_90[0x58]; // 0x90 (0x58) 
	struct TArray<class UEntityComponent*> ComponentArray; // 0xe8 (0x10)
	struct TMap<uint32_t, class UEntity*> Entities; // 0xf8 (0x50)
	unsigned char padding_148[0x58]; // 0x148 (0x58)
};

