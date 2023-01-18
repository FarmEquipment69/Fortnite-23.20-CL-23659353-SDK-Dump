// Class /Script/Engine.CanvasRenderTarget2D
// Size: 0x190
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x170 (0x10)
	struct TWeakObjectPtr<class UWorld> World; // 0x180 (0x8)
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x188 (0x1)
	unsigned char padding_189[0x7]; // 0x189 (0x7)

	/* Functions */

	// Function /Script/Engine.CanvasRenderTarget2D.UpdateResource (Underlying native function: UpdateResource 0x814132c)
	void UpdateResource(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.CanvasRenderTarget2D.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(class UCanvas*& Canvas, int& Width, int& Height); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.CanvasRenderTarget2D.GetSize (Underlying native function: GetSize 0x9cbe26c)
	void GetSize(int& Width, int& Height); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D (Underlying native function: CreateCanvasRenderTarget2D 0x9cbdb58)
	static class UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(class UObject*& WorldContextObject, class UClass*& CanvasRenderTarget2DClass, int& Width, int& Height); // (Final | Native | Static | Public | BlueprintCallable)
};

