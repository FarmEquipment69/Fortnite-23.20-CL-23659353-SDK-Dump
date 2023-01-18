// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
// Size: 0x60
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
	int NumCellsX; // 0x38 (0x4)
	int NumCellsY; // 0x3c (0x4)
	int NumCellsMaxAxis; // 0x40 (0x4)
	int NumAttributes; // 0x44 (0x4)
	bool SetGridFromMaxAxis; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FVector2D WorldBBoxSize; // 0x50 (0x10)
};

