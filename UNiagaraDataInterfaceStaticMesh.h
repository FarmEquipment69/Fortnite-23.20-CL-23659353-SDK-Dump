// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0xc0
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
	enum ENDIStaticMesh_SourceMode SourceMode; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UStaticMesh* DefaultMesh; // 0x40 (0x8)
	struct TWeakObjectPtr<class AActor> SoftSourceActor; // 0x48 (0x28)
	class UStaticMeshComponent* SourceComponent; // 0x70 (0x8)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x78 (0x10)
	bool bUsePhysicsBodyVelocity; // 0x88 (0x1)
	bool bAllowSamplingFromStreamingLODs; // 0x89 (0x1)
	unsigned char unreflected_8a[0x2]; // 0x8a (0x2) 
	int LODIndex; // 0x8c (0x4)
	struct FNiagaraUserParameterBinding LODIndexUserParameter; // 0x90 (0x18)
	struct TArray<struct FName> FilteredSockets; // 0xa8 (0x10)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)

	/* Functions */

	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay (Underlying native function: OnSourceEndPlay 0x29a55c8)
	void OnSourceEndPlay(class AActor*& InSource, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Protected)
};

