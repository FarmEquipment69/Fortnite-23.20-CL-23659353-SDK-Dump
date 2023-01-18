// Class /Script/UMG.SlateBlueprintLibrary
// Size: 0x28
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute (Underlying native function: TransformVectorLocalToAbsolute 0x9b25b64)
	static struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D& LocalVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal (Underlying native function: TransformVectorAbsoluteToLocal 0x9b25a00)
	static struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D& AbsoluteVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute (Underlying native function: TransformScalarLocalToAbsolute 0x9b258cc)
	static float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float& LocalScalar); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal (Underlying native function: TransformScalarAbsoluteToLocal 0x9b25778)
	static float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float& AbsoluteScalar); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal (Underlying native function: ScreenToWidgetLocal 0x9b23824)
	static void ScreenToWidgetLocal(class UObject*& WorldContextObject, struct FGeometry& Geometry, struct FVector2D& ScreenPosition, struct FVector2D& LocalCoordinate, bool& bIncludeWindowPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute (Underlying native function: ScreenToWidgetAbsolute 0x9b236e0)
	static void ScreenToWidgetAbsolute(class UObject*& WorldContextObject, struct FVector2D& ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool& bIncludeWindowPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport (Underlying native function: ScreenToViewport 0x9b235d8)
	static void ScreenToViewport(class UObject*& WorldContextObject, struct FVector2D& ScreenPosition, struct FVector2D& ViewportPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport (Underlying native function: LocalToViewport 0x9b22640)
	static void LocalToViewport(class UObject*& WorldContextObject, struct FGeometry& Geometry, struct FVector2D& LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute (Underlying native function: LocalToAbsolute 0x9b224d0)
	static struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D& LocalCoordinate); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation (Underlying native function: IsUnderLocation 0x9b221cc)
	static bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft (Underlying native function: GetLocalTopLeft 0x9b21988)
	static struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize (Underlying native function: GetLocalSize 0x9b218a4)
	static struct FVector2D GetLocalSize(struct FGeometry& Geometry); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize (Underlying native function: GetAbsoluteSize 0x9b20998)
	static struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush (Underlying native function: EqualEqual_SlateBrush 0x22b7e2c)
	static bool EqualEqualSlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport (Underlying native function: AbsoluteToViewport 0x9b1e758)
	static void AbsoluteToViewport(class UObject*& WorldContextObject, struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal (Underlying native function: AbsoluteToLocal 0x9b1e614)
	static struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)
};

