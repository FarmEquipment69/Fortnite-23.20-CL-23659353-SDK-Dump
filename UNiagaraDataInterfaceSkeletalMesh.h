// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xf0
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
	enum ENDISkeletalMesh_SourceMode SourceMode; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct TWeakObjectPtr<class AActor> SoftSourceActor; // 0x40 (0x28)
	struct TArray<struct FName> ComponentTags; // 0x68 (0x10)
	class USkeletalMeshComponent* SourceComponent; // 0x78 (0x8)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x80 (0x18)
	enum ENDISkeletalMesh_SkinningMode SkinningMode; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct TArray<struct FName> SamplingRegions; // 0xa0 (0x10)
	int WholeMeshLOD; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TArray<struct FName> FilteredBones; // 0xb8 (0x10)
	struct TArray<struct FName> FilteredSockets; // 0xc8 (0x10)
	struct FName ExcludeBoneName; // 0xd8 (0x4)
	unsigned char bExcludeBone; // 0xdc (0x1)
	unsigned char unreflected_dd[0x3]; // 0xdd (0x3) 
	int UvSetIndex; // 0xe0 (0x4)
	bool bRequireCurrentFrameData; // 0xe4 (0x1)
	unsigned char padding_e5[0xb]; // 0xe5 (0xb)

	/* Functions */

	// Function /Script/Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay (Underlying native function: OnSourceEndPlay 0x25bfd04)
	void OnSourceEndPlay(class AActor*& InSource, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Protected)
};

