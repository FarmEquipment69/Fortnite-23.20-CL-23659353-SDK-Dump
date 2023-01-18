// Class /Script/Engine.KismetRenderingLibrary
// Size: 0x28
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetRenderingLibrary.SetCastInsetShadowForAllAttachments (Underlying native function: SetCastInsetShadowForAllAttachments 0x9e142bc)
	static void SetCastInsetShadowForAllAttachments(class UPrimitiveComponent*& PrimitiveComponent, bool& bCastInsetShadow, bool& bLightAttachmentsAsGroup); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ResizeRenderTarget2D (Underlying native function: ResizeRenderTarget2D 0x9e132b0)
	static void ResizeRenderTarget2D(class UTextureRenderTarget2D*& TextureRenderTarget, int& Width, int& Height); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.RenderTargetCreateStaticTexture2DEditorOnly (Underlying native function: RenderTargetCreateStaticTexture2DEditorOnly 0x9e12ac8)
	static class UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D*& RenderTarget, struct FString& Name, struct TEnumAsByte<TextureCompressionSettings>& CompressionSettings, struct TEnumAsByte<TextureMipGenSettings>& MipSettings); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReleaseRenderTarget2D (Underlying native function: ReleaseRenderTarget2D 0x9e12a5c)
	static void ReleaseRenderTarget2D(class UTextureRenderTarget2D*& TextureRenderTarget); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetUV (Underlying native function: ReadRenderTargetUV 0x9e128b4)
	static struct FColor ReadRenderTargetUV(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, float& U, float& V); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRawUVArea (Underlying native function: ReadRenderTargetRawUVArea 0x9e12668)
	static struct TArray<struct FLinearColor> ReadRenderTargetRawUVArea(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, struct FBox2D& Area, bool& bNormalize); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRawUV (Underlying native function: ReadRenderTargetRawUV 0x9e12474)
	static struct FLinearColor ReadRenderTargetRawUV(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, float& U, float& V, bool& bNormalize); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRawPixelArea (Underlying native function: ReadRenderTargetRawPixelArea 0x9e12230)
	static struct TArray<struct FLinearColor> ReadRenderTargetRawPixelArea(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, int& MinX, int& MinY, int& MaxX, int& MaxY, bool& bNormalize); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRawPixel (Underlying native function: ReadRenderTargetRawPixel 0x9e120ac)
	static struct FLinearColor ReadRenderTargetRawPixel(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, int& X, int& Y, bool& bNormalize); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRaw (Underlying native function: ReadRenderTargetRaw 0x9e11c24)
	static bool ReadRenderTargetRaw(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, struct TArray<struct FLinearColor>& OutLinearSamples, bool& bNormalize); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetPixel (Underlying native function: ReadRenderTargetPixel 0x9e11ae8)
	static struct FColor ReadRenderTargetPixel(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, int& X, int& Y); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ReadRenderTarget (Underlying native function: ReadRenderTarget 0x9e11640)
	static bool ReadRenderTarget(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, struct TArray<struct FColor>& OutSamples, bool& bNormalize); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.MakeSkinWeightInfo (Underlying native function: MakeSkinWeightInfo 0x9e021c0)
	static struct FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int& Bone0, unsigned char& Weight0, int& Bone1, unsigned char& Weight1, int& Bone2, unsigned char& Weight2, int& Bone3, unsigned char& Weight3); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetRenderingLibrary.ImportFileAsTexture2D (Underlying native function: ImportFileAsTexture2D 0x9df8238)
	static class UTexture2D* ImportFileAsTexture2D(class UObject*& WorldContextObject, struct FString& Filename); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ImportBufferAsTexture2D (Underlying native function: ImportBufferAsTexture2D 0x9df8158)
	static class UTexture2D* ImportBufferAsTexture2D(class UObject*& WorldContextObject, struct TArray<unsigned char>& Buffer); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ExportTexture2D (Underlying native function: ExportTexture2D 0x9def230)
	static void ExportTexture2D(class UObject*& WorldContextObject, class UTexture2D*& Texture, struct FString& FilePath, struct FString& Filename); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ExportRenderTarget (Underlying native function: ExportRenderTarget 0x9deef58)
	static void ExportRenderTarget(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, struct FString& FilePath, struct FString& Filename); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget (Underlying native function: EndDrawCanvasToRenderTarget 0x10d73d8)
	static void EndDrawCanvasToRenderTarget(class UObject*& WorldContextObject, struct FDrawToRenderTargetContext& Context); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget (Underlying native function: DrawMaterialToRenderTarget 0x1186d2c)
	static void DrawMaterialToRenderTarget(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, class UMaterialInterface*& Material); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.CreateRenderTargetVolume (Underlying native function: CreateRenderTargetVolume 0x9de92c4)
	static class UTextureRenderTargetVolume* CreateRenderTargetVolume(class UObject*& WorldContextObject, int& Width, int& Height, int& Depth, struct TEnumAsByte<ETextureRenderTargetFormat>& Format, struct FLinearColor& ClearColor, bool& bAutoGenerateMipMaps); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.CreateRenderTarget2DArray (Underlying native function: CreateRenderTarget2DArray 0x9de8fec)
	static class UTextureRenderTarget2DArray* CreateRenderTarget2DArray(class UObject*& WorldContextObject, int& Width, int& Height, int& Slices, struct TEnumAsByte<ETextureRenderTargetFormat>& Format, struct FLinearColor& ClearColor, bool& bAutoGenerateMipMaps); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.CreateRenderTarget2D (Underlying native function: CreateRenderTarget2D 0x16be57c)
	static class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject*& WorldContextObject, int& Width, int& Height, struct TEnumAsByte<ETextureRenderTargetFormat>& Format, struct FLinearColor& ClearColor, bool& bAutoGenerateMipMaps); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ConvertRenderTargetToTexture2DEditorOnly (Underlying native function: ConvertRenderTargetToTexture2DEditorOnly 0x9de89b4)
	static void ConvertRenderTargetToTexture2DEditorOnly(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& RenderTarget, class UTexture2D*& Texture); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.ClearRenderTarget2D (Underlying native function: ClearRenderTarget2D 0x22229b4)
	static void ClearRenderTarget2D(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, struct FLinearColor& ClearColor); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetRenderingLibrary.CalculateProjectionMatrix (Underlying native function: CalculateProjectionMatrix 0x9de13c4)
	static struct FMatrix CalculateProjectionMatrix(struct FMinimalViewInfo& MinimalViewInfo); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetRenderingLibrary.BreakSkinWeightInfo (Underlying native function: BreakSkinWeightInfo 0x9dddd44)
	static void BreakSkinWeightInfo(struct FSkelMeshSkinWeightInfo& InWeight, int& Bone0, unsigned char& Weight0, int& Bone1, unsigned char& Weight1, int& Bone2, unsigned char& Weight2, int& Bone3, unsigned char& Weight3); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget (Underlying native function: BeginDrawCanvasToRenderTarget 0x10d7264)
	static void BeginDrawCanvasToRenderTarget(class UObject*& WorldContextObject, class UTextureRenderTarget2D*& TextureRenderTarget, class UCanvas*& Canvas, struct FVector2D& Size, struct FDrawToRenderTargetContext& Context); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

