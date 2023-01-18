// ScriptStruct /Script/Niagara.NiagaraCollisionEventPayload
// Size: 0x50
struct FNiagaraCollisionEventPayload
{
	struct FVector CollisionPos; // 0x0 (0x18)
	struct FVector CollisionNormal; // 0x18 (0x18)
	struct FVector CollisionVelocity; // 0x30 (0x18)
	int ParticleIndex; // 0x48 (0x4)
	int PhysicalMaterialIndex; // 0x4c (0x4)
};

