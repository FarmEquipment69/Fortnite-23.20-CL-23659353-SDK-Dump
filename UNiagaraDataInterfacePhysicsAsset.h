// Class /Script/Niagara.NiagaraDataInterfacePhysicsAsset
// Size: 0xa0
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
	class UPhysicsAsset* DefaultSource; // 0x38 (0x8)
	struct TWeakObjectPtr<class AActor> SoftSourceActor; // 0x40 (0x28)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x68 (0x18)
	unsigned char padding_80[0x20]; // 0x80 (0x20)
};

