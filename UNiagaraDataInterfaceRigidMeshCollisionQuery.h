// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// Size: 0x70
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
	struct TArray<struct FName> ActorTags; // 0x38 (0x10)
	struct TArray<struct FName> ComponentTags; // 0x48 (0x10)
	struct TArray<struct TWeakObjectPtr<class AActor>> SourceActors; // 0x58 (0x10)
	bool OnlyUseMoveable; // 0x68 (0x1)
	bool GlobalSearchAllowed; // 0x69 (0x1)
	bool GlobalSearchForced; // 0x6a (0x1)
	bool GlobalSearchFallbackUnscripted; // 0x6b (0x1)
	int MaxNumPrimitives; // 0x6c (0x4)
};

