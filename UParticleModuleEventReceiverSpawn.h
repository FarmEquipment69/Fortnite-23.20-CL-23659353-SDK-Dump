// Class /Script/Engine.ParticleModuleEventReceiverSpawn
// Size: 0xe8
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
	struct FRawDistributionFloat SpawnCount; // 0x38 (0x30)
	unsigned char bUseParticleTime; // 0x68 (0x1)
	unsigned char bUsePSysLocation; // 0x68 (0x1)
	unsigned char bInheritVelocity; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FRawDistributionVector InheritVelocityScale; // 0x70 (0x60)
	struct TArray<class UPhysicalMaterial*> PhysicalMaterials; // 0xd0 (0x10)
	unsigned char bBanPhysicalMaterials; // 0xe0 (0x1)
	unsigned char padding_e1[0x7]; // 0xe1 (0x7)
};

