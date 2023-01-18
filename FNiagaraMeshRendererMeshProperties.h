// ScriptStruct /Script/Niagara.NiagaraMeshRendererMeshProperties
// Size: 0x70
struct FNiagaraMeshRendererMeshProperties
{
	class UStaticMesh* Mesh; // 0x0 (0x8)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x8 (0x18)
	struct FVector Scale; // 0x20 (0x18)
	struct FRotator Rotation; // 0x38 (0x18)
	struct FVector PivotOffset; // 0x50 (0x18)
	enum ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

