// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x68
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
	struct FIntVector NumCells; // 0x38 (0xc)
	float CellSize; // 0x44 (0x4)
	int NumCellsMaxAxis; // 0x48 (0x4)
	enum ESetResolutionMethod SetResolutionMethod; // 0x4c (0x4)
	struct FVector WorldBBoxSize; // 0x50 (0x18)
};

