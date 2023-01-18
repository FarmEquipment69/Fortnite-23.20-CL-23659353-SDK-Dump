// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x120
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x60 (0x18)
	enum ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x78 (0x1)
	unsigned char bOverrideFormat; // 0x79 (0x1)
	unsigned char unreflected_7a[0x56]; // 0x7a (0x56) 
	struct TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0xd0 (0x50)

	/* Functions */

	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize (Underlying native function: GetTextureSize 0x6c1efa8)
	void GetTextureSize(class UNiagaraComponent*& Component, int& SizeX, int& SizeY); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize (Underlying native function: GetRawTextureSize 0x6c1ed20)
	void GetRawTextureSize(class UNiagaraComponent*& Component, int& SizeX, int& SizeY); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D (Underlying native function: FillTexture2D 0x6c1d5dc)
	bool FillTexture2D(class UNiagaraComponent*& Component, class UTextureRenderTarget2D*& Dest, int& AttributeIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D (Underlying native function: FillRawTexture2D 0x6c1d2c0)
	bool FillRawTexture2D(class UNiagaraComponent*& Component, class UTextureRenderTarget2D*& Dest, int& TilesX, int& TilesY); // (Native | Public | HasOutParms | BlueprintCallable)
};

