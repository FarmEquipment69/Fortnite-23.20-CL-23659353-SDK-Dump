// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0xe0
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
	int NumAttributes; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x70 (0x18)
	enum ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x88 (0x1)
	unsigned char bOverrideFormat; // 0x89 (0x1)
	unsigned char padding_8a[0x56]; // 0x8a (0x56)

	/* Functions */

	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize (Underlying native function: GetTextureSize 0x6c1f0bc)
	void GetTextureSize(class UNiagaraComponent*& Component, int& SizeX, int& SizeY, int& SizeZ); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize (Underlying native function: GetRawTextureSize 0x6c1ee34)
	void GetRawTextureSize(class UNiagaraComponent*& Component, int& SizeX, int& SizeY, int& SizeZ); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture (Underlying native function: FillVolumeTexture 0x6c1d5dc)
	bool FillVolumeTexture(class UNiagaraComponent*& Component, class UVolumeTexture*& Dest, int& AttributeIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture (Underlying native function: FillRawVolumeTexture 0x6c1d424)
	bool FillRawVolumeTexture(class UNiagaraComponent*& Component, class UVolumeTexture*& Dest, int& TilesX, int& TilesY, int& TileZ); // (Native | Public | HasOutParms | BlueprintCallable)
};

